#!/bin/bash

set -u

cd /afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src

source /cvmfs/cms.cern.ch/cmsset_default.sh
cmsenv

voms-proxy-init --rfc --voms cms -valid 192:00

NJOB=$1

RANDOMSEED=$RANDOM

OUTDIR=/afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/data

NEVENTS=10

bash /afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/Configuration/Generator/test/matchedDoubleGun/run_ele.sh "$RANDOMSEED" "$OUTDIR" $NEVENTS $NJOB > /eos/user/r/rgargiul/www/matched_samples/logs/log_ele_$NJOB  2>&1 &
pid_ele=$!

bash /afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/Configuration/Generator/test/matchedDoubleGun/run_pho.sh "$RANDOMSEED" "$OUTDIR" $NEVENTS $NJOB > /eos/user/r/rgargiul/www/matched_samples/logs/log_gamma_$NJOB 2>&1 &
pid_pho=$!

status=0
wait "$pid_ele" || status=1
wait "$pid_pho" || status=1

exit "$status"
