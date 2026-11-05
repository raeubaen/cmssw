#include "RecoLocalCalo/EcalRecAlgos/interface/EcalUncalibRecHitMultiFitCubicAlgoPh2.h"

#include "FWCore/MessageLogger/interface/MessageLogger.h"

EcalUncalibRecHitMultiFitCubicAlgoPh2::EcalUncalibRecHitMultiFitCubicAlgoPh2()
    : _computeErrors(true),
      _doPrefit(false),
      _prefitMaxChiSq(1.),
      _dynamicPedestals(false),
      _mitigateBadSamples(false),
      _selectiveBadSampleCriteria(false),
      _addPedestalUncertainty(0.),
      _simplifiedNoiseModelForGainSwitch(true),
      _gainSwitchUseMaxSample(false) {
  _singlebx.resize(1);
  _singlebx << 0;

  _pulsefuncSingle.disableErrorCalculation();
  _pulsefuncSingle.setMaxIters(1);
  _pulsefuncSingle.setMaxIterWarnings(false);
}

/// compute rechits
EcalUncalibratedRecHit EcalUncalibRecHitMultiFitCubicAlgoPh2::makeRecHit(const EcalDataFrame_Ph2 &dataFrame,
                                                                    const EcalLiteDTUPedestalsMap::Item *aped,
                                                                    const EcalCATIAGainRatio *aGain,
                                                                    const SampleMatrixGainArray &noisecors,
                                                                    const FullSampleVector &fullpulse,
                                                                    const FullSampleMatrix &fullpulsecov,
                                                                    const BXVector &activeBX,
                                                                    const PiecewiseCubicSpline &spline
                                                                    ) {

  const uint32_t flags = 0;

  constexpr unsigned int nsample = EcalDataFrame_Ph2::MAXSAMPLES;

  double maxamplitude = -std::numeric_limits<double>::max();
  const unsigned int iSampleMax = ecalPh2::kMaxSampleIdx;
  const unsigned int iFullPulseMax = ecalPh2::kMaxSampleIdx - ecalPh2::kMinBX - 1;

  double pedval = 0.;

  SampleVector amplitudes;
  SampleGainVector gainsNoise;
  SampleGainVector gainsPedestal;
  SampleGainVector badSamples = SampleGainVector::Zero();
  const bool hasGainSwitch = false;

  //no dynamic pedestal in case of gain switch, since then the fit becomes too underconstrained
  bool dynamicPedestal = _dynamicPedestals && !hasGainSwitch;

  for (unsigned int iSample = 0; iSample < nsample; ++iSample) {
    const auto &sample = dataFrame.sample(iSample);

    double amplitude = 0.;
    const int gainId = sample.gainId();

    const double pedestal = aped->mean(gainId);
    const double gainratio = *aGain;

    if (gainId == 1) {
      gainsNoise[iSample] = 2;
      gainsPedestal[iSample] = dynamicPedestal ? 2 : -1;  //-1 for static pedestal
    } else {
      gainsNoise[iSample] = 0;
      gainsPedestal[iSample] = dynamicPedestal ? 0 : -1;  //-1 for static pedestal
    }

    if (dynamicPedestal) {
      amplitude = (double)(sample.adc()) * gainratio;
    } else {
      amplitude = ((double)(sample.adc()) - pedestal) * gainratio;
    }

    amplitudes[iSample] = amplitude;

    if (iSample == iSampleMax) {
      maxamplitude = amplitude;
      pedval = pedestal;
    }
  }

  double amplitude, amperr, time, chisq;
  bool status = false;

  //special handling for gain switch, where sample before maximum is potentially affected by slew rate limitation
  //optionally apply a stricter criteria, assuming slew rate limit is only reached in case where maximum sample has gain switched but previous sample has not
  //option 1: use simple max-sample algorithm
  if (hasGainSwitch && _gainSwitchUseMaxSample) {
    double maxpulseamplitude = maxamplitude / fullpulse[iFullPulseMax];
    EcalUncalibratedRecHit rh(dataFrame.id(), maxpulseamplitude, pedval, 0., 0., flags);
    rh.setAmplitudeError(0.);
    for (unsigned int ipulse = 0; ipulse < _pulsefunc.BXs().rows(); ++ipulse) {
      int bx = _pulsefunc.BXs().coeff(ipulse);
      if (bx != 0) {
        rh.setOutOfTimeAmplitude(bx + 5, 0.0);
      }
    }
    return rh;
  }

  //option2: A floating negative single-sample offset is added to the fit
  //such that the affected sample is treated only as a lower limit for the true amplitude
  bool mitigateBadSample = _mitigateBadSamples && hasGainSwitch && iSampleMax > 0;
  mitigateBadSample &=
      (!_selectiveBadSampleCriteria || (gainsNoise.coeff(iSampleMax - 1) != gainsNoise.coeff(iSampleMax)));
  if (mitigateBadSample) {
    badSamples[iSampleMax - 1] = 1;
  }

  //compute noise covariance matrix, which depends on the sample gains
  SampleMatrix noisecov;
  if (hasGainSwitch) {
    std::array<double, ecalPh2::NGAINS> pedrmss;
    std::array<double, ecalPh2::NGAINS> gainratios;
    for (unsigned int i; i < ecalPh2::NGAINS; ++i) {
      pedrmss[i] = aped->rms(i);
      gainratios[i] = ecalPh2::gains[i];
    }
    if (_simplifiedNoiseModelForGainSwitch) {
      int gainidxmax = gainsNoise[iSampleMax];
      noisecov = gainratios[gainidxmax] * gainratios[gainidxmax] * pedrmss[gainidxmax] * pedrmss[gainidxmax] *
                 noisecors[gainidxmax];
      if (!dynamicPedestal && _addPedestalUncertainty > 0.) {
        //add fully correlated component to noise covariance to inflate pedestal uncertainty
        noisecov += _addPedestalUncertainty * _addPedestalUncertainty * SampleMatrix::Ones();
      }
    } else {
      noisecov = SampleMatrix::Zero();
      for (unsigned int gainidx = 0; gainidx < noisecors.size(); ++gainidx) {
        SampleGainVector mask = gainidx * SampleGainVector::Ones();
        SampleVector pedestal = (gainsNoise.array() == mask.array()).cast<SampleVector::value_type>();
        if (pedestal.maxCoeff() > 0.) {
          //select out relevant components of each correlation matrix, and assume no correlation between samples with
          //different gain
          noisecov += gainratios[gainidx] * gainratios[gainidx] * pedrmss[gainidx] * pedrmss[gainidx] *
                      pedestal.asDiagonal() * noisecors[gainidx] * pedestal.asDiagonal();
          if (!dynamicPedestal && _addPedestalUncertainty > 0.) {
            //add fully correlated component to noise covariance to inflate pedestal uncertainty
            noisecov += gainratios[gainidx] * gainratios[gainidx] * _addPedestalUncertainty * _addPedestalUncertainty *
                        pedestal.asDiagonal() * SampleMatrix::Ones() * pedestal.asDiagonal();
          }
        }
      }
    }
  } else {
    noisecov = aped->rms(ecalPh2::gainId10) * aped->rms(ecalPh2::gainId10) * noisecors[0];
    if (!dynamicPedestal && _addPedestalUncertainty > 0.) {
      //add fully correlated component to noise covariance to inflate pedestal uncertainty
      noisecov += _addPedestalUncertainty * _addPedestalUncertainty * SampleMatrix::Ones();
    }
  }

  //optimized one-pulse fit for hlt
  bool usePrefit = false;
  if (_doPrefit) {
    status =
        _pulsefuncSingle.DoFit(amplitudes, noisecov, _singlebx, fullpulse, fullpulsecov, spline, gainsPedestal, badSamples);
    amplitude = status ? _pulsefuncSingle.X()[0] : 0.;
    amperr = status ? _pulsefuncSingle.Errors()[0] : 0.;
    time = status ? _pulsefuncSingle.T()[0] : 0.;
    chisq = _pulsefuncSingle.ChiSq();

    if (chisq < _prefitMaxChiSq) {
      usePrefit = true;
    }
  }

  if (!usePrefit) {
    if (!_computeErrors)
      _pulsefunc.disableErrorCalculation();
    status = _pulsefunc.DoFit(amplitudes, noisecov, activeBX, fullpulse, fullpulsecov, spline, gainsPedestal, badSamples);
    chisq = _pulsefunc.ChiSq();

    if (!status) {
      edm::LogWarning("EcalUncalibRecHitMultiFitCubicAlgoPh2::makeRecHit") << "Failed Fit" << std::endl;
    }

    unsigned int ipulseintime = 0;
    for (unsigned int ipulse = 0; ipulse < _pulsefunc.BXs().rows(); ++ipulse) {
      if (_pulsefunc.BXs().coeff(ipulse) == 0) {
        ipulseintime = ipulse;
        break;
      }
    }

    amplitude = status ? _pulsefunc.X()[ipulseintime] : 0.;
    amperr = status ? _pulsefunc.Errors()[ipulseintime] : 0.;
    time = status ? _pulsefunc.T()[ipulseintime] : 0.;
  }

  EcalUncalibratedRecHit rh(dataFrame.id(), amplitude, pedval, time, chisq, flags);
  rh.setAmplitudeError(amperr);
  rh.setJitterError(0.);

  if (!usePrefit) {
    for (unsigned int ipulse = 0; ipulse < _pulsefunc.BXs().rows(); ++ipulse) {
      int bx = _pulsefunc.BXs().coeff(ipulse);
      if (bx != 0 && std::abs(bx) < 100) {
        rh.setOutOfTimeAmplitude(bx + 5, status ? _pulsefunc.X().coeff(ipulse) : 0.);
      } else if (bx == (100 + gainsPedestal[iSampleMax])) {
        rh.setPedestal(status ? _pulsefunc.X().coeff(ipulse) : 0.);
      }
    }
  }

  return rh;
}
