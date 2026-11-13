#cmsRun dumpPhotonHighEt_cfg.py     globalTag=140X_mcRun3_2024_realistic_v26     runNr=1     outputFile=photon_mean_gbr_140X_mcRun3_2024_realistic_v26.root

import FWCore.ParameterSet.Config as cms
import FWCore.ParameterSet.VarParsing as VarParsing

options = VarParsing.VarParsing("analysis")

options.register(
    "runNr", 1,
    options.multiplicity.singleton,
    options.varType.int,
    "Run number used to select the conditions IOV"
)

options.register(
    "globalTag",
    "140X_mcRun3_2024_realistic_v26",
    options.multiplicity.singleton,
    options.varType.string,
    "GlobalTag"
)

options.parseArguments()

process = cms.Process("DumpPhotonRegression")

process.source = cms.Source(
    "EmptySource",
    firstRun=cms.untracked.uint32(options.runNr),
    numberEventsInRun=cms.untracked.uint32(1)
)

process.maxEvents = cms.untracked.PSet(
    input=cms.untracked.int32(1)
)

process.writer = cms.EDAnalyzer(
    "FWLiteESRecordWriterAnalyzer",
    fileName=cms.untracked.string(options.outputFile),

    GBRDWrapperRcd=cms.untracked.VPSet(
        cms.untracked.PSet(
            type=cms.untracked.string("GBRForestD"),
            label=cms.untracked.string("photon_eb_ecalOnly_5To300_0p2To2_mean")
        ),
        cms.untracked.PSet(
            type=cms.untracked.string("GBRForestD"),
            label=cms.untracked.string("photon_ee_ecalOnly_5To300_0p2To2_mean")
        )
    )
)

process.GlobalTag = cms.ESSource(
    "PoolDBESSource",
    globaltag=cms.string(options.globalTag),
    connect=cms.string(
        "frontier://FrontierProd/CMS_CONDITIONS"
    ),
    toGet=cms.VPSet()
)

process.out = cms.EndPath(process.writer)
