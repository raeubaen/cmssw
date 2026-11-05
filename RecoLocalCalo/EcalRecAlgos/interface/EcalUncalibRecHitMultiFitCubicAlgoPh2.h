#ifndef RecoLocalCalo_EcalRecAlgos_EcalUncalibRecHitMultiFitCubicAlgoPh2_h
#define RecoLocalCalo_EcalRecAlgos_EcalUncalibRecHitMultiFitCubicAlgoPh2_h

/** \class EcalUncalibRecHitMultiFitCubicAlgoPh2
  *  Amplitude reconstucted from Phase 2 digis by the multi-template fit
  */

#include "CondFormats/EcalObjects/interface/EcalLiteDTUPedestals.h"
#include "CondFormats/EcalObjects/interface/EcalCATIAGainRatios.h"
#include "DataFormats/EcalDigi/interface/EcalDataFrame_Ph2.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"
#include "DataFormats/EcalRecHit/interface/EcalUncalibratedRecHit.h"
#include "RecoLocalCalo/EcalRecAlgos/interface/CubicPulseChiSqSNNLS.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "RecoLocalCalo/EcalRecAlgos/interface/PiecewiseCubicSpline.h"

class EcalUncalibRecHitMultiFitCubicAlgoPh2 {
public:
  using SampleVector = typename EigenMatrixTypes<ecalPh2>::SampleVector;
  using FullSampleVector = typename EigenMatrixTypes<ecalPh2>::FullSampleVector;
  using BXVector = typename EigenMatrixTypes<ecalPh2>::BXVector;
  using SampleGainVector = typename EigenMatrixTypes<ecalPh2>::SampleGainVector;
  using SampleMatrix = typename EigenMatrixTypes<ecalPh2>::SampleMatrix;
  using FullSampleMatrix = typename EigenMatrixTypes<ecalPh2>::FullSampleMatrix;
  using SampleMatrixGainArray = typename EigenMatrixTypes<ecalPh2>::SampleMatrixGainArray;

  EcalUncalibRecHitMultiFitCubicAlgoPh2();
  ~EcalUncalibRecHitMultiFitCubicAlgoPh2(){};
  EcalUncalibratedRecHit makeRecHit(const EcalDataFrame_Ph2 &dataFrame,
                                    const EcalLiteDTUPedestalsMap::Item *aped,
                                    const EcalCATIAGainRatio *aGain,
                                    const SampleMatrixGainArray &noisecors,
                                    const FullSampleVector &fullpulse,
                                    const FullSampleMatrix &fullpulsecov,
                                    const BXVector &activeBX,
                                    const PiecewiseCubicSpline &spline);

  void disableErrorCalculation() { _computeErrors = false; }
  void setDoPrefit(const bool b) { _doPrefit = b; }
  void setPrefitMaxChiSq(const double x) { _prefitMaxChiSq = x; }
  void setDynamicPedestals(const bool b) { _dynamicPedestals = b; }
  void setMitigateBadSamples(const bool b) { _mitigateBadSamples = b; }
  void setSelectiveBadSampleCriteria(const bool b) { _selectiveBadSampleCriteria = b; }
  void setAddPedestalUncertainty(const double x) { _addPedestalUncertainty = x; }
  void setSimplifiedNoiseModelForGainSwitch(const bool b) { _simplifiedNoiseModelForGainSwitch = b; }
  void setGainSwitchUseMaxSample(const bool b) { _gainSwitchUseMaxSample = b; }

private:
  CubicPulseChiSqSNNLS<ecalPh2> _pulsefunc;
  CubicPulseChiSqSNNLS<ecalPh2> _pulsefuncSingle;
  bool _computeErrors;
  bool _doPrefit;
  double _prefitMaxChiSq;
  bool _dynamicPedestals;
  bool _mitigateBadSamples;
  bool _selectiveBadSampleCriteria;
  double _addPedestalUncertainty;
  bool _simplifiedNoiseModelForGainSwitch;
  bool _gainSwitchUseMaxSample;
  BXVector _singlebx;
};

#endif
