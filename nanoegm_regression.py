#!/usr/bin/env python3
"""Re-evaluate the 2024 photon HighEt mean GBRForestD on EGM NanoAOD.

Exact feature formulas/order and forest branches follow the user-supplied
working EGM Nano implementation. Reads Events/Photon_* with uproot;
writes a flat per-photon TTree with named features and before/after energy.

Requires: numpy, awkward, uproot, PyROOT; local GBRForestD.h/GBRTreeD.h.
Does not run CMSSW's EGRegressionModifierV3.
"""
import argparse
import math
import os
from pathlib import Path
import numpy as np
import awkward as ak
import uproot

BASE = [
    "raw", "etaWidth", "phiWidth", "seedOverRaw", "e5x5OverRaw",
    "hademCone", "rho", "dEtaSeedSC", "dPhiSeedSC", "r9",
    "sieie", "sieip", "sipip", "eMaxOver5", "e2ndOver5",
    "eTopOver5", "eBottomOver5", "eLeftOver5", "eRightOver5",
    "e2x5maxOver5", "e2x5LeftOver5", "e2x5RightOver5",
    "e2x5TopOver5", "e2x5BottomOver5", "nSat", "nClusters",
    "seedIetaX", "seedIphiY",
]
EB_NAMES = BASE + ["iEtaMod5", "iPhiMod2", "iEtaMod20", "iPhiMod20"]
EE_NAMES = BASE + ["esOverRaw"]

# NanoAOD Photon fields, exactly as used by the supplied working code.
PHOTON_FIELDS = [
    "energy", "energyRaw", "rawPreshowerEnergy", "e5x5",
    "dEtaSeedClusSuperClus", "dPhiSeedClusSuperClus", "etaWidth", "phiWidth", "seedClusEnergy",
    "hoe", "r9", "esEnergyOverRawE", "sieie", "sieip", "sigmaIphiIphiFull5x5",
    "nSaturatedXtals", "numberOfClusters", "seediEtaOriX",
    "seediPhiOriY", "iEtaMod5", "iPhiMod2", "iEtaMod20",
    "iPhiMod20", "isScEtaEB", "isScEtaEE",
    "eMax", "e2nd", "eTop", "eBottom", "eLeft", "eRight",
    "e2x5max", "e2x5Left", "e2x5Right", "e2x5Top", "e2x5Bottom",
]
RATIOS = {
    "eMaxOver5": "eMax", "e2ndOver5": "e2nd",
    "eTopOver5": "eTop", "eBottomOver5": "eBottom",
    "eLeftOver5": "eLeft", "eRightOver5": "eRight",
    "e2x5maxOver5": "e2x5max", "e2x5LeftOver5": "e2x5Left",
    "e2x5RightOver5": "e2x5Right", "e2x5TopOver5": "e2x5Top",
    "e2x5BottomOver5": "e2x5Bottom",
}
BRANCH_EB = "GBRForestD__photon_eb_ecalOnly_5To300_0p2To2_mean"
BRANCH_EE = "GBRForestD__photon_ee_ecalOnly_5To300_0p2To2_mean"


# Exact expressions copied from set_phoecal_default() in the supplied
# EgRegresTrainerLegacy-140X/python/regtools.py, in GBR input order.
TRAINER_EB_EXPRESSIONS = ['sc.rawEnergy', 'sc.etaWidth', 'sc.phiWidth', 'sc.seedClusEnergy/sc.rawEnergy', 'ssFull.e5x5/sc.rawEnergy', 'pho.hademCone', 'rho', 'sc.dEtaSeedSC', 'sc.dPhiSeedSC', 'ssFull.e3x3/sc.rawEnergy', 'ssFull.sigmaIEtaIEta', 'phoSSFull.sigmaIEtaIPhi', 'ssFull.sigmaIPhiIPhi', 'ssFull.eMax/ssFull.e5x5', 'ssFull.e2nd/ssFull.e5x5', 'ssFull.eTop/ssFull.e5x5', 'ssFull.eBottom/ssFull.e5x5', 'ssFull.eLeft/ssFull.e5x5', 'ssFull.eRight/ssFull.e5x5', 'ssFull.e2x5Max/ssFull.e5x5', 'ssFull.e2x5Left/ssFull.e5x5', 'ssFull.e2x5Right/ssFull.e5x5', 'ssFull.e2x5Top/ssFull.e5x5', 'ssFull.e2x5Bottom/ssFull.e5x5', 'pho.nrSatCrys', 'sc.numberOfClusters', 'sc.iEtaOrX', 'sc.iPhiOrY', 'sc.iEtaMod5', 'sc.iPhiMod2', 'sc.iEtaMod20', 'sc.iPhiMod20']
TRAINER_EE_EXPRESSIONS = ['sc.rawEnergy', 'sc.etaWidth', 'sc.phiWidth', 'sc.seedClusEnergy/sc.rawEnergy', 'ssFull.e5x5/sc.rawEnergy', 'pho.hademCone', 'rho', 'sc.dEtaSeedSC', 'sc.dPhiSeedSC', 'ssFull.e3x3/sc.rawEnergy', 'ssFull.sigmaIEtaIEta', 'phoSSFull.sigmaIEtaIPhi', 'ssFull.sigmaIPhiIPhi', 'ssFull.eMax/ssFull.e5x5', 'ssFull.e2nd/ssFull.e5x5', 'ssFull.eTop/ssFull.e5x5', 'ssFull.eBottom/ssFull.e5x5', 'ssFull.eLeft/ssFull.e5x5', 'ssFull.eRight/ssFull.e5x5', 'ssFull.e2x5Max/ssFull.e5x5', 'ssFull.e2x5Left/ssFull.e5x5', 'ssFull.e2x5Right/ssFull.e5x5', 'ssFull.e2x5Top/ssFull.e5x5', 'ssFull.e2x5Bottom/ssFull.e5x5', 'pho.nrSatCrys', 'sc.numberOfClusters', 'sc.iEtaOrX', 'sc.iPhiOrY', 'sc.rawESEnergy/sc.rawEnergy']

def sanitize(expression):
    return (expression.replace('/', '_over_').replace('.', '_')
            .replace('(', '').replace(')', '').replace('+', '_plus_')
            .replace('-', '_minus_').replace('*', '_times_'))


def output_feature_names():
    if (len(TRAINER_EB_EXPRESSIONS), len(TRAINER_EE_EXPRESSIONS)) != (32, 29):
        raise RuntimeError('Wrong embedded trainer feature counts')
    if TRAINER_EB_EXPRESSIONS[:26] != TRAINER_EE_EXPRESSIONS[:26]:
        raise RuntimeError('Unexpected EB/EE feature alignment')
    eb_names = [sanitize(v) + '_nano' for v in TRAINER_EB_EXPRESSIONS]
    ee_names = [sanitize(v) + '_nano' for v in TRAINER_EE_EXPRESSIONS]
    if len(set(eb_names + ee_names)) != 33:
        raise RuntimeError('Duplicate or missing feature branch names')
    return eb_names, ee_names


def make_reader(headers):
    import ROOT
    ROOT.gROOT.SetBatch(True)
    if not (headers / "GBRForestD.h").is_file() or not (headers / "GBRTreeD.h").is_file():
        raise FileNotFoundError("Need GBRForestD.h and GBRTreeD.h in " + str(headers))
    ROOT.gInterpreter.AddIncludePath(str(headers))
    if not ROOT.gInterpreter.Declare('#include "GBRForestD.h"'):
        raise RuntimeError("Cannot compile GBRForestD.h")
    ROOT.gInterpreter.GenerateDictionary(
        "GBRTreeD;GBRForestD;std::vector<GBRTreeD>",
        "GBRForestD.h;GBRTreeD.h;vector")
    code = r"""
    #include <memory>
    #include <stdexcept>
    #include <string>
    #include <vector>
    #include "TFile.h"
    #include "TTree.h"
    #include "GBRForestD.h"
    class PhotonHighEtNanoReader {
      std::unique_ptr<TFile> file_;
      GBRForestD* eb_ = nullptr;
      GBRForestD* ee_ = nullptr;
    public:
      explicit PhotonHighEtNanoReader(const std::string& path) {
        file_.reset(TFile::Open(path.c_str(), "READ"));
        if (!file_ || file_->IsZombie())
          throw std::runtime_error("Cannot open weights: " + path);
        auto* tree = dynamic_cast<TTree*>(file_->Get("GBRDWrapperRcd"));
        if (!tree || tree->GetEntries() != 1)
          throw std::runtime_error("Expected one GBRDWrapperRcd entry");
        if (tree->SetBranchAddress(
              "GBRForestD__photon_eb_ecalOnly_5To300_0p2To2_mean", &eb_) < 0 ||
            tree->SetBranchAddress(
              "GBRForestD__photon_ee_ecalOnly_5To300_0p2To2_mean", &ee_) < 0)
          throw std::runtime_error("Missing exact HighEt mean forest branches");
        if (tree->GetEntry(0) <= 0 || !eb_ || !ee_)
          throw std::runtime_error("Cannot deserialize forests");
        auto* eb_copy = new GBRForestD(*eb_);
        auto* ee_copy = new GBRForestD(*ee_);
        tree->ResetBranchAddresses();
        eb_ = eb_copy;
        ee_ = ee_copy;
        if (eb_->Trees().empty() || ee_->Trees().empty())
          throw std::runtime_error("Empty forest");
      }
      ~PhotonHighEtNanoReader() { delete eb_; delete ee_; }
      double evaluate(bool isEB, const std::vector<float>& x) const {
        if (x.size() != (isEB ? 32u : 29u))
          throw std::runtime_error("Wrong number of inputs");
        return (isEB ? eb_ : ee_)->GetResponse(x.data());
      }
    };
    """
    if not ROOT.gInterpreter.Declare(code):
        raise RuntimeError("Cannot compile PhotonHighEtNanoReader")
    return ROOT


def flatten(values):
    return np.asarray(ak.to_numpy(ak.flatten(values, axis=1)), dtype=np.float64)


def div(a, b):
    return np.divide(a, b, out=np.full_like(a, np.nan, dtype=np.float64), where=b != 0)


def get_features(chunk, photon_prefix, rho_branch):
    counts = np.asarray(ak.to_numpy(chunk["n" + photon_prefix]), dtype=np.int64)
    total = int(counts.sum())

    def get(name):
        return flatten(chunk[photon_prefix + "_" + name])

    rho = np.repeat(np.asarray(ak.to_numpy(chunk[rho_branch]), dtype=np.float64), counts)
    raw = get("energyRaw")
    es = get("rawPreshowerEnergy")
    e5 = get("e5x5")
    x = {
        "raw": raw,
        "etaWidth": get("etaWidth"),
        "phiWidth": get("phiWidth"),
        "seedOverRaw": div(get("seedClusEnergy"), raw),
        "e5x5OverRaw": div(e5, raw),
        "hademCone": get("hoe"),
        "rho": rho,
        "dEtaSeedSC": get("dEtaSeedClusSuperClus"),
        "dPhiSeedSC": get("dPhiSeedClusSuperClus"),
        "r9": get("r9"),
        "sieie": get("sieie"),
        "sieip": get("sieip"),
        "sipip": get("sigmaIphiIphiFull5x5"),
        "nSat": get("nSaturatedXtals"),
        "nClusters": get("numberOfClusters"),
        "seedIetaX": get("seediEtaOriX"),
        "seedIphiY": get("seediPhiOriY"),
        "iEtaMod5": get("iEtaMod5"),
        "iPhiMod2": get("iPhiMod2"),
        "iEtaMod20": ( #https://github.com/cms-sw/cmssw/blob/e843d213241db3c199f526a64ce40cb6c0998a91/PhysicsTools/NanoAOD/python/photons_cff.py#L265
            lambda ieta: np.fmod(
                ieta - np.where(
                    np.abs(ieta) <= 25,
                    np.sign(ieta),
                    26 * np.sign(ieta)
                ),
                20
            )
        )(get("seediEtaOriX")),
        "iPhiMod20": get("iPhiMod20"),
        "esOverRaw": get("esEnergyOverRawE"),
    }
    for feature, source in RATIOS.items():
        x[feature] = div(get(source), e5)
    eb = get("isScEtaEB").astype(bool)
    ee = get("isScEtaEE").astype(bool)
    if np.any(eb & ee):
        raise ValueError("Overlapping EB and EE flags")
    for mask, names, region in ((eb, EB_NAMES, "EB"), (ee, EE_NAMES, "EE")):
        if mask.any():
            matrix = np.column_stack([x[name][mask] for name in names]).astype(np.float32)
            if not np.isfinite(matrix).all():
                bad = int(np.count_nonzero(~np.isfinite(matrix).all(axis=1)))
                raise ValueError(f"{region}: {bad} photon rows with NaN/Inf features")
    return counts, raw, es, x, eb, ee


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--input", nargs="+", required=True, help="EGM NanoAOD ROOT files (local or XRootD)")
    ap.add_argument("--weights", required=True, help="FWLiteESRecordWriterAnalyzer forest dump ROOT")
    ap.add_argument("--headers", type=Path, default=Path(__file__).resolve().parent / "regressionReEvaluation",
                    help="Directory with standalone GBRForestD.h and GBRTreeD.h")
    ap.add_argument("--output", default="EGMNanoHighEtFeatures.root")
    ap.add_argument("--tree", default="Events")
    ap.add_argument("--photon-prefix", default="Photon")
    ap.add_argument("--step-size", default="20 MB", help="uproot iteration step size")
    ap.add_argument("--max-events", type=int, default=-1)
    args = ap.parse_args()

    eb_output_names, ee_output_names = output_feature_names()
    ROOT = make_reader(args.headers)
    reader = ROOT.PhotonHighEtNanoReader(str(args.weights))
    import array
    required = ["run", "luminosityBlock", "event", "n" + args.photon_prefix]
    required += [args.photon_prefix + "_" + f for f in PHOTON_FIELDS]

    # Resolve rho exactly as in the supplied NanoAOD implementation.
    with uproot.open(args.input[0] + ":" + args.tree) as first:
        available = set(first.keys())
        rho_branch = ("Rho_fixedGridRhoAll" if "Rho_fixedGridRhoAll" in available
                      else "fixedGridRhoFastjetAll" if "fixedGridRhoFastjetAll" in available
                      else None)
        if rho_branch is None:
            raise KeyError("Neither Rho_fixedGridRhoAll nor fixedGridRhoFastjetAll is available")
        missing = [b for b in required if b not in available]
        if missing:
            raise KeyError("Missing EGM Nano branches: " + ", ".join(missing))
    required.append(rho_branch)

    # Explicit schema: one entry per photon, scalar named features.
    schema = {
        "run": np.uint32, "luminosityBlock": np.uint32,
        "event": np.uint64, "photonIdx": np.int32, "isEB": np.int32,
        "isEE": np.int32, "hasRegression": np.int32,
        "energyBefore": np.float64, "energyAfter": np.float64,
        "energyRaw": np.float64, "rawPreshowerEnergy": np.float64,
        "regressionFactor": np.float64, "gbrResponse": np.float64,
        "energyRatio": np.float64,
    }
    schema.update({name: np.float32 for name in sorted(set(eb_output_names + ee_output_names))})

    partial = args.output + ".partial.root"
    if os.path.exists(partial):
        os.remove(partial)
    total_events = 0
    total_photons = 0
    try:
        with uproot.recreate(partial) as fout:
            out = fout.mktree("egRegNanoTree", schema)
            for file_name in args.input:
                with uproot.open(file_name + ":" + args.tree) as tree:
                    if not set(required).issubset(tree.keys()):
                        raise KeyError("Missing required branches in " + file_name)
                    for chunk in tree.iterate(required, step_size=args.step_size, library="ak", how=dict):
                        n_events = len(chunk["event"])
                        if args.max_events >= 0:
                            left = args.max_events - total_events
                            if left <= 0:
                                break
                            if n_events > left:
                                chunk = {k: v[:left] for k, v in chunk.items()}
                                n_events = left
                        total_events += n_events
                        counts, raw, es, features, eb, ee = get_features(
                            chunk, args.photon_prefix, rho_branch)
                        n = len(raw)
                        before = flatten(chunk[args.photon_prefix + "_energy"])
                        response = np.full(n, np.nan, dtype=np.float64)
                        factor = np.full(n, np.nan, dtype=np.float64)
                        for mask, names, is_eb in ((eb, EB_NAMES, True), (ee, EE_NAMES, False)):
                            indices = np.flatnonzero(mask)
                            for idx in indices:
                                vec = ROOT.std.vector("float")(
                                    [float(np.float32(features[name][idx])) for name in names])
                                response[idx] = reader.evaluate(is_eb, vec)
                            factor[mask] = 1.1 + 0.9 * np.sin(response[mask])
                        after = np.where(np.isfinite(factor), (raw + es) * factor, before)
                        if not np.isfinite(after).all():
                            raise ValueError("Nonfinite regression energy")
                        data = {
                            "run": np.repeat(np.asarray(ak.to_numpy(chunk["run"]), dtype=np.uint32), counts),
                            "luminosityBlock": np.repeat(np.asarray(ak.to_numpy(chunk["luminosityBlock"]), dtype=np.uint32), counts),
                            "event": np.repeat(np.asarray(ak.to_numpy(chunk["event"]), dtype=np.uint64), counts),
                            "photonIdx": np.concatenate([np.arange(c, dtype=np.int32) for c in counts]) if n else np.empty(0, dtype=np.int32),
                            "isEB": eb.astype(np.int32),
                            "isEE": ee.astype(np.int32),
                            "hasRegression": (eb | ee).astype(np.int32),
                            "energyBefore": before,
                            "energyAfter": after,
                            "energyRaw": raw,
                            "rawPreshowerEnergy": es,
                            "regressionFactor": factor,
                            "gbrResponse": response,
                            "energyRatio": div(after, before),
                        }
                        # Same feature stems as MiniAOD, with *_nano suffix, by GBR input index.
                        for output_name in set(eb_output_names + ee_output_names):
                            data[output_name] = np.full(n, np.nan, dtype=np.float32)
                        for mask, feature_names, output_names in (
                            (eb, EB_NAMES, eb_output_names),
                            (ee, EE_NAMES, ee_output_names),
                        ):
                            for source_name, output_name in zip(feature_names, output_names):
                                data[output_name][mask] = features[source_name][mask].astype(np.float32)
                        if n:
                            out.extend(data)
                        total_photons += n
                        print(f"\rEvents: {total_events}  photons: {total_photons}", end="", flush=True)
                if args.max_events >= 0 and total_events >= args.max_events:
                    break
        os.replace(partial, args.output)
    except BaseException:
        if os.path.exists(partial):
            os.remove(partial)
        raise
    print(f"\nSaved {total_photons} photons from {total_events} events to {args.output}")
    print("Branches:", BRANCH_EB, "and", BRANCH_EE)
    print("Feature branch names: same stems as MiniAOD, with *_nano suffix (embedded from regtools.py).")
    print("Features: 32 EB / 29 EE; energyBefore = Nano Photon_energy; energyAfter = reevaluated HighEt.")


if __name__ == "__main__":
    main()
