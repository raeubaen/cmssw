#ifndef CondFormats_EcalObjects_EcalCubicPulseShapes_h
#define CondFormats_EcalObjects_EcalCubicPulseShapes_h

#include "CondFormats/Serialization/interface/Serializable.h"
#include "CondFormats/EcalObjects/interface/EcalCondObjectContainer.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"
#include <iostream>

template <class P>
struct EcalCubicPulseShapeT {
public:
  static constexpr int TEMPLATESAMPLES = static_cast<int>(P::kPulseShapeTemplateSampleSize);
  static constexpr int PARSPERSAMPLE = static_cast<int>(P::kParsPerTemplateSample);

  EcalCubicPulseShapeT();

  float parameters[TEMPLATESAMPLES*PARSPERSAMPLE];

  const float pdfval(int iSample) const {
    //int baseIndex = (iSample / PARSPERSAMPLE) * PARSPERSAMPLE; // it was like that, 18/06/26, don't know why (Ruben)
    int baseIndex = iSample*PARSPERSAMPLE; // modified 18/06/26 Ruben
    return parameters[baseIndex];
  }

  const float* splinepars(int iSample) const {
    int baseIndex = iSample * PARSPERSAMPLE;
    //std::cout << "baseIndex: " << baseIndex << std::endl;
    return &parameters[baseIndex]; // returns pointer to part of array
  }

  COND_SERIALIZABLE;
};



using EcalPh1CubicPulseShape = EcalCubicPulseShapeT<ecalPh1>;

typedef EcalCondObjectContainer<EcalPh1CubicPulseShape> EcalPh1CubicPulseShapesMap;
typedef EcalPh1CubicPulseShapesMap::const_iterator EcalPh1CubicPulseShapesMapIterator;
typedef EcalPh1CubicPulseShapesMap EcalPh1CubicPulseShapes;



using EcalPh2CubicPulseShape = EcalCubicPulseShapeT<ecalPh2>;

typedef EcalCondObjectContainer<EcalPh2CubicPulseShape> EcalPh2CubicPulseShapesMap;
typedef EcalPh2CubicPulseShapesMap::const_iterator EcalPh2CubicPulseShapesMapIterator;
typedef EcalPh2CubicPulseShapesMap EcalPh2CubicPulseShapes;

#endif
