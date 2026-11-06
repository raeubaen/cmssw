import FWCore.ParameterSet.Config as cms

EcalPh2SamplesCorrelationRcd =  cms.ESSource("EmptyESSource",
                                recordName = cms.string("EcalPh2SamplesCorrelationRcd"),
                                firstValid = cms.vuint32(1),
                                iovIsRunNotTime = cms.bool(True)
                                )

EcalPh2SamplesCorrelation = cms.ESProducer(
    "EcalPh2SamplesCorrelationESProducer",
    ComponentName = cms.string('EcalPh2SamplesCorrelationESProducer'),
    SamplesCorrelationGain10 = cms.vdouble(
      1.,
      0.83,
      0.68,
      0.56,
      0.5,
      0.45,
      0.44,
      0.43,
      0.42,
      0.41,
      0.4,
      0.4,
      0.39,
      0.38,
      0.37,
      0.37
    ),
  SamplesCorrelationGain1 = cms.vdouble(
      1.,
      0.83,
      0.68,
      0.56,
      0.5,
      0.45,
      0.44,
      0.43,
      0.42,
      0.41,
      0.4,
      0.4,
      0.39,
      0.38,
      0.37,
      0.37
    ),

)
