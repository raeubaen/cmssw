#!/usr/bin/env python3
"""Histograms of (trainer - nano)/(trainer + nano) from matchedPhotons.

Creates one ROOT file with one TH1D per common feature, and a multipage PDF
with one feature per page. Requires numpy, uproot and PyROOT.
"""
import argparse
import math
import re
from array import array

import numpy as np
import uproot


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--input', required=True, help='Combined ROOT file')
    parser.add_argument('--tree', default='matchedPhotons')
    parser.add_argument('--root-output', default='normalized_feature_differences.root')
    parser.add_argument('--pdf-output', default='normalized_feature_differences.pdf')
    parser.add_argument('--bins', type=int, default=100)
    parser.add_argument('--quantile', type=float, default=0.99,
                        help='Symmetric plot range from this quantile of |ratio| (default: 0.99); overflow is retained')
    parser.add_argument('--range', type=float, default=None,
                        help='Override all histogram ranges with [-R,+R]')
    parser.add_argument('--denom-eps', type=float, default=1e-12,
                        help='Skip entries with |trainer+nano| <= this threshold')
    args = parser.parse_args()
    if args.bins <= 0 or not 0 < args.quantile <= 1 or (args.range is not None and args.range <= 0):
        parser.error('Require --bins > 0, 0 < --quantile <= 1, and --range > 0')
    if args.denom_eps < 0:
        parser.error('--denom-eps must be >= 0')

    import ROOT
    ROOT.gROOT.SetBatch(True)
    ROOT.gStyle.SetOptStat(0)
    ROOT.TH1.AddDirectory(False)

    with uproot.open(args.input) as f:
        tree = f[args.tree]
        keys = set(tree.keys())
        features = sorted(k[:-len('_trainer')] for k in keys
                          if k.endswith('_trainer') and k[:-len('_trainer')] + '_nano' in keys)
        if not features:
            raise RuntimeError('No matching <feature>_trainer / <feature>_nano branches found')
        branches = [suffix for feature in features for suffix in (feature+'_trainer', feature+'_nano')]
        arrays = tree.arrays(branches, library='np')

    fout = ROOT.TFile.Open(args.root_output, 'RECREATE')
    if not fout or fout.IsZombie():
        raise OSError('Cannot create ROOT output: ' + args.root_output)
    canvas = ROOT.TCanvas('c_features', 'Normalized feature differences', 1050, 720)
    canvas.SetLeftMargin(0.15)
    canvas.SetRightMargin(0.15)
    canvas.SetBottomMargin(0.13)
    canvas.Print(args.pdf_output + '[')
    try:
        for idx, feature in enumerate(features):
            trainer = np.asarray(arrays[feature+'_trainer'], dtype=np.float64)
            nano = np.asarray(arrays[feature+'_nano'], dtype=np.float64)
            denom = trainer + nano
            valid = np.isfinite(trainer) & np.isfinite(nano) & np.isfinite(denom) & (np.abs(denom) > args.denom_eps)
            ratio = np.empty(int(valid.sum()), dtype=np.float64)
            np.divide(trainer[valid] - nano[valid], denom[valid], out=ratio)
            ratio = ratio[np.isfinite(ratio)]
            n_invalid = len(trainer) - len(ratio)

            if args.range is not None:
                halfwidth = args.range
            elif len(ratio):
                halfwidth = float(np.quantile(np.abs(ratio), args.quantile))
                if not np.isfinite(halfwidth) or halfwidth <= 0:
                    halfwidth = 1e-6
                halfwidth *= 1.1
            else:
                halfwidth = 1.0

            name = 'h_' + re.sub(r'[^A-Za-z0-9_]', '_', feature)
            title = feature + ';(trainer - nano) / (trainer + nano);Photons'
            hist = ROOT.TH1D(name, title, args.bins, -halfwidth, halfwidth)
            hist.SetDirectory(fout)
            hist.SetLineWidth(2)
            hist.SetLineColor(ROOT.kBlue + 1)
            hist.SetFillColorAlpha(ROOT.kAzure - 9, 0.45)
            for val in ratio:
                hist.Fill(float(val))
            hist.Write()

            canvas.Clear()
            canvas.SetLogy(False)
            hist.Draw('HIST')
            hist.SetMaximum(max(1.0, hist.GetMaximum() * 1.22))
            hist.GetXaxis().SetTitleSize(0.044)
            hist.GetXaxis().SetLabelSize(0.038)
            hist.GetYaxis().SetTitleSize(0.044)
            hist.GetYaxis().SetLabelSize(0.038)
            hist.GetYaxis().SetTitleOffset(1.25)
            text = ROOT.TLatex()
            text.SetNDC(True)
            text.SetTextSize(0.030)
            text.DrawLatex(0.14, 0.88, f'Valid: {len(ratio)} / {len(trainer)}    Invalid denominator / NaN: {n_invalid}')
            text.DrawLatex(0.14, 0.83, f'Underflow: {int(hist.GetBinContent(0))}    Overflow: {int(hist.GetBinContent(args.bins+1))}')
            canvas.Modified()
            canvas.Update()
            canvas.Print(args.pdf_output)
            print(f'[{idx+1:2d}/{len(features)}] {feature}: valid={len(ratio)}, invalid={n_invalid}, '
                  f'plot range=[{-halfwidth:.6g}, {halfwidth:.6g}]')
    finally:
        canvas.Print(args.pdf_output + ']')
        fout.Close()
    print(f'Wrote {len(features)} histograms to {args.root_output} and {len(features)} PDF pages to {args.pdf_output}')


if __name__ == '__main__':
    main()
