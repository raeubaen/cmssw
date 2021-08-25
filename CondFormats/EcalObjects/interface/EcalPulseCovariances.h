#ifndef EcalPulseCovariances_h
#define EcalPulseCovariances_h

#include "CondFormats/Serialization/interface/Serializable.h"

#include "CondFormats/EcalObjects/interface/EcalPulseShapes.h"
#include "CondFormats/EcalObjects/interface/EcalCondObjectContainer.h"

struct EcalPulseCovariance {
public:
  static const int TEMPLATESAMPLES = EcalPulseShape::TEMPLATESAMPLES;

  EcalPulseCovariance();

  float covval[TEMPLATESAMPLES][TEMPLATESAMPLES];

  float val(int i, int j) const { return covval[i][j]; }

  COND_SERIALIZABLE;
};

typedef EcalCondObjectContainer<EcalPulseCovariance> EcalPulseCovariancesMap;
typedef EcalPulseCovariancesMap::const_iterator EcalPulseCovariancesMapIterator;
typedef EcalPulseCovariancesMap EcalPulseCovariances;


struct EcalPh2PulseCovariance: public EcalPulseCovariance {
public:
  static const int TEMPLATESAMPLES = EcalPh2PulseShape::TEMPLATESAMPLES;
};

typedef EcalCondObjectContainer<EcalPh2PulseCovariance> EcalPh2PulseCovariancesMap;
typedef EcalPh2PulseCovariancesMap::const_iterator EcalPh2PulseCovariancesMapIterator;
typedef EcalPh2PulseCovariancesMap EcalPh2PulseCovariances;

#endif
