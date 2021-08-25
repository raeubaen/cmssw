#include "CondFormats/EcalObjects/interface/EcalPulseCovariances.h"

EcalPulseCovariance::EcalPulseCovariance() {
  for (int k = 0; k < std::pow(TEMPLATESAMPLES, 2); ++k) {
    int i = k / TEMPLATESAMPLES;
    int j = k % TEMPLATESAMPLES;
    covval[i][j] = 0.;
  }
}
