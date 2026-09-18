#include "CondFormats/EcalObjects/interface/EcalCubicPulseShapeT.h"

template <class P>
EcalCubicPulseShapeT<P>::EcalCubicPulseShapeT() {
  for (int s = 0; s < TEMPLATESAMPLES*PARSPERSAMPLE; ++s)
    parameters[s] = 0.;
}

template struct EcalCubicPulseShapeT<ecalPh2>;
template struct EcalCubicPulseShapeT<ecalPh1>;
