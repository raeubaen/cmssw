
#!/usr/bin/env bash

##############################################
# USER CONFIGURATION
##############################################

CMSSW_RELEASE="CMSSW_14_0_25"

MINIAOD="root://xrootd-cms.infn.it///store/mc/RunIII2024Summer24MiniAODv6/DYto2E-4Jets_Bin-MLL-50_TuneCP5_13p6TeV_madgraphMLM-pythia8/MINIAODSIM/150X_mcRun3_2024_realistic_v2-v3/110000/0d501314-4270-4517-becd-65d853d2969e.root"

WEIGHTS="/afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/photon_HighEt_140X_mcRun3_2024_realistic_v26.root"

ADDON="/afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/mini_regression_addon.py"

OUTPUT="PhotonRegressionFriend.root"

# Set -1 to process all events
MAX_EVENTS=100

##############################################
# 1. SETUP CMSSW
##############################################

cd "${CMSSW_RELEASE}/src"

cmsenv

# Return outside CMSSW
cd ../..

##############################################
# 2. DOWNLOAD REPOSITORY
##############################################

echo "=== Downloading EgRegresTrainerLegacy 140X ==="

if [ ! -d EgRegresTrainerLegacy-140X ]; then

    curl -fL \
      "https://github.com/cms-egamma/EgRegresTrainerLegacy/archive/refs/heads/140X.zip" \
      -o EgRegresTrainerLegacy-140X.zip

    unzip -q EgRegresTrainerLegacy-140X.zip

fi

cd EgRegresTrainerLegacy-140X

##############################################
# 3. COMPILE ORIGINAL REPOSITORY
##############################################

echo "=== Compiling regression tools ==="

gmake RegressionTrainerExe -j 8
gmake RegressionApplierExe -j 8

##############################################
# 4. CONFIGURE ENVIRONMENT
##############################################

export PATH="$PWD/bin/$SCRAM_ARCH:$PATH"

export PYTHONPATH="$PWD/python:${PYTHONPATH:-}"

export ROOT_INCLUDE_PATH="$PWD/include:${ROOT_INCLUDE_PATH:-}"

##############################################
# 5. INSTALL ADD-ON
##############################################

echo "=== Installing MiniAOD regression add-on ==="

cp $ADDON mini_to_regression_friend.py

chmod +x mini_to_regression_friend.py

##############################################
# 6. RUN REGRESSION
##############################################

echo "=== Running photon regression ==="

ARGS=(
    --repo "$PWD"
    --mini "$MINIAOD"
    --weights "$WEIGHTS"
    --output "$OUTPUT"
)

if [ "$MAX_EVENTS" -ge 0 ]; then
    ARGS+=(--max-events "$MAX_EVENTS")
fi

echo python3 mini_to_regression_friend.py "${ARGS[@]}"

python3 mini_to_regression_friend.py "${ARGS[@]}"

##############################################
# 7. CHECK OUTPUT
##############################################

echo "=== Checking output ==="

if [ -f "$OUTPUT" ]; then

    echo "Output created: $PWD/$OUTPUT"

    root -l -b -q "$OUTPUT" \
      -e 'egRegTreeFriend->Print();'

else

    echo "ERROR: Output file not created"

fi

echo "=== Finished ==="
