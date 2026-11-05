import FWCore.ParameterSet.Config as cms

from RecoLocalCalo.EcalRecProducers.ecalPulseShapeParameters_cff import *

ecalPhase2CubicMultiFitUncalibRecHit = cms.EDProducer("EcalUncalibRecHitPhase2CubicMultiFitProducer",
    BarrelDigis = cms.InputTag('simEcalUnsuppressedDigis'),
    EBhitCollection = cms.string('EcalUncalibRecHitsEB'),
    # for multifit method
    activeBXs = cms.vint32(-3,-2,-1,0,1,2),
    ampErrorCalculation = cms.bool(True),
    useLumiInfoRunHeader = cms.bool(False),
    bunchSpacing = cms.int32(0),
                                                      
    doPrefit = cms.bool(False),
    prefitMaxChiSq = cms.double(25.),

    dynamicPedestals = cms.bool(False),
    mitigateBadSamples = cms.bool(False),
    gainSwitchUseMaxSample = cms.bool(True),
    selectiveBadSampleCriteria = cms.bool(False),
    simplifiedNoiseModelForGainSwitch = cms.bool(True),
    addPedestalUncertainty = cms.double(0.),

    # decide which algorithm to be use to calculate the jitter
    timealgo = cms.string("MultifitMethod"),

    # for ratio method
    EBtimeFitParameters = cms.vdouble(-2.015452e+00, 3.130702e+00, -1.234730e+01, 4.188921e+01, -8.283944e+01, 9.101147e+01, -5.035761e+01, 1.105621e+01),
    EBamplitudeFitParameters = cms.vdouble(1.138,1.652),
    EBtimeFitLimits_Lower = cms.double(0.2),
    EBtimeFitLimits_Upper = cms.double(1.4),
    # for time error
    EBtimeConstantTerm= cms.double(.6),
 
    # for kOutOfTime flag
    EBtimeNconst      = cms.double(28.5),
    outOfTimeThresholdGain12pEB    = cms.double(5),      # times estimated precision
    outOfTimeThresholdGain12mEB    = cms.double(5),      # times estimated precision
    outOfTimeThresholdGain61pEB    = cms.double(5),      # times estimated precision
    outOfTimeThresholdGain61mEB    = cms.double(5),      # times estimated precision
    amplitudeThresholdEB    = cms.double(10),
)
