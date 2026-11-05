import FWCore.ParameterSet.Config as cms
process = cms.Process("RECO2")

process.load('Configuration.StandardSequences.Services_cff')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('Configuration.StandardSequences.GeometryRecoDB_cff')
process.load('Configuration.Geometry.GeometrySimDB_cff')
process.load('Configuration.StandardSequences.MagneticField_cff')
process.load('Configuration.StandardSequences.EndOfProcess_cff')
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.load('Configuration.StandardSequences.RawToDigi_cff')


process.GlobalTag.globaltag = '160X_dataRun3_Prompt_v1'
process.GlobalTag.toGet = cms.VPSet(
    cms.PSet(record = cms.string("EcalPh1CubicPulseShapesRcd"),
             tag = cms.string("EcalPh1CubicPulseShapes_data"),
             connect = cms.string("sqlite_file:/afs/cern.ch/work/e/emanuele/public/ecal/pulseshapes_db_multifitph2/ecaltemplates_popcon_phase1-data-test.db")
             )
    )

#### CONFIGURE IT HERE
isMC = False
#####################
process.MessageLogger.cerr.FwkReport.reportEvery = 1

# start from RAW format for more flexibility
process.raw2digi_step = cms.Sequence(process.RawToDigi)

# get uncalibrechits with global method / time from ratio
import RecoLocalCalo.EcalRecProducers.ecalMultiFitCubicPh1UncalibRecHit_cfi
process.ecalMultiFitCubicPh1UncalibRecHit = RecoLocalCalo.EcalRecProducers.ecalMultiFitCubicPh1UncalibRecHit_cfi.ecalMultiFitCubicPh1UncalibRecHit.clone()
# get the recovered digis
if isMC:
    process.ecalDetIdToBeRecovered.ebSrFlagCollection = 'simEcalDigis:ebSrFlags'
    process.ecalDetIdToBeRecovered.eeSrFlagCollection = 'simEcalDigis:eeSrFlags'
    process.ecalRecHit.recoverEBFE = False
    process.ecalRecHit.recoverEEFE = False
    process.ecalRecHit.killDeadChannels = False
    process.ecalRecHit.ebDetIdToBeRecovered = ''
    process.ecalRecHit.eeDetIdToBeRecovered = ''
    process.ecalRecHit.ebFEToBeRecovered = ''
    process.ecalRecHit.eeFEToBeRecovered = ''

process.maxEvents = cms.untracked.PSet(  input = cms.untracked.int32(10) )
path = '/store/data/Run2026D/EGamma4/RAW/v1/000/403/818/00001/0416979a-6a21-4865-a3bd-1f11390322ad.root'
process.source = cms.Source("PoolSource",
                            duplicateCheckMode = cms.untracked.string("noDuplicateCheck"),
                            fileNames = cms.untracked.vstring(path
                                                              ))


process.out = cms.OutputModule("PoolOutputModule",
                               outputCommands = cms.untracked.vstring('drop *',
                                                                      'keep *_ecalUncalib*_*_RECO2',
                                                                      'keep *_offlineBeamSpot_*_*',
                                                                      'keep *_addPileupInfo_*_*'
                                                                      ),
                               fileName = cms.untracked.string('reco.root')
                               )


process.ecalAmplitudeReco = cms.Sequence( process.ecalMultiFitCubicPh1UncalibRecHit )

process.ecalTestRecoLocal = cms.Sequence( process.raw2digi_step *
                                          process.ecalAmplitudeReco )

from PhysicsTools.PatAlgos.tools.helpers import *

process.p = cms.Path(process.ecalTestRecoLocal)
process.outpath = cms.EndPath(process.out)


#########################
#    Time Profiling     #
#########################

#https://twiki.cern.ch/twiki/bin/viewauth/CMS/FastTimerService
process.MessageLogger.cerr.FastReport = cms.untracked.PSet( limit = cms.untracked.int32( 10000000 ) )

# remove any instance of the FastTimerService
if 'FastTimerService' in process.__dict__:
    del process.FastTimerService
    
# instrument the menu with the FastTimerService
process.load( "HLTrigger.Timer.FastTimerService_cfi" )

# print a text summary at the end of the job
process.FastTimerService.printJobSummary          = True

# enable per-event DQM plots
process.FastTimerService.enableDQM                = True

# enable per-module DQM plots
process.FastTimerService.enableDQMbyModule        = True
        
# enable per-event DQM plots by lumisection
process.FastTimerService.enableDQMbyLumiSection   = True
process.FastTimerService.dqmLumiSectionsRange     = 2500    # lumisections (23.31 s)

# set the time resolution of the DQM plots
process.FastTimerService.dqmTimeRange             = 1000.   # ms
process.FastTimerService.dqmTimeResolution        =    5.   # ms
process.FastTimerService.dqmPathTimeRange         =  100.   # ms
process.FastTimerService.dqmPathTimeResolution    =    0.5  # ms
process.FastTimerService.dqmModuleTimeRange       = 1000.   # ms
process.FastTimerService.dqmModuleTimeResolution  =    0.5  # ms

# set the base DQM folder for the plots
process.FastTimerService.dqmPath                  = "HLT/TimerService"
process.FastTimerService.enableDQMbyProcesses     = True

# save the DQM plots in the DQMIO format
process.dqmOutput = cms.OutputModule("DQMRootOutputModule",
                                     fileName = cms.untracked.string("DQM_pu40.root")
                                     )
process.FastTimerOutput = cms.EndPath( process.dqmOutput )
