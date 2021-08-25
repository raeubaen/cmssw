#ifndef EcalPulseShapes_h
#define EcalPulseShapes_h

#include "CondFormats/Serialization/interface/Serializable.h"
#include "CondFormats/EcalObjects/interface/EcalCondObjectContainer.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"


struct EcalPulseShape {
public:
  static const int TEMPLATESAMPLES = 12;

  EcalPulseShape();

  float pdfval[TEMPLATESAMPLES];

  float val(int isample) const { return pdfval[isample]; }

  COND_SERIALIZABLE;
};

typedef EcalCondObjectContainer<EcalPulseShape> EcalPulseShapesMap;
typedef EcalPulseShapesMap::const_iterator EcalPulseShapesMapIterator;
typedef EcalPulseShapesMap EcalPulseShapes;



struct EcalPh2PulseShape: public EcalPulseShape {
public:
  static const int TEMPLATESAMPLES = ecalPh2::sampleSize;
};

typedef EcalCondObjectContainer<EcalPh2PulseShape> EcalPh2PulseShapesMap;
typedef EcalPh2PulseShapesMap::const_iterator EcalPh2PulseShapesMapIterator;
typedef EcalPh2PulseShapesMap EcalPh2PulseShapes;



#endif
