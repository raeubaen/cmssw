#python3 nanoegm_regression.py \
#  --input /eos/home-r/rgargiul/www/singleGamma_100events_NANOAODSIM_0.root \
#  --weights photon_mean_gbr_140X_mcRun3_2024_realistic_v26.root \
#  --headers /afs/cern.ch/work/r/rgargiul/HiggsDNA/higgs_dna/tools/regressionReEvaluation \
#  --output PhotonRegressionNano.root


python3 nanoegm_regression.py \
  --input root://xrootd-cms.infn.it//store/mc/RunIII2024Summer24NanoAODv15/DYto2E-4Jets_Bin-MLL-50_TuneCP5_13p6TeV_madgraphMLM-pythia8/NANOAODSIM/EGMNanoV15_150X_mcRun3_2024_realistic_v1-v1/2520000/f1176aca-0dbc-490b-a5bf-b71af2242b3a.root \
  --weights photon_mean_gbr_140X_mcRun3_2024_realistic_v26.root \
  --headers /afs/cern.ch/work/r/rgargiul/HiggsDNA/higgs_dna/tools/regressionReEvaluation \
  --output PhotonRegressionNano_DY_singlefile.root

