#ifndef RecoLocalCalo_EcalRecAlgos_EcalUncalibRecHitMultiFitCubicAlgoPh1_HH
#define RecoLocalCalo_EcalRecAlgos_EcalUncalibRecHitMultiFitCubicAlgoPh1_HH

/** \class EcalUncalibRecHitMultiFitCubicAlgoPh1
  *  Amplitude reconstucted by the multi-template fit
  *
  *  \author J.Bendavid, E.Di Marco, R. Gargiulo
  */

#include "RecoLocalCalo/EcalRecAlgos/interface/EcalUncalibRecHitRecAbsAlgo.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"

#include "CondFormats/EcalObjects/interface/EcalPedestals.h"
#include "CondFormats/EcalObjects/interface/EcalGainRatios.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"
#include "RecoLocalCalo/EcalRecAlgos/interface/CubicPulseChiSqSNNLS.h"
#include "RecoLocalCalo/EcalRecAlgos/interface/PiecewiseCubicSpline.h"

#include "TMatrixDSym.h"
#include "TVectorD.h"

class EcalUncalibRecHitMultiFitCubicAlgoPh1 {
public:
  using SampleVector = typename EigenMatrixTypes<ecalPh1>::SampleVector;
  using FullSampleVector = typename EigenMatrixTypes<ecalPh1>::FullSampleVector;
  using BXVector = typename EigenMatrixTypes<ecalPh1>::BXVector;
  using SampleGainVector = typename EigenMatrixTypes<ecalPh1>::SampleGainVector;
  using SampleMatrix = typename EigenMatrixTypes<ecalPh1>::SampleMatrix;
  using FullSampleMatrix = typename EigenMatrixTypes<ecalPh1>::FullSampleMatrix;
  using SampleMatrixGainArray = typename EigenMatrixTypes<ecalPh1>::SampleMatrixGainArray;

  EcalUncalibRecHitMultiFitCubicAlgoPh1();
  ~EcalUncalibRecHitMultiFitCubicAlgoPh1() {}
  EcalUncalibratedRecHit makeRecHit(const EcalDataFrame &dataFrame,
                                    const EcalPedestals::Item *aped,
                                    const EcalMGPAGainRatio *aGain,
                                    const SampleMatrixGainArray &noisecors,
                                    const FullSampleVector &fullpulse,
                                    const FullSampleMatrix &fullpulsecov,
                                    const BXVector &activeBX,
                                    const PiecewiseCubicSpline &spline);

  void disableErrorCalculation() { _computeErrors = false; }
  void setDoPrefit(bool b) { _doPrefit = b; }
  void setPrefitMaxChiSq(double x) { _prefitMaxChiSq = x; }
  void setDynamicPedestals(bool b) { _dynamicPedestals = b; }
  void setMitigateBadSamples(bool b) { _mitigateBadSamples = b; }
  void setSelectiveBadSampleCriteria(bool b) { _selectiveBadSampleCriteria = b; }
  void setAddPedestalUncertainty(double x) { _addPedestalUncertainty = x; }
  void setSimplifiedNoiseModelForGainSwitch(bool b) { _simplifiedNoiseModelForGainSwitch = b; }
  void setGainSwitchUseMaxSample(bool b) { _gainSwitchUseMaxSample = b; }

private:
  CubicPulseChiSqSNNLS<ecalPh1> _pulsefunc;
  CubicPulseChiSqSNNLS<ecalPh1> _pulsefuncSingle;
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
