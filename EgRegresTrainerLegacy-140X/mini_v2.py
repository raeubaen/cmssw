#!/usr/bin/env python3
"""MiniAOD -> side-by-side CMSSW C++ and Python regression feature trees.

Run inside CMSSW_14_0_25 with FWLite enabled. Uses persisted pat::Photon
full5x5 quantities, never ECAL rechits. No ROOT file is published on failure.
"""
import argparse
import array
import ast
import math
import os
import re
import ROOT

ROOT.gROOT.SetBatch(True)
ROOT.gSystem.Load('libFWCoreFWLite')
ROOT.FWLiteEnabler.enable()
ROOT.gSystem.Load('libDataFormatsFWLite')
ROOT.gSystem.Load('libCondFormatsGBRForest')
from DataFormats.FWLite import Events, Handle

CMSSW_REFERENCE_CPP = r"""
#include <vector>
#include <cmath>
#include <algorithm>
#include "DataFormats/EgammaCandidates/interface/Photon.h"
#include "DataFormats/EcalDetId/interface/EBDetId.h"
#include "DataFormats/EcalDetId/interface/EEDetId.h"
#include "DataFormats/Math/interface/deltaPhi.h"
namespace egregcheck {
std::vector<float> features(const reco::Photon& pho, float rho) {
  std::vector<float> d(32, 0.f);
  const auto& sc = pho.superCluster();
  const auto& seed = sc->seed();
  const auto& ss = pho.full5x5_showerShapeVariables();
  const double raw = sc->rawEnergy();
  const float inv = ss.e5x5 != 0.f ? 1.f/ss.e5x5 : 0.f;
  d[0]=raw; d[1]=sc->etaWidth(); d[2]=sc->phiWidth();
  d[3]=seed->energy()/raw; d[4]=ss.e5x5/raw;
  d[5]=pho.hadronicOverEm(); d[6]=rho;
  d[7]=seed->eta()-sc->position().Eta();
  d[8]=reco::deltaPhi(seed->phi(),sc->position().Phi());
  d[9]=pho.full5x5_r9();
  d[10]=ss.sigmaIetaIeta; d[11]=ss.sigmaIetaIphi; d[12]=ss.sigmaIphiIphi;
  d[13]=ss.maxEnergyXtal*inv; d[14]=ss.e2nd*inv;
  d[15]=ss.eTop*inv; d[16]=ss.eBottom*inv;
  d[17]=ss.eLeft*inv; d[18]=ss.eRight*inv;
  d[19]=ss.e2x5Max*inv; d[20]=ss.e2x5Left*inv;
  d[21]=ss.e2x5Right*inv; d[22]=ss.e2x5Top*inv;
  d[23]=ss.e2x5Bottom*inv; d[24]=pho.nSaturatedXtals();
  // clusters() is sometimes unavailable after MiniAOD slimming.
  d[25]=sc->clusters().isAvailable() ? std::max(0,int(sc->clusters().size()))
                                    : std::max(0,int(sc->clustersSize()));
  int ix=0, iy=0;
  if (pho.isEB()) {
    const EBDetId id(seed->seed());
    ix=id.ieta(); iy=id.iphi();
    const int sign=ix>0?1:-1;
    d[26]=ix; d[27]=iy;
    d[28]=(ix-sign)%5; d[29]=(iy-1)%2;
    d[30]=(std::abs(ix)<=25 ? ix-sign : ix-26*sign)%20;
    d[31]=(iy-1)%20;
  } else {
    const EEDetId id(seed->seed());
    ix=id.ix(); iy=id.iy();
    d[26]=ix; d[27]=iy; d[28]=sc->preshowerEnergy()/raw;
  }
  if (!pho.isEB()) d.resize(29);
  return d;
}
}
"""



def variables_from_repo(repo):
    path = os.path.join(repo, 'python', 'regtools.py')
    with open(path) as f:
        source = f.read()
    part = source.split('    def set_phoecal_default(self):', 1)[1].split('\n    def ', 1)[0]
    result = []
    for name in ('var_eb', 'var_ee'):
        m = re.search(r'self\.' + name + r"\s*=\s*':'\.join\(\[(.*?)\]\)", part, re.S)
        if not m:
            raise RuntimeError('Missing %s in %s' % (name, path))
        result.append(ast.literal_eval('[' + m.group(1) + ']'))
    assert (len(result[0]), len(result[1])) == (32, 29)
    return result


def branch_feature_name(expression):
    """Stable ROOT-safe branch name preserving the training expression."""
    return (expression.replace('/', '_over_').replace('.', '_')
            .replace('(', '').replace(')', '').replace('+', '_plus_')
            .replace('-', '_minus_').replace('*', '_times_'))


def feature_names(ebvars, eevars):
    """Match the same index in the two training lists; verify all names."""
    if ebvars[:26] != eevars[:26]:
        raise RuntimeError('Unexpected EB/EE training feature order')
    result = []
    for i in range(32):
        expression = ebvars[i]
        result.append(branch_feature_name(expression))
    if len(set(result)) != len(result):
        raise RuntimeError('Non-unique sanitized feature branch names')
    return result


def value(obj, name):
    attr = getattr(obj, name)
    return float(attr() if callable(attr) else attr)


def full5x5(pho, sh, name):
    # First try the persisted ShowerShape data member, then the pat::Photon
    # full5x5 accessor. eMax is exposed as full5x5_maxEnergyXtal().
    candidates = {
        'eMax': ('full5x5_maxEnergyXtal',),
        'sigmaIetaIeta': ('full5x5_sigmaIetaIeta',),
        'sigmaIetaIphi': ('full5x5_sigmaIetaIphi',),
        'sigmaIphiIphi': ('full5x5_sigmaIphiIphi',),
    }
    for obj, names in (
        (sh, ('maxEnergyXtal',) if name == 'eMax' else (name,)),
        (pho, candidates.get(name, ()) + ('full5x5_' + name,)),
    ):
        for candidate in names:
            if hasattr(obj, candidate):
                return value(obj, candidate)
    raise RuntimeError('Missing persisted full5x5 %s on pat::Photon' % name)


def cxx_mod(a, b):
    # C++ integer remainder truncates toward zero (Python % does not).
    return a - math.trunc(a / b) * b


def make_inputs(pho, rho):
    sc = pho.superCluster()
    if sc.isNull() or not sc.isAvailable():
        return None
    # Read only persisted MiniAOD photon and SuperCluster data.
    eb = bool(pho.isEB())
    if not eb and not bool(pho.isEE()):
        return None
    sh = pho.full5x5_showerShapeVariables()
    raw, es = float(sc.rawEnergy()), float(sc.preshowerEnergy())
    if raw <= 0:
        return None
    seed = sc.seed()
    if seed.isNull() or not seed.isAvailable():
        return None
    ix = int(value(sc, 'seedCrysIEtaOrIx'))
    iy = int(value(sc, 'seedCrysIPhiOrIy'))
    sign_eta = 1 if ix > 0 else -1
    eta_corr = ix - sign_eta
    eta_corr26 = ix - 26 * sign_eta
    d = {
        'sc.rawEnergy': raw, 'sc.rawESEnergy': es,
        'sc.etaWidth': value(sc, 'etaWidth'),
        'sc.phiWidth': value(sc, 'phiWidth'),
        'sc.seedClusEnergy': value(seed, 'energy'),
        # IMPORTANT: cone-based H/E, not hadTowOverEm().
        'pho.hademCone': value(pho, 'hadronicOverEm'),
        'rho': float(rho),
        'sc.dEtaSeedSC': value(seed, 'eta') - value(sc, 'eta'),
        'sc.dPhiSeedSC': math.atan2(math.sin(value(seed, 'phi') - value(sc, 'phi')),
                                       math.cos(value(seed, 'phi') - value(sc, 'phi'))),
        'pho.nrSatCrys': value(pho, 'nSaturatedXtals'),
        'sc.numberOfClusters': value(sc, 'clustersSize'),
        'sc.iEtaOrX': ix, 'sc.iPhiOrY': iy,
        'sc.iEtaMod5': cxx_mod(eta_corr, 5),
        'sc.iPhiMod2': cxx_mod(iy - 1, 2),
        'sc.iEtaMod20': cxx_mod(eta_corr if abs(ix) <= 25 else eta_corr26, 20),
        'sc.iPhiMod20': cxx_mod(iy - 1, 20),
    }
    for name in ('e5x5', 'e3x3', 'sigmaIetaIeta', 'sigmaIetaIphi',
                 'sigmaIphiIphi', 'eMax', 'e2nd', 'eTop', 'eBottom',
                 'eLeft', 'eRight', 'e2x5Max', 'e2x5Left', 'e2x5Right',
                 'e2x5Top', 'e2x5Bottom'):
        d['ssFull.' + name] = full5x5(pho, sh, name)
    # Official photon regression uses full5x5_r9(), not e3x3/rawEnergy.
    d['ssFull.e3x3'] = float(pho.full5x5_r9()) * raw
    d['ssFull.sigmaIEtaIEta'] = d['ssFull.sigmaIetaIeta']
    d['ssFull.sigmaIPhiIPhi'] = d['ssFull.sigmaIphiIphi']
    d['phoSSFull.sigmaIEtaIPhi'] = d['ssFull.sigmaIetaIphi']
    return eb, raw, es, d


def expression(expr, values):
    if '/' in expr:
        a, b = expr.split('/', 1)
        denominator = values[b]
        if denominator == 0:
            raise RuntimeError('Zero denominator in ' + expr)
        return float(values[a] / denominator)
    return float(values[expr])


def load_forests(path):
    f = ROOT.TFile.Open(path)
    if not f or f.IsZombie():
        raise RuntimeError('Cannot open ' + path)
    tree = f.Get('GBRDWrapperRcd')
    if not tree or tree.GetEntries() != 1:
        raise RuntimeError('Expected single-entry GBRDWrapperRcd')
    tree.GetEntry(0)
    result = []
    for label in ('photon_eb_ecalOnly_5To300_0p2To2_mean', 'photon_ee_ecalOnly_5To300_0p2To2_mean'):
        name = 'GBRForestD__' + label
        if not tree.GetBranch(name):
            raise RuntimeError('Missing ' + name)
        forest = getattr(tree, name, None)
        if forest is None or not hasattr(forest, 'GetResponse'):
            raise RuntimeError('Could not deserialize ' + name + ' using CMSSW ROOT dictionaries')
        result.append(forest)
    return f, tree, result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repo', default=os.path.dirname(os.path.abspath(__file__)))
    parser.add_argument('--mini', nargs='+', required=True)
    parser.add_argument('--weights', required=True)
    parser.add_argument('--output', default='PhotonRegressionFriend.root')
    parser.add_argument('--max-events', type=int, default=-1)
    parser.add_argument('--range-min', type=float, default=0.2)
    parser.add_argument('--range-max', type=float, default=2.0)
    args = parser.parse_args()
    ebvars, eevars = variables_from_repo(args.repo)
    names = feature_names(ebvars, eevars)
    if not ROOT.gInterpreter.Declare(CMSSW_REFERENCE_CPP):
        raise RuntimeError("Cannot compile CMSSW reference feature extractor")
    print('Features from regtools.py: EB=%d EE=%d' % (len(ebvars), len(eevars)), flush=True)
    weightfile, payload_tree, forests = load_forests(args.weights)
    partial = args.output + '.partial'
    if os.path.exists(partial):
        os.unlink(partial)
    out = ROOT.TFile(partial, 'RECREATE')
    if not out or out.IsZombie():
        raise RuntimeError('Cannot create ' + partial)
    try:
        inp = ROOT.TTree('egRegTree', 'Photon regression inputs, 140X')
        friend = ROOT.TTree('egRegTreeFriend', 'Independent photon energy regression')
        buffers = {}
        types = {'run': 'i', 'lumi': 'i', 'event': 'Q', 'photonIdx': 'i',
                 'isEB': 'i', 'nInputs': 'i', 'nFeatureDiff': 'i'}
        leaf = {'i': 'I', 'Q': 'l', 'f': 'F'}
        def add(tree, name):
            typ = types.get(name, 'f')
            b = array.array(typ, [0])
            tree.Branch(name, b, name + '/' + leaf[typ])
            buffers[(tree.GetName(), name)] = b
            return b
        shared = ('run', 'lumi', 'event', 'photonIdx', 'isEB', 'energyOfficial',
                  'energyNew', 'gbrResponse', 'energyRatio', 'energyRelDiff',
                  'rawEnergy', 'preshowerEnergy', 'gbrResponsePy', 'energyNewPy', 'maxFeatureAbsDiff', 'nFeatureDiff')
        for tree in (inp, friend):
            for name in shared:
                add(tree, name)
        add(inp, 'nInputs')
        # Human-readable branch names from the exact regtools.py expressions.
        # EB-only variables are NaN for EE photons.
        cmsswbuf = [add(inp, name + '_cmssw') for name in names]
        trainerbuf = [add(inp, name + '_trainer') for name in names]
        diffbuf = [add(inp, name + '_diff') for name in names]
        ee_last_name = branch_feature_name(eevars[28])
        ee_last_cmssw = add(inp, ee_last_name + '_cmssw')
        ee_last_trainer = add(inp, ee_last_name + '_trainer')
        ee_last_diff = add(inp, ee_last_name + '_diff')
        feature_labels = ROOT.TNamed(
            'feature_order',
            'EB=' + '|'.join(ebvars) + '\\nEE=' + '|'.join(eevars))

        evts = Events(args.mini)
        phoh = Handle('std::vector<pat::Photon>')
        rhoh = Handle('double')
        count = 0
        skipped_sc = 0
        mismatched = 0
        for ievt, event in enumerate(evts):
            if args.max_events >= 0 and ievt >= args.max_events:
                break
            event.getByLabel('slimmedPhotons', phoh)
            event.getByLabel('fixedGridRhoFastjetAll', rhoh)
            if not phoh.isValid() or not rhoh.isValid():
                raise RuntimeError('Missing slimmedPhotons or fixedGridRhoFastjetAll in event %d' % ievt)
            rho = float(rhoh.product()[0]) if hasattr(rhoh.product(), '__getitem__') else float(rhoh.product())
            aux = event.eventAuxiliary()
            for ipho, pho in enumerate(phoh.product()):
                result = make_inputs(pho, rho)
                if result is None:
                    skipped_sc += 1
                    continue
                eb, raw, es, vals = result
                vector = [expression(s, vals) for s in (ebvars if eb else eevars)]
                if not all(math.isfinite(v) for v in vector):
                    raise RuntimeError('Nonfinite regression feature at event %d photon %d' % (ievt, ipho))
                # Reference vector computed independently in C++, following
                # EGRegressionModifierV3::getRegData(reco::Photon).
                # Seed coordinates use the non-closest-to-centre branch.
                cxx = list(ROOT.egregcheck.features(pho, float(rho)))
                if len(cxx) != len(vector):
                    raise RuntimeError('Feature count mismatch')
                diffs = [float(cxx[i]) - float(vector[i]) for i in range(len(vector))]
                n_diff = sum(abs(d) > 1e-5 for d in diffs)
                if n_diff:
                    mismatched += 1
                response = float(forests[0 if eb else 1].GetResponse(array.array('f', cxx)))
                response_py = float(forests[0 if eb else 1].GetResponse(array.array('f', vector)))
                # EgammaBDTOutputTransformer, range 0p2To2.
                offset = 0.5 * (args.range_min + args.range_max)
                scale = 0.5 * (args.range_max - args.range_min)
                correction = offset + scale * math.sin(response)
                if correction <= 0.0:
                    correction = 1.0
                energy_new = (raw + es) * correction
                correction_py = offset + scale * math.sin(response_py)
                energy_new_py = (raw + es) * (correction_py if correction_py > 0 else 1.0)
                # Reco photon regression2 energy stored in MiniAOD.
                # getCorrectedEnergy takes reco::Photon::P4type, NOT a string.
                official = float(pho.getCorrectedEnergy(ROOT.reco.Photon.regression2))
                if not math.isfinite(official) or official <= 0.0:
                    raise RuntimeError('Invalid stored regression2 energy: event %d photon %d: %g' %
                                       (int(aux.event()), ipho, official))
                data = dict(run=int(aux.run()), lumi=int(aux.luminosityBlock()),
                            event=int(aux.event()), photonIdx=ipho, isEB=int(eb),
                            energyOfficial=official, energyNew=energy_new,
                            gbrResponse=response, energyRatio=energy_new / official if official else float('nan'),
                            energyRelDiff=(energy_new - official) / official if official else float('nan'),
                            rawEnergy=raw, preshowerEnergy=es,
                            gbrResponsePy=response_py, energyNewPy=energy_new_py,
                            maxFeatureAbsDiff=max(map(abs, diffs)) if diffs else 0.,
                            nFeatureDiff=n_diff)
                for tree in (inp, friend):
                    for key, val in data.items():
                        buffers[(tree.GetName(), key)][0] = val
                buffers[('egRegTree', 'nInputs')][0] = len(vector)
                for i in range(32):
                    cmsswbuf[i][0] = cxx[i] if i < len(cxx) else float('nan')
                    trainerbuf[i][0] = vector[i] if i < len(vector) else float('nan')
                    diffbuf[i][0] = diffs[i] if i < len(diffs) else float('nan')
                ee_last_cmssw[0] = cxx[28] if not eb else float('nan')
                ee_last_trainer[0] = vector[28] if not eb else float('nan')
                ee_last_diff[0] = diffs[28] if not eb else float('nan')
                if not eb:
                    # Avoid falsely labeling EE preshower fraction as EB iEtaMod5.
                    cmsswbuf[28][0] = float('nan')
                    trainerbuf[28][0] = float('nan')
                    diffbuf[28][0] = float('nan')
                inp.Fill()
                friend.Fill()
                count += 1
        out.cd()
        inp.Write()
        friend.Write()
        feature_labels.Write()
        ROOT.TNamed('branch_name_note',
            'Feature names derive from EB regtools.py expressions; for EE, '
            'the final three EB-only branches are NaN and the final EE '
            'feature is saved in the separately named branch below.').Write()
        out.Close()
        os.replace(partial, args.output)
        print('Wrote %d photons to %s; skipped=%d, feature-mismatch photons=%d' % (count, args.output, skipped_sc, mismatched), flush=True)
    except BaseException:
        out.Close()
        if os.path.exists(partial):
            os.unlink(partial)
        raise
    finally:
        weightfile.Close()


if __name__ == '__main__':
    main()
