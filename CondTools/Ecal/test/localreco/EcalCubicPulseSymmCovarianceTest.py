import sys
import os.path
import FWCore.ParameterSet.Config as cms

POPULATE_MC = True
FIRST_RUN_DATA = '2'

txtfile = sys.argv[1]

if POPULATE_MC: suffix = "phase2-ecaltb2025"
else: suffix = "phase2-data"

print(f"reading txt file {txtfile}")
print("writing into ",suffix)

process = cms.Process("ProcessOne")
process.load("CondCore.CondDB.CondDB_cfi")
process.CondDB.connect = 'sqlite_file:ecalcovariances_popcon_'+suffix+'.db'
process.CondDB.DBParameters.authenticationPath = '.'
process.CondDB.DBParameters.messageLevel=cms.untracked.int32(1)

process.MessageLogger = cms.Service("MessageLogger",
                                    debugModules = cms.untracked.vstring('*'),
                                    destinations = cms.untracked.vstring('cout')
                                    )

process.source = cms.Source("EmptyIOVSource",
                            firstValue = cms.uint64(1),
                            lastValue = cms.uint64(1),
                            timetype = cms.string('runnumber'),
                            interval = cms.uint64(1)
                            )

tag_suffix = "mc" if POPULATE_MC else "data"

process.PoolDBOutputService = cms.Service("PoolDBOutputService",
    process.CondDB,
    logconnect = cms.untracked.string('sqlite_file:logecalcovariances_popcon_'+suffix+'.db'),
    timetype = cms.untracked.string('runnumber'),
    toPut = cms.VPSet(cms.PSet(
        record = cms.string('EcalPh2PulseSymmCovariancesRcd'),
        tag = cms.string(f'EcalPh2PulseSymmCovariances_{tag_suffix}')
    ))
)

if os.path.isfile(txtfile)==False:
    print("WARNING: file ",txtfile," does not exist. Exiting... ")
    exit

process.Test1 = cms.EDAnalyzer("ExTestEcalPh2PulseSymmCovariancesAnalyzer",
    SinceAppendMode = cms.bool(True),
    record = cms.string('EcalPh2PulseSymmCovariancesRcd'),
    loggingOn = cms.untracked.bool(True),
    Source = cms.PSet(
        firstRun = cms.string('1' if POPULATE_MC else FIRST_RUN_DATA),
        inputFileName = cms.string(txtfile),
        EBPulseShapeCovariance = cms.vdouble (
            7.52e-08,1.11e-06,1.54e-06,0,-1.21e-06,-1.3e-06,-7.03e-07,-2.7e-07,-4.5e-08,2.4e-08,1.71e-08,-2.8e-08,4.73e-08,2.88e-08,6.43e-08,9.16e-08,
            1.11e-06,4.89e-05,7.04e-05,0,-6.28e-05,-7.02e-05,-4.05e-05,-1.72e-05,-5.22e-06,-7.81e-07,-2.6e-06,-1.39e-06,-3.47e-07,9.4e-08,5.48e-08,4.58e-07,
            1.54e-06,7.04e-05,0.000101,0,-9.04e-05,-0.000101,-5.86e-05,-2.49e-05,-7.6e-06,-1.21e-06,-3.82e-06,-1.99e-06,-5.03e-07,9.55e-08,8.79e-09,5.77e-07,
            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
            -1.21e-06,-6.28e-05,-9.04e-05,0,8.18e-05,9.1e-05,5.28e-05,2.26e-05,6.94e-06,1.02e-06,3.66e-06,1.9e-06,9.81e-07,-5.03e-08,1.68e-07,-2.51e-07,
            -1.3e-06,-7.02e-05,-0.000101,0,9.1e-05,0.000103,5.95e-05,2.54e-05,7.97e-06,1.51e-06,4.17e-06,1.92e-06,5.73e-07,5.42e-08,3.13e-07,-1.84e-07,
            -7.03e-07,-4.05e-05,-5.86e-05,0,5.28e-05,5.95e-05,3.46e-05,1.48e-05,4.66e-06,8.88e-07,2.48e-06,1.14e-06,4.48e-07,5.42e-08,2.34e-07,-3.19e-08,
            -2.7e-07,-1.72e-05,-2.49e-05,0,2.26e-05,2.54e-05,1.48e-05,6.36e-06,2.01e-06,3.77e-07,1.1e-06,4.99e-07,2.62e-07,3.16e-08,1.32e-07,3.31e-08,
            -4.5e-08,-5.22e-06,-7.6e-06,0,6.94e-06,7.97e-06,4.66e-06,2.01e-06,6.75e-07,1.69e-07,3.87e-07,1.37e-07,6.99e-08,3.48e-08,9.03e-08,6.99e-08,
            2.4e-08,-7.81e-07,-1.21e-06,0,1.02e-06,1.51e-06,8.88e-07,3.77e-07,1.69e-07,1.18e-07,1.03e-07,-1.47e-08,-6.64e-08,3.86e-08,6.23e-08,5.98e-08,
            1.71e-08,-2.6e-06,-3.82e-06,0,3.66e-06,4.17e-06,2.48e-06,1.1e-06,3.87e-07,1.03e-07,2.54e-07,8.13e-08,1.07e-07,3.52e-08,9.22e-08,9.87e-08,
            -2.8e-08,-1.39e-06,-1.99e-06,0,1.9e-06,1.92e-06,1.14e-06,4.99e-07,1.37e-07,-1.47e-08,8.13e-08,6.75e-08,8.85e-08,-9.69e-09,-4.03e-09,-7.34e-09,
            4.73e-08,-3.47e-07,-5.03e-07,0,9.81e-07,5.73e-07,4.48e-07,2.62e-07,6.99e-08,-6.64e-08,1.07e-07,8.85e-08,2.87e-07,-5.04e-11,5.07e-08,8.62e-08,
            2.88e-08,9.4e-08,9.55e-08,0,-5.03e-08,5.42e-08,5.42e-08,3.16e-08,3.48e-08,3.86e-08,3.52e-08,-9.69e-09,-5.04e-11,1.94e-08,3.61e-08,4.39e-08,
            6.43e-08,5.48e-08,8.79e-09,0,1.68e-07,3.13e-07,2.34e-07,1.32e-07,9.03e-08,6.23e-08,9.22e-08,-4.03e-09,5.07e-08,3.61e-08,8.12e-08,1.03e-07,
            9.16e-08,4.58e-07,5.77e-07,0,-2.51e-07,-1.84e-07,-3.19e-08,3.31e-08,6.99e-08,5.98e-08,9.87e-08,-7.34e-09,8.62e-08,4.39e-08,1.03e-07,1.36e-07
            ),
        EEPulseShapeCovariance = cms.vdouble()

    )
)

process.p = cms.Path(process.Test1)
