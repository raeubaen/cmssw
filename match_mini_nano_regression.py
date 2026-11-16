#!/usr/bin/env python3
"""Join MiniAOD and EGM NanoAOD photon regression trees into one ROOT TTree.

Exact event match (run, lumi, event), followed by index match if consistent,
otherwise unique raw-energy assignment within the event. Never silently match
ambiguous photons. All input branches are retained with _mini/_nano where needed.
For common features, create <feature>_delta = <feature>_nano - <feature>_trainer.
Requires numpy and uproot.
"""
import argparse
from collections import defaultdict
from pathlib import Path
import numpy as np
import uproot


def load(path, treename):
    with uproot.open(f'{path}:{treename}') as tree:
        return tree.arrays(library='np')


def event_key(a, i, lumi):
    return (int(a['run'][i]), int(a[lumi][i]), int(a['event'][i]))


def unique_rows(a, lumi, label):
    groups = defaultdict(list)
    for i in range(len(a['event'])):
        groups[event_key(a, i, lumi)].append(i)
    for key, indices in groups.items():
        ids = [int(a['photonIdx'][i]) for i in indices]
        if len(ids) != len(set(ids)):
            raise ValueError(f'{label}: duplicate photonIdx for event {key}')
    return groups


def consistent(m, n, mi, ni, rtol, atol):
    if int(m['isEB'][mi]) != int(n['isEB'][ni]):
        return False
    a = float(m['rawEnergy'][mi]); b = float(n['energyRaw'][ni])
    return np.isfinite(a) and np.isfinite(b) and abs(a-b) <= atol + rtol*max(abs(a), abs(b))


def match_event(m, n, mids, nids, rtol, atol, strategy):
    """Return pairs, or raise for ambiguous/non-unique associations."""
    n_by_idx = {int(n['photonIdx'][i]): i for i in nids}
    indexed = [(i, n_by_idx[int(m['photonIdx'][i])]) for i in mids
               if int(m['photonIdx'][i]) in n_by_idx]
    if strategy == 'index':
        return [(i,j) for i,j in indexed if consistent(m,n,i,j,rtol,atol)]
    # Index is authoritative only if all same-index pairs pass the raw-energy check.
    if indexed and all(consistent(m,n,i,j,rtol,atol) for i,j in indexed):
        return indexed
    # Resolve remaining pairs by unique raw-energy compatibility, with no guesses.
    candidates = {i: [j for j in nids if consistent(m,n,i,j,rtol,atol)] for i in mids}
    pairs = []
    used = set()
    while True:
        singles = [(i, avail[0]) for i, js in candidates.items()
                   if i not in {x for x,_ in pairs}
                   and len(avail := [j for j in js if j not in used]) == 1]
        if not singles:
            break
        by_j = defaultdict(list)
        for i,j in singles: by_j[j].append(i)
        accepted = [(i,j) for i,j in singles if len(by_j[j]) == 1]
        if not accepted:
            break
        pairs.extend(accepted)
        used.update(j for _,j in accepted)
    remaining = {i: [j for j in js if j not in used] for i,js in candidates.items()
                 if i not in {x for x,_ in pairs}}
    if any(len(js)>0 for js in remaining.values()):
        raise ValueError('Ambiguous raw-energy matching: '+str(remaining))
    return pairs


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--mini', required=True, help='ROOT output of MiniAOD script')
    p.add_argument('--nano', required=True, help='ROOT output of EGM NanoAOD script')
    p.add_argument('--output', default='MiniNanoPhotonComparison.root')
    p.add_argument('--mini-tree', default='egRegTree')
    p.add_argument('--nano-tree', default='egRegNanoTree')
    p.add_argument('--raw-rtol', type=float, default=0.005,
                   help='Relative raw-energy tolerance for matching (default 0.5%%)')
    p.add_argument('--raw-atol', type=float, default=0.01,
                   help='Absolute raw-energy tolerance in GeV (default 0.01)')
    p.add_argument('--match', choices=['checked-index','index'], default='checked-index',
                   help='checked-index: fallback to unique raw-energy match; index: require same index')
    args = p.parse_args()
    m = load(args.mini, args.mini_tree)
    n = load(args.nano, args.nano_tree)
    for a, required, label in ((m,['run','lumi','event','photonIdx','isEB','rawEnergy'],'Mini'),
                                (n,['run','luminosityBlock','event','photonIdx','isEB','energyRaw'],'Nano')):
        missing = sorted(set(required)-set(a))
        if missing: raise KeyError(f'{label} missing {missing}')
    mini_features = {k[:-8]: k for k in m if k.endswith('_trainer')}
    nano_features = {k[:-5]: k for k in n if k.endswith('_nano')}
    common = sorted(mini_features.keys() & nano_features.keys())
    if not common: raise ValueError('No matching _trainer/_nano feature names')
    print(f'Common features: {len(common)}; Mini-only: {sorted(mini_features.keys()-nano_features.keys())}; '
          f'Nano-only: {sorted(nano_features.keys()-mini_features.keys())}')
    mg = unique_rows(m, 'lumi', 'Mini')
    ng = unique_rows(n, 'luminosityBlock', 'Nano')
    pairs=[]; missing_events=0; ambiguous=0; raw_rejected=0
    for key, mids in mg.items():
        nids=ng.get(key)
        if not nids:
            missing_events += 1
            continue
        try:
            got=match_event(m,n,mids,nids,args.raw_rtol,args.raw_atol,
                            'index' if args.match=='index' else 'checked-index')
        except ValueError as exc:
            ambiguous += 1
            print(f'WARNING: {key}: {exc}; skipping entire event')
            continue
        pairs.extend(got)
        raw_rejected += len(mids)-len(got)
    if not pairs:
        raise RuntimeError('No matched photons; check event IDs, photonIdx and raw-energy tolerance')
    im=np.asarray([i for i,j in pairs], dtype=np.int64)
    jn=np.asarray([j for i,j in pairs], dtype=np.int64)
    out={
        'run': m['run'][im], 'lumi': m['lumi'][im], 'event': m['event'][im],
        'photonIdx_mini': m['photonIdx'][im],
        'photonIdx_nano': n['photonIdx'][jn],
        'isEB': m['isEB'][im],
        'rawEnergy_delta': (n['energyRaw'][jn].astype('float64')-m['rawEnergy'][im].astype('float64')),
    }
    # Retain every original scalar branch; preserve _trainer and _nano feature names.
    for k,v in m.items():
        if k in ('run','lumi','event','photonIdx','isEB'): continue
        target = k if k.endswith(('_trainer','_cmssw','_diff')) else k+'_mini'
        if target in out: raise ValueError(f'Duplicate output branch {target}')
        out[target]=v[im]
    for k,v in n.items():
        if k in ('run','luminosityBlock','event','photonIdx','isEB'): continue
        target=k if k.endswith('_nano') else k+'_nano'
        if target in out: raise ValueError(f'Duplicate output branch {target}')
        out[target]=v[jn]
    for base in common:
        a=m[mini_features[base]][im].astype('float64')
        b=n[nano_features[base]][jn].astype('float64')
        out[base+'_delta']=b-a
    out['energyReeval_delta']=(n['energyAfter'][jn].astype('float64')-
                                m['energyNew'][im].astype('float64')) if 'energyAfter' in n and 'energyNew' in m else np.full(len(im),np.nan)
    if 'energyOfficial' in m and 'energyBefore' in n:
        out['energyStored_delta']=(n['energyBefore'][jn].astype('float64')-
                                    m['energyOfficial'][im].astype('float64'))
    tmp=args.output+'.partial.root'
    try:
        with uproot.recreate(tmp) as f:
            f['matchedPhotons']=out
        Path(tmp).replace(args.output)
    finally:
        Path(tmp).unlink(missing_ok=True)
    print(f'Mini photons: {len(m["event"])}; Nano photons: {len(n["event"])}; '
          f'matched: {len(pairs)}; missing Mini events in Nano: {missing_events}; '
          f'ambiguous events skipped: {ambiguous}; unmatched Mini photons in shared events: {raw_rejected}')
    print(f'Output: {args.output}  TTree: matchedPhotons  feature delta = nano - trainer')

if __name__=='__main__':
    main()
