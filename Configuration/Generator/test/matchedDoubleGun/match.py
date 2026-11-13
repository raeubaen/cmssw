#!/usr/bin/env python3

import argparse
import uproot
import awkward as ak
import numpy as np


# ============================================================
# VARIABLES
# ============================================================

PHO_BRANCHES = [
    "Photon_energy",
    "Photon_pt",
    "Photon_superclusterEta",
    "Photon_phi",
    "Photon_etaWidth",
    "Photon_phiWidth",
    "Photon_seedClusEnergy",
    "Photon_energyRaw",
    "Photon_hoe",
    "Photon_dEtaSeedClusSuperClus",
    "Photon_dPhiSeedClusSuperClus",
    "Photon_r9",
    "Photon_r9Frac",
    "Photon_sieie",
    "Photon_sieip",
    "Photon_sigmaIphiIphiFull5x5",
    "Photon_eMax",
    "Photon_e2nd",
    "Photon_eTop",
    "Photon_eBottom",
    "Photon_eLeft",
    "Photon_eRight",
    "Photon_e2x5max",
    "Photon_e2x5Left",
    "Photon_e2x5Right",
    "Photon_e2x5Top",
    "Photon_e2x5Bottom",
    "Photon_e5x5",
    "Photon_esEnergyOverRawE",
    "Photon_genPartIdx"
]


# ============================================================
# HELPERS
# ============================================================

def safe_div(num, den):
    return num / ak.where(den != 0, den, np.nan)


def add_object(out, prefix, idx, arr):

    s = f"{prefix}{idx}_"
    i = idx - 1

    def get(branch):
        return arr[f"Photon_{branch}"][:, i]

    def put(name, value):
        out[s + name] = ak.to_numpy(value)

    # --------------------------------------------------------
    # Kinematics
    # --------------------------------------------------------

    put("scPt", get("pt"))
    put("scEnergy", get("energy"))

    put("scEta", get("superclusterEta"))
    put("scPhi", get("phi"))

    put("scEtaWidth", get("etaWidth"))
    put("scPhiWidth", get("phiWidth"))

    # --------------------------------------------------------
    # Energy ratios
    # --------------------------------------------------------

    raw = get("energyRaw")
    e5x5 = get("e5x5")

    put(
        "seedFrac",
        safe_div(get("seedClusEnergy"), raw)
    )

    put(
        "e5x5OverRaw",
        safe_div(e5x5, raw)
    )

    # --------------------------------------------------------
    # Shower shape
    # --------------------------------------------------------

    put("HoE", get("hoe"))

    put(
        "scDEtaSeed",
        get("dEtaSeedClusSuperClus")
    )

    put(
        "scDPhiSeed",
        get("dPhiSeedClusSuperClus")
    )

    put("e3x3OverRaw", get("r9Frac"))

    put("full5x5_r9", get("r9"))

    put(
        "full5x5_sigmaIEtaIEta",
        get("sieie")
    )

    put(
        "full5x5_sigmaIEtaIPhi",
        get("sieip")
    )

    put(
        "full5x5_sigmaIPhiIPhi",
        get("sigmaIphiIphiFull5x5")
    )

    # --------------------------------------------------------
    # Crystal energy ratios
    # --------------------------------------------------------

    ratios = {
        "eMaxOverE5x5": "eMax",
        "e2ndOverE5x5": "e2nd",
        "eTopOverE5x5": "eTop",
        "eBottomOverE5x5": "eBottom",
        "eLeftOverE5x5": "eLeft",
        "eRightOverE5x5": "eRight",
        "e2x5MaxOverE5x5": "e2x5max",
        "e2x5LeftOverE5x5": "e2x5Left",
        "e2x5RightOverE5x5": "e2x5Right",
        "e2x5TopOverE5x5": "e2x5Top",
        "e2x5BottomOverE5x5": "e2x5Bottom",
    }

    for name, branch in ratios.items():
        put(
            name,
            safe_div(get(branch), e5x5)
        )

    # --------------------------------------------------------
    # Preshower
    # --------------------------------------------------------

    put(
        "esEnergyOverSCRawEnergy",
        get("esEnergyOverRawE")
    )


# ============================================================
# MAIN
# ============================================================

def main():

    parser = argparse.ArgumentParser()

    parser.add_argument("--electron", required=True)
    parser.add_argument("--photon", required=True)
    parser.add_argument("-o", "--output", required=True)

    args = parser.parse_args()

    # --------------------------------------------------------
    # Read ROOT files
    # Both files use Photon_* branches
    # --------------------------------------------------------

    print("Reading electron file...")

    ele = uproot.open(args.electron)["Events"].arrays(
        ["event"] + PHO_BRANCHES
    )

    print("Reading photon file...")

    pho = uproot.open(args.photon)["Events"].arrays(
        ["event"] + PHO_BRANCHES
    )

    # --------------------------------------------------------
    # Match events using event only
    # --------------------------------------------------------

    evt_ele = ak.to_numpy(ele["event"])
    evt_pho = ak.to_numpy(pho["event"])

    common_evt, idx_ele, idx_pho = np.intersect1d(
        evt_ele,
        evt_pho,
        assume_unique=False,
        return_indices=True
    )

    print(f"Common events: {len(common_evt)}")

    ele = ele[idx_ele]
    pho = pho[idx_pho]

    assert np.array_equal(
        ak.to_numpy(ele["event"]),
        ak.to_numpy(pho["event"])
    )

    # --------------------------------------------------------
    # Require exactly 2 objects in each file
    # --------------------------------------------------------

    mask = (
        (ak.num(ele["Photon_r9"]) == 2)
        &
        (ak.num(pho["Photon_r9"]) == 2)
    )

    ele = ele[mask]
    pho = pho[mask]

    print(
        f"Kept {len(ele)} events with exactly "
        "2 electron candidates + 2 photon candidates"
    )

    # --------------------------------------------------------
    # Sort objects by Photon_genPartIdx
    # --------------------------------------------------------

    ele_order = ak.argsort(
        ele["Photon_genPartIdx"],
        axis=1
    )

    pho_order = ak.argsort(
        pho["Photon_genPartIdx"],
        axis=1
    )

    for k in ele.fields:
        if k != "event":
            ele[k] = ele[k][ele_order]

    for k in pho.fields:
        if k != "event":
            pho[k] = pho[k][pho_order]

    # --------------------------------------------------------
    # Build output
    # --------------------------------------------------------

    out = {}

    add_object(out, "Electron", 1, ele)
    add_object(out, "Electron", 2, ele)

    add_object(out, "Photon", 1, pho)
    add_object(out, "Photon", 2, pho)

    # --------------------------------------------------------
    # Write ROOT output
    # --------------------------------------------------------

    print("Writing output...")

    with uproot.recreate(args.output) as fout:
        fout["Events"] = out

    print("Done.")


if __name__ == "__main__":
    main()
