
#!/usr/bin/env python3

import argparse
import uproot
import awkward as ak
import numpy as np


# ============================================================
# VARIABLES
# ============================================================

ELE_BRANCHES = [
    "Electron_ecalEnergy",
    "Electron_superclusterEta",
    "Electron_superclusterPhi",
    "Electron_etaWidth",
    "Electron_phiWidth",
    "Electron_seedClusEnergy",
    "Electron_rawEnergy",
    "Electron_hoeFull5x5",
    "Electron_DeltaEtaInSeed",
    "Electron_DeltaPhiInSeed",
    "Electron_r9",
    "Electron_r9Frac",
    "Electron_sieie",
    "Electron_sigmaIetaIphiFull5x5",
    "Electron_sigmaIphiIphiFull5x5",
    "Electron_eMax",
    "Electron_e2nd",
    "Electron_eTop",
    "Electron_eBottom",
    "Electron_eLeft",
    "Electron_eRight",
    "Electron_e2x5max",
    "Electron_e2x5Left",
    "Electron_e2x5Right",
    "Electron_e2x5Top",
    "Electron_e2x5Bottom",
    "Electron_e5x5",
    "Electron_PreshowerEnergy",
    "Electron_genPartIdx"

]

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
3# ============================================================

def safe_div(num, den):
    return num / ak.where(den != 0, den, np.nan)


def add_object(out, prefix, idx, arr, is_electron):

    s = f"{prefix}{idx}_"

    if is_electron:

        out[s+"scEnergy"] = ak.to_numpy(arr["Electron_ecalEnergy"][:, idx-1])


        out[s+"scEta"] = ak.to_numpy(arr["Electron_superclusterEta"][:, idx-1])
        out[s+"scPhi"] = ak.to_numpy(arr["Electron_superclusterPhi"][:, idx-1])

        out[s+"scPt"] = out[s+"scEnergy"] / np.cosh(out[s+"scEta"])

        out[s+"scEtaWidth"] = ak.to_numpy(arr["Electron_etaWidth"][:, idx-1])
        out[s+"scPhiWidth"] = ak.to_numpy(arr["Electron_phiWidth"][:, idx-1])

        out[s+"seedFrac"] = ak.to_numpy(
            safe_div(
                arr["Electron_seedClusEnergy"][:, idx-1],
                arr["Electron_rawEnergy"][:, idx-1]
            )
        )

        out[s+"e5x5OverRaw"] = ak.to_numpy(
            safe_div(
                arr["Electron_e5x5"][:, idx-1],
                arr["Electron_rawEnergy"][:, idx-1]
            )
        )

        out[s+"HoE"] = ak.to_numpy(arr["Electron_hoeFull5x5"][:, idx-1])

        out[s+"scDEtaSeed"] = ak.to_numpy(arr["Electron_DeltaEtaInSeed"][:, idx-1])
        out[s+"scDPhiSeed"] = ak.to_numpy(arr["Electron_DeltaPhiInSeed"][:, idx-1])

        out[s+"e3x3OverRaw"] = ak.to_numpy(arr["Electron_r9Frac"][:, idx-1])

        out[s+"full5x5_r9"] = ak.to_numpy(arr["Electron_r9"][:, idx-1])

        out[s+"full5x5_sigmaIEtaIEta"] = ak.to_numpy(
            arr["Electron_sieie"][:, idx-1]
        )

        out[s+"full5x5_sigmaIEtaIPhi"] = ak.to_numpy(
            arr["Electron_sigmaIetaIphiFull5x5"][:, idx-1]
        )

        out[s+"full5x5_sigmaIPhiIPhi"] = ak.to_numpy(
            arr["Electron_sigmaIphiIphiFull5x5"][:, idx-1]
        )

        e5x5 = arr["Electron_e5x5"][:, idx-1]

        out[s+"eMaxOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_eMax"][:, idx-1], e5x5)
        )

        out[s+"e2ndOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2nd"][:, idx-1], e5x5)
        )

        out[s+"eTopOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_eTop"][:, idx-1], e5x5)
        )

        out[s+"eBottomOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_eBottom"][:, idx-1], e5x5)
        )

        out[s+"eLeftOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_eLeft"][:, idx-1], e5x5)
        )

        out[s+"eRightOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_eRight"][:, idx-1], e5x5)
        )

        out[s+"e2x5MaxOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2x5max"][:, idx-1], e5x5)
        )

        out[s+"e2x5LeftOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2x5Left"][:, idx-1], e5x5)
        )

        out[s+"e2x5RightOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2x5Right"][:, idx-1], e5x5)
        )

        out[s+"e2x5TopOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2x5Top"][:, idx-1], e5x5)
        )

        out[s+"e2x5BottomOverE5x5"] = ak.to_numpy(
            safe_div(arr["Electron_e2x5Bottom"][:, idx-1], e5x5)
        )

        out[s+"esEnergyOverSCRawEnergy"] = ak.to_numpy(
            safe_div(
                arr["Electron_PreshowerEnergy"][:, idx-1],
                arr["Electron_rawEnergy"][:, idx-1]
            )
        )

    else:

        out[s+"scPt"] = ak.to_numpy(arr["Photon_pt"][:, idx-1])

        out[s+"scEnergy"] = ak.to_numpy(arr["Photon_energy"][:, idx-1])

        out[s+"scEta"] = ak.to_numpy(arr["Photon_superclusterEta"][:, idx-1])
        out[s+"scPhi"] = ak.to_numpy(arr["Photon_phi"][:, idx-1])

        out[s+"scEtaWidth"] = ak.to_numpy(arr["Photon_etaWidth"][:, idx-1])
        out[s+"scPhiWidth"] = ak.to_numpy(arr["Photon_phiWidth"][:, idx-1])

        out[s+"seedFrac"] = ak.to_numpy(
            safe_div(
                arr["Photon_seedClusEnergy"][:, idx-1],
                arr["Photon_energyRaw"][:, idx-1]
            )
        )

        out[s+"e5x5OverRaw"] = ak.to_numpy(
            safe_div(
                arr["Photon_e5x5"][:, idx-1],
                arr["Photon_energyRaw"][:, idx-1]
            )
        )

        out[s+"HoE"] = ak.to_numpy(arr["Photon_hoe"][:, idx-1])

        out[s+"scDEtaSeed"] = ak.to_numpy(
            arr["Photon_dEtaSeedClusSuperClus"][:, idx-1]
        )

        out[s+"scDPhiSeed"] = ak.to_numpy(
            arr["Photon_dPhiSeedClusSuperClus"][:, idx-1]
        )

        out[s+"e3x3OverRaw"] = ak.to_numpy(arr["Photon_r9Frac"][:, idx-1])

        out[s+"full5x5_r9"] = ak.to_numpy(arr["Photon_r9"][:, idx-1])

        out[s+"full5x5_sigmaIEtaIEta"] = ak.to_numpy(
            arr["Photon_sieie"][:, idx-1]
        )

        out[s+"full5x5_sigmaIEtaIPhi"] = ak.to_numpy(
            arr["Photon_sieip"][:, idx-1]
        )

        out[s+"full5x5_sigmaIPhiIPhi"] = ak.to_numpy(
            arr["Photon_sigmaIphiIphiFull5x5"][:, idx-1]
        )

        e5x5 = arr["Photon_e5x5"][:, idx-1]

        out[s+"eMaxOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_eMax"][:, idx-1], e5x5)
        )

        out[s+"e2ndOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2nd"][:, idx-1], e5x5)
        )

        out[s+"eTopOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_eTop"][:, idx-1], e5x5)
        )

        out[s+"eBottomOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_eBottom"][:, idx-1], e5x5)
        )

        out[s+"eLeftOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_eLeft"][:, idx-1], e5x5)
        )

        out[s+"eRightOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_eRight"][:, idx-1], e5x5)
        )

        out[s+"e2x5MaxOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2x5max"][:, idx-1], e5x5)
        )

        out[s+"e2x5LeftOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2x5Left"][:, idx-1], e5x5)
        )

        out[s+"e2x5RightOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2x5Right"][:, idx-1], e5x5)
        )

        out[s+"e2x5TopOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2x5Top"][:, idx-1], e5x5)
        )

        out[s+"e2x5BottomOverE5x5"] = ak.to_numpy(
            safe_div(arr["Photon_e2x5Bottom"][:, idx-1], e5x5)
        )

        out[s+"esEnergyOverSCRawEnergy"] = ak.to_numpy(
            arr["Photon_esEnergyOverRawE"][:, idx-1]
        )


# ============================================================
# MAIN
# ============================================================

parser = argparse.ArgumentParser()

parser.add_argument("--electron", required=True)
parser.add_argument("--photon", required=True)
parser.add_argument("-o", "--output", required=True)

args = parser.parse_args()

ele = uproot.open(args.electron)["Events"].arrays(
    ["event"] + ELE_BRANCHES
)

pho = uproot.open(args.photon)["Events"].arrays(
    ["event"] + PHO_BRANCHES
)

evt_ele = ak.to_numpy(ele["event"])
evt_pho = ak.to_numpy(pho["event"])

common_evt, idx_ele, idx_pho = np.intersect1d(
    evt_ele,
    evt_pho,
    assume_unique=False,
    return_indices=True,
)

ele = ele[idx_ele]
pho = pho[idx_pho]

assert np.array_equal(
    ak.to_numpy(ele["event"]),
    ak.to_numpy(pho["event"])
)

mask = (
    (ak.num(ele["Electron_r9"]) == 2)
    &
    (ak.num(pho["Photon_r9"]) == 2)
)

ele = ele[mask]
pho = pho[mask]

ele_order = ak.argsort(
    ele["Electron_genPartIdx"],
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

print(f"Kept {len(ele)} events with exactly 2e + 2gamma")

out = {}

add_object(out, "Electron", 1, ele, True)
add_object(out, "Electron", 2, ele, True)

add_object(out, "Photon", 1, pho, False)
add_object(out, "Photon", 2, pho, False)

print("Writing output...")

with uproot.recreate(args.output) as fout:
    fout["Events"] = out

print("Done.")
