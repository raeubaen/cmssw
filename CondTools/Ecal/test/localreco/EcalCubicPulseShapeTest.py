import sys
import os.path
import FWCore.ParameterSet.Config as cms

FIRST_RUN = 2
POPULATE_MC = FIRST_RUN < 2

txtfile = sys.argv[1]

if POPULATE_MC: suffix = "phase2-sim"
else: suffix = "phase2-data-test"

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
        record = cms.string('EcalPh2CubicPulseShapesRcd'),
        tag = cms.string(f'EcalPh2CubicPulseShapes_{tag_suffix}')
    ))
)

if os.path.isfile(txtfile)==False:
    print("WARNING: file ",txtfile," does not exist. Exiting... ")
    exit

process.Test1 = cms.EDAnalyzer("ExTestEcalPh2CubicPulseShapesAnalyzer",
    SinceAppendMode = cms.bool(True),
    record = cms.string('EcalPh2CubicPulseShapesRcd'),
    loggingOn = cms.untracked.bool(True),
    Source = cms.PSet(
        firstRun = cms.string('1' if POPULATE_MC else f"{FIRST_RUN}"),
        inputFileName = cms.string(txtfile),
        EBCubicPulseShapeTemplate = cms.vdouble (
            0.00106337, -0.000158739, 0.00173552, 0.000202557, 0.127053, 0.0494742, 0.00523174, -0.0000052309, 0.600231, 0.0851572, -0.00147186, -0.000421102, 0.976904, 0.0244627, -0.00631154, -0.00000985793, 0.900351, -0.0413091, -0.00335104, 0.000173804, 0.564846, -0.0565516, 0.000502024, 0.0000862921, 0.257496, -0.0378752, 0.00191992, -0.0000345125, 0.0920394, -0.0155716, 0.00133466, -0.000101497, 0.0345656, -0.00310594, 0.00050671, -0.000134167, 0.0201039, -0.000504606, 0.00016201, -0.0000802987, 0.0140466, -0.000715238, 0.0000616124, -0.000025403, 0.00911141, -0.00070486, -0.0000187775, -0.0000166191, 0.00317894, -0.000657612, 0.0000938651, -0.00000221315, 0.00185254, 0.00000708426, -0.00000191054, -0.00000528447, 0.00123824, -0.0000918925, 0.000030333, 0.00000415739, 0.0017875, 0.0000608106, -0.0000178204, 0.00000161448
        ) ,
        EECubicPulseShapeTemplate = cms.vdouble (
           0.00106337, -0.000158739, 0.00173552, 0.000202557, 0.127053, 0.0494742, 0.00523174, -0.0000052309, 0.600231, 0.0851572, -0.00147186, -0.000421102, 0.976904, 0.0244627, -0.00631154, -0.00000985793, 0.900351, -0.0413091, -0.00335104, 0.000173804, 0.564846, -0.0565516, 0.000502024, 0.0000862921, 0.257496, -0.0378752, 0.00191992, -0.0000345125, 0.0920394, -0.0155716, 0.00133466, -0.000101497, 0.0345656, -0.00310594, 0.00050671, -0.000134167, 0.0201039, -0.000504606, 0.00016201, -0.0000802987, 0.0140466, -0.000715238, 0.0000616124, -0.000025403, 0.00911141, -0.00070486, -0.0000187775, -0.0000166191, 0.00317894, -0.000657612, 0.0000938651, -0.00000221315, 0.00185254, 0.00000708426, -0.00000191054, -0.00000528447, 0.00123824, -0.0000918925, 0.000030333, 0.00000415739, 0.0017875, 0.0000608106, -0.0000178204, 0.00000161448
        )
    )
)

process.p = cms.Path(process.Test1)
