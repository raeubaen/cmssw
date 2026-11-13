#!/bin/bash

cd /afs/cern.ch/work/r/rgargiul/CMSSW_14_0_25/src/Configuration/Generator/test/matchedDoubleGun || exit 1

source /cvmfs/sft.cern.ch/lcg/views/LCG_109/x86_64-el9-gcc14-opt/setup.sh

MAX_JOBS=15
LOG_DIR="logs"
mkdir -p "$LOG_DIR"

MAIN_LOG="$LOG_DIR/main.log"

run_job() {
    local i=$1
    local start=$(date '+%Y-%m-%d %H:%M:%S')

    echo "[$start] START job $i" >> "$MAIN_LOG"

    python3 match.py \
        --photon /eos/user/r/rgargiul/www/matched_samples/singleGamma_100events_NANOAODSIM_${i}.root \
        --electron /eos/user/r/rgargiul/www/matched_samples/singleElectron_100events_NANOAODSIM_${i}.root \
        --output /eos/user/r/rgargiul/www/matched_samples/matched/matched_${i}.root \
        > "$LOG_DIR/job_${i}.log" 2>&1

    local status=$?
    local end=$(date '+%Y-%m-%d %H:%M:%S')

    echo "[$end] END job $i | exit_code=$status" >> "$MAIN_LOG"

    if (( status != 0 )); then
        echo "$i" >> "$LOG_DIR/failed_jobs.txt"
    fi

    return "$status"
}

for i in $(seq 0 9999); do
    while (( $(jobs -rp | wc -l) >= MAX_JOBS )); do
        wait -n || true
    done

    run_job "$i" &
done

wait

echo "All jobs finished!" | tee -a "$MAIN_LOG"
