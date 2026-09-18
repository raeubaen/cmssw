#ifndef EcalCubicPulseSymmCovarianceT_h
#define EcalCubicPulseSymmCovarianceT_h

#include "CondFormats/Serialization/interface/Serializable.h"

#include "CondFormats/EcalObjects/interface/EcalCondObjectContainer.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"

#include <algorithm>


template <typename T>

struct EcalCubicPulseSymmCovarianceT {
public:
  static constexpr int TEMPLATESAMPLES = static_cast<int>(T::kPulseShapeTemplateSampleSize);

  float covval[TEMPLATESAMPLES * (TEMPLATESAMPLES + 1) / 2];

  int indexFor(int i, int j) const {
    int m = std::min(i, j);
    int n = std::max(i, j);
    return n + TEMPLATESAMPLES * m - m * (m + 1) / 2;
  }

  float val(int i, int j) const { return covval[indexFor(i, j)]; }
  float& val(int i, int j) { return covval[indexFor(i, j)]; };

  EcalCubicPulseSymmCovarianceT() {
    int N = TEMPLATESAMPLES * (TEMPLATESAMPLES + 1) / 2;
    for (int k = 0; k < N; ++k) covval[k] = 0.;
  };

  COND_SERIALIZABLE;

};


using EcalPh1PulseSymmCovariance = EcalCubicPulseSymmCovarianceT<ecalPh1>;

typedef EcalCondObjectContainer<EcalPh1PulseSymmCovariance> EcalPh1PulseSymmCovariancesMap;
typedef EcalPh1PulseSymmCovariancesMap::const_iterator EcalPh1PulseSymmCovariancesMapIterator;
typedef EcalPh1PulseSymmCovariancesMap EcalPh1PulseSymmCovariances;


using EcalPh2PulseSymmCovariance = EcalCubicPulseSymmCovarianceT<ecalPh2>;

typedef EcalCondObjectContainer<EcalPh2PulseSymmCovariance> EcalPh2PulseSymmCovariancesMap;
typedef EcalPh2PulseSymmCovariancesMap::const_iterator EcalPh2PulseSymmCovariancesMapIterator;
typedef EcalPh2PulseSymmCovariancesMap EcalPh2PulseSymmCovariances;


#endif
