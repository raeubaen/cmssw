import sys
import os.path
import FWCore.ParameterSet.Config as cms

FIRST_RUN = 2
POPULATE_MC = FIRST_RUN < 2

txtfile = sys.argv[1]

if POPULATE_MC: suffix = "phase1-run3data"
else: suffix = "phase1-data-test"

print(f"reading txt file {txtfile}")
print("writing into ",suffix)

process = cms.Process("ProcessOne")
process.load("CondCore.CondDB.CondDB_cfi")
process.CondDB.connect = 'sqlite_file:ecaltemplates_popcon_'+suffix+'.db'
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
    logconnect = cms.untracked.string('sqlite_file:logecaltemplates_popcon_'+suffix+'.db'),
    timetype = cms.untracked.string('runnumber'),
    toPut = cms.VPSet(cms.PSet(
        record = cms.string('EcalPh1CubicPulseShapesRcd'),
        tag = cms.string(f'EcalPh1CubicPulseShapes_{tag_suffix}')
    ))
)

if os.path.isfile(txtfile)==False:
    print("WARNING: file ",txtfile," does not exist. Exiting... ")
    exit

process.Test1 = cms.EDAnalyzer("ExTestEcalPh1CubicPulseShapesAnalyzer",
    SinceAppendMode = cms.bool(True),
    record = cms.string('EcalPh1CubicPulseShapesRcd'),
    loggingOn = cms.untracked.bool(True),
    Source = cms.PSet(
        firstRun = cms.string('1' if POPULATE_MC else f"{FIRST_RUN}"),
        inputFileName = cms.string(txtfile),
        EBCubicPulseShapeTemplate = cms.vdouble (
            0.00106446, -0.000145519, 0.00171005, 0.000211311,  0.13987, 0.0521725, 0.00517373, -2.76931e-05,  0.642586, 0.0830076, -0.00216055, -0.000382708,  0.991516, 0.0145847, -0.00623163, 5.51205e-05,  0.855436, -0.0473978, -0.00265073, 0.000189153,  0.494679, -0.0545747, 0.00097823, 7.2567e-05,  0.204567, -0.0319219, 0.00189151, -5.36501e-05,  0.0681105, -0.0110625, 0.00107216, -0.000104004,  0.0264225, -0.00187723, 0.000402533, -9.13723e-05,  0.0175239, -0.000612307, 7.10874e-05, -3.4138e-05,  0.0122841, -0.000679979, 5.91787e-06, -1.62065e-05,  0.00636416, -0.000890491, 1.00773e-05, -6.28202e-06 # Barrel TB 2025, first 12 samples. Next 4 measured: 0.00182243, -7.70756e-05, 7.4425e-05, -1.46181e-05,  0.00195366, 1.33123e-05, -3.68702e-05, -9.76707e-06,  0.00112585, 0.000267427, 4.12628e-05, -1.68854e-05,  0.00185195, -3.92222e-09, -4.22411e-08, 9.68777e-09
        ) ,
        EECubicPulseShapeTemplate = cms.vdouble (
            0.00106446, -0.000145519, 0.00171005, 0.000211311,  0.13987, 0.0521725, 0.00517373, -2.76931e-05,  0.642586, 0.0830076, -0.00216055, -0.000382708,  0.991516, 0.0145847, -0.00623163, 5.51205e-05,  0.855436, -0.0473978, -0.00265073, 0.000189153,  0.494679, -0.0545747, 0.00097823, 7.2567e-05,  0.204567, -0.0319219, 0.00189151, -5.36501e-05,  0.0681105, -0.0110625, 0.00107216, -0.000104004,  0.0264225, -0.00187723, 0.000402533, -9.13723e-05,  0.0175239, -0.000612307, 7.10874e-05, -3.4138e-05,  0.0122841, -0.000679979, 5.91787e-06, -1.62065e-05,  0.00636416, -0.000890491, 1.00773e-05, -6.28202e-06 # Dummy: Barrel TB 2025, first 12 samples. Next 4 measured: 0.00182243, -7.70756e-05, 7.4425e-05, -1.46181e-05,  0.00195366, 1.33123e-05, -3.68702e-05, -9.76707e-06,  0.00112585, 0.000267427, 4.12628e-05, -1.68854e-05,  0.00185195, -3.92222e-09, -4.22411e-08, 9.68777e-09
            )
        )
)

process.p = cms.Path(process.Test1)
