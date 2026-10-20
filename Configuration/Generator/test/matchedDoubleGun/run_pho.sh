# ============================================================
# STEP 0 — GEN-SIM : single photon gun
# ============================================================

set -e

RANDOMSEED=$1
OUTDIR=$2
NEVENTS=$3
NJOB=$4

mkdir -p /tmp/rgargiul_job${NJOB}/

cmsDriver.py Configuration/Generator/python/DoubleGammaPt15to150_pythia8_cfi.py \
  --mc \
  --conditions auto:phase1_2024_realistic \
  --beamspot DBrealistic \
  --geometry DB:Extended \
  --era Run3_2024 \
  --step GEN,SIM \
  --eventcontent RAWSIM \
  --datatier GEN-SIM \
  --fileout file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_GEN-SIM_${NJOB}.root \
  -n $NEVENTS \
  --python_filename /tmp/rgargiul_job${NJOB}/step_Gamma0_GEN_SIM.py \
  --customise_commands="process.RandomNumberGeneratorService.generator.initialSeed = $RANDOMSEED"


# ============================================================
# STEP 1 — DIGI + DATAMIX + L1 + DIGI2RAW + HLT
# ============================================================
echo "ABOUT TO CMSDRIVEER STEP1" >&2

cmsDriver.py step_Gamma1_${NJOB} \
  --python_filename /tmp/rgargiul_job${NJOB}/step_Gamma1_${NJOB}.py \
  --filein file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_GEN-SIM_${NJOB}.root \
  --fileout file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_Premix_${NJOB}.root \
  --mc \
  --eventcontent PREMIXRAW \
  --datatier GEN-SIM-RAW \
  --conditions 140X_mcRun3_2024_realistic_v26 \
  --pileup_input "dbs:/Neutrino_E-10_gun/RunIIISummer24PrePremix-Premixlib2024_140X_mcRun3_2024_realistic_v26-v1/PREMIX" \
  --step DIGI,DATAMIX,L1,DIGI2RAW,HLT:2024v14 \
  --geometry DB:Extended \
  --datamix PreMix \
  --era Run3_2024 \
  --nThreads 4 \
  --procModifiers premix_stage2 \
  -n $NEVENTS


# ============================================================
# STEP 2 — RAW2DIGI + L1Reco + RECO + RECOSIM
# ============================================================
#
cmsDriver.py step_Gamma2_${NJOB} \
  --python_filename /tmp/rgargiul_job${NJOB}/step_Gamma2_${NJOB}.py \
  --filein file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_Premix_${NJOB}.root \
  --fileout file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_AODSIM_${NJOB}.root \
  --mc \
  --eventcontent AODSIM \
  --datatier AODSIM \
  --conditions 140X_mcRun3_2024_realistic_v26 \
  --step RAW2DIGI,L1Reco,RECO,RECOSIM \
  --geometry DB:Extended \
  --era Run3_2024 \
  --nThreads 4 \
  -n $NEVENTS

#
## ============================================================
## STEP 3 — MiniAOD
## ============================================================
#
cmsDriver.py step_Gamma3_${NJOB} \
  --python_filename /tmp/rgargiul_job${NJOB}/step_Gamma3_${NJOB}.py \
  --filein file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_AODSIM_${NJOB}.root \
  --fileout file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_MINIAODSIM_${NJOB}.root \
  --mc \
  --eventcontent MINIAODSIM1 \
  --datatier MINIAODSIM \
  --conditions 150X_mcRun3_2024_realistic_v2 \
  --step PAT \
  --geometry DB:Extended \
  --era Run3_2024 \
  --nThreads 4 \
  -n $NEVENTS


## ============================================================
## STEP 4 — NanoAOD
## ============================================================
#
cmsDriver.py step_Gamma4_${NJOB} \
  --python_filename /tmp/rgargiul_job${NJOB}/step_Gamma4_${NJOB}.py \
  --filein file:/tmp/rgargiul_job${NJOB}/singleGamma_100events_MINIAODSIM_${NJOB}.root \
  --fileout file:$OUTDIR/singleGamma_100events_NANOAODSIM_${NJOB}.root \
  --mc \
  --eventcontent NANOAODSIM \
  --datatier NANOAODSIM \
  --conditions 150X_mcRun3_2024_realistic_v1 \
  --step NANO:@EGM,DQM:@nanoAODDQM \
  --scenario pp \
  --era Run3_2024 \
  --nThreads 4 \
  -n $NEVENTS
