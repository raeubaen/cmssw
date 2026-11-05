#define PulseChiSqSNNLS_cxx
#include "RecoLocalCalo/EcalRecAlgos/interface/EigenMatrixTypes.h"
#include "RecoLocalCalo/EcalRecAlgos/interface/CubicPulseChiSqSNNLS.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include <math.h>
#include <iostream>


template <class P>
CubicPulseChiSqSNNLS<P>::CubicPulseChiSqSNNLS() : _chisq(0.), _computeErrors(true), _maxiters(50), _maxiterwarnings(true) {
  Eigen::initParallel();
  _invcov.setZero();
}

template <class P>
CubicPulseChiSqSNNLS<P>::~CubicPulseChiSqSNNLS() {}

template <class P>
int CubicPulseChiSqSNNLS<P>::GetSignalPulseIndex(){
  unsigned int ipulseSignal = 0;
  for (unsigned int ip = 0; ip < _bxs.rows(); ++ip) {
      if (_bxs.coeff(ip) == 0) {
          ipulseSignal = ip;
          break;
      }
  }
  return ipulseSignal;
}


template <class P>
int CubicPulseChiSqSNNLS<P>::GetDerivativePulseIndex(){
  unsigned int ipulseDer = 0;
  for (unsigned int ip = 0; ip < _bxs.rows(); ++ip) {
      if (_bxs.coeff(ip) == _derivativeBxOffset) {
          ipulseDer = ip;
          break;
      }
  }
  return ipulseDer;
}


template <class Base>
void eigen_solve_submatrix(const typename Base::PulseMatrix &mat,
                           const typename Base::PulseVector &invec,
                           typename Base::PulseVector &outvec,
                           const unsigned NP) {
  using namespace Eigen;
  switch (NP) {  // pulse matrix is always square.
    case 10: {
      // the template keywords are needed because the matrix types are dependent types of the template parameter C
      const auto temp = mat.template topLeftCorner<10, 10>();
      outvec.template head<10>() = temp.ldlt().solve(invec.template head<10>());
    } break;
    case 9: {
      const auto temp = mat.template topLeftCorner<9, 9>();
      outvec.template head<9>() = temp.ldlt().solve(invec.template head<9>());
    } break;
    case 8: {
      const auto temp = mat.template topLeftCorner<8, 8>();
      outvec.template head<8>() = temp.ldlt().solve(invec.template head<8>());
    } break;
    case 7: {
      const auto temp = mat.template topLeftCorner<7, 7>();
      outvec.template head<7>() = temp.ldlt().solve(invec.template head<7>());
    } break;
    case 6: {
      const auto temp = mat.template topLeftCorner<6, 6>();
      outvec.template head<6>() = temp.ldlt().solve(invec.template head<6>());
    } break;
    case 5: {
      const auto temp = mat.template topLeftCorner<5, 5>();
      outvec.template head<5>() = temp.ldlt().solve(invec.template head<5>());
    } break;
    case 4: {
      const auto temp = mat.template topLeftCorner<4, 4>();
      outvec.template head<4>() = temp.ldlt().solve(invec.template head<4>());
    } break;
    case 3: {
      const auto temp = mat.template topLeftCorner<3, 3>();
      outvec.template head<3>() = temp.ldlt().solve(invec.template head<3>());
    } break;
    case 2: {
      const auto temp = mat.template topLeftCorner<2, 2>();
      outvec.template head<2>() = temp.ldlt().solve(invec.template head<2>());
    } break;
    case 1: {
      const auto temp = mat.template topLeftCorner<1, 1>();
      outvec.template head<1>() = temp.ldlt().solve(invec.template head<1>());
    } break;
    default:
      throw cms::Exception("MultFitWeirdState")
          << "Weird number of pulses encountered in multifit, module is configured incorrectly!";
  }
}


template <class P>
bool CubicPulseChiSqSNNLS<P>::DoFit(const SampleVector &samples,
                               const SampleMatrix &samplecov,
                               const BXVector &bxs,
                               const FullSampleVector &fullpulse,
                               const FullSampleMatrix &fullpulsecov,
                               const PiecewiseCubicSpline &spline,
                               const SampleGainVector &gains,
                               const SampleGainVector &badSamples) {

  _spline = spline;

  //  std::cout << "=== SampleVector::RowsAtCompileTime = " << SampleVector::RowsAtCompileTime << std::endl;

  const unsigned int npulse = bxs.rows();
  FullSampleVector fullpulse_signal_template_error(FullSampleVector::Zero());

  FullSampleVector fullpulse_deriv(FullSampleVector::Zero());

  for (unsigned int i=0; i<P::kPulseShapeTemplateSampleSize; ++i){
    double x  = P::Samp_Period * i;
    double dp = _spline.Eval(i, x + 0.001 - P::kPulseShapePeakShift_ns);
    double dm = _spline.Eval(i, x - 0.001 - P::kPulseShapePeakShift_ns);
    fullpulse_deriv(i + P::maxShift) = (dp - dm)/0.002;
    fullpulse_signal_template_error(i+P::maxShift) = P::kPulseShapesStatRelError;
  }

  _sampvec = samples;

  _bxs = bxs;
  _pulsemat.resize(Eigen::NoChange, npulse);

  //construct dynamic pedestals if applicable
  int ngains = gains.maxCoeff() + 1;
  int nPedestals = 0;
  for (int gainidx = 0; gainidx < ngains; ++gainidx) {
    SampleGainVector mask = gainidx * SampleGainVector::Ones();
    SampleVector pedestal =
        (gains.array() == mask.array())
            .template cast<typename SampleVector::value_type>();
    if (pedestal.maxCoeff() > 0.) {
      ++nPedestals;
      _bxs.resize(npulse + nPedestals);
      _bxs[npulse + nPedestals - 1] = _pedestalBxOffset + gainidx;  //bx values >=100 indicate dynamic pedestals
      _pulsemat.resize(Eigen::NoChange, npulse + nPedestals);
      _pulsemat.col(npulse + nPedestals - 1) = pedestal;
    }
  }

  // std::cout << "=== nPedestals = " << nPedestals << "\t npulse = " << npulse << std::endl;

  //construct negative step functions for saturated or potentially slew-rate-limited samples
  for (int isample = 0; isample < SampleVector::RowsAtCompileTime; ++isample) {
    if (badSamples.coeff(isample) > 0) {
      // std::cout << "sample #" << isample << " bad!!" << std::endl;
      SampleVector step = SampleVector::Zero();
      //step correction has negative sign for saturated or slew-limited samples which have been forced to zero
      step[isample] = -1.;

      ++nPedestals;
      _bxs.resize(npulse + nPedestals);
      _bxs[npulse + nPedestals - 1] =
          _stepCorrBxOffset - isample;  //bx values <=-100 indicate step corrections for saturated or slew-limited samples
      _pulsemat.resize(Eigen::NoChange, npulse + nPedestals);
      _pulsemat.col(npulse + nPedestals - 1) = step;
    }
  }


  _bxs.resize(npulse + nPedestals + 1);
  _bxs[npulse + nPedestals] = _derivativeBxOffset;
  _pulsemat.resize(Eigen::NoChange, npulse + nPedestals + 1);
  _pulsemat.col(npulse + nPedestals) = SampleVector::Zero();


  _npulsetot = npulse + nPedestals + 1;
  
  _ampvec = PulseVector::Zero(_npulsetot);
  _errvec = PulseVector::Zero(_npulsetot);
  _nP = 0;
  _chisq = 0.;
  
  aTamat.resize(_npulsetot, _npulsetot);

  // std::cout << "_npulsetot = " << _npulsetot << std::endl;

  _time      = PulseVector::Zero(_npulsetot);  // t = 0 for all pulses initially
  _timeErr   = PulseVector::Zero(_npulsetot);

  // std::cout << "P::maxShift P::maxShift = " << P::maxShift << "   P::nPreSamples = " << P::nPreSamples 
  //           << "   P::Samp_Period = " << P::Samp_Period << std::endl;

  //initialize pulse template matrix
  for (unsigned int ipulse=0; ipulse<_npulsetot; ++ipulse) {
    int bx = _bxs.coeff(ipulse);
    if (abs(bx) < 10) {
      int offset = P::maxShift - P::nPreSamples - bx*int(25./P::Samp_Period);
      // std::cout << "ipulse = " << ipulse << "   offset = " << offset << std::endl;
      // std::cout << " _pulsemat.col(ipulse) = " << fullpulse.template segment<SampleVector::RowsAtCompileTime>(offset) << std::endl;
      _pulsemat.col(ipulse) = fullpulse.template segment<SampleVector::RowsAtCompileTime>(offset);
      if (bx == 0) {
          _signalTemplateError = fullpulse_signal_template_error.template segment<SampleVector::RowsAtCompileTime>(offset);
      }
    }
    if (bx == _derivativeBxOffset){
      int bx_s = _bxs.coeff(GetSignalPulseIndex());
      int offset = P::maxShift - P::nPreSamples - bx_s*int(25./P::Samp_Period);
      // std::cout << " bx_s  = " << bx_s << std::endl;
      // std::cout << " bx_s offset  = " << offset << std::endl;
      // std::cout << " _pulsemat.col(ipulse) = " << fullpulse_deriv.template segment<SampleVector::RowsAtCompileTime>(offset) << std::endl;
      _pulsemat.col(ipulse) = fullpulse_deriv.template segment<SampleVector::RowsAtCompileTime>(offset);
    }
  }

  //unconstrain pedestals already for first iteration since they should always be non-zero
  if (nPedestals > 0) {
    for (int i = 0; i < _bxs.rows(); ++i) {
      int bx = _bxs.coeff(i);
      if (abs(bx - _pedestalBxOffset) < 10) {
        NNLSUnconstrainParameter(i);
      }
      if (bx == _derivativeBxOffset) NNLSUnconstrainParameter(i);
      if (std::abs(bx - _stepCorrBxOffset) < 20) NNLSUnconstrainParameter(i);
    }
  }

  // std::cout << "pulsemat after pedestal unconstain = " << _pulsemat << std::endl;

  //do the actual fit
  bool status = Minimize(samplecov,fullpulsecov);

  // std::cout << "pulsemat after end minimize = " << _pulsemat << std::endl;
  // std::cout << "minimize done" << std::endl;

  _ampvecmin = _ampvec;
  _timevecmin = _time;

  // std::cout << " _sampvec = " << _sampvec << std::endl;
  // std::cout << " bxs = " << bxs << std::endl;
  // std::cout << " fullpulse = " << fullpulse << std::endl;
  // std::cout << " _ampvecmin = " << _ampvecmin << std::endl;
  
  _bxsmin = _bxs;
  
  if (!status) return status;
  
  // std::cout << " _computeErrors = " << _computeErrors << std::endl;
  
  if(!_computeErrors) return status;
  
  //compute MINOS-like uncertainties for in-time amplitude
  bool foundintime = false;
  unsigned int ipulseintime = 0;
  //   std::cout << " npulse = " << npulse << std::endl;
  for (unsigned int ipulse=0; ipulse<npulse; ++ipulse) {
    //     std::cout << " _bxs.coeff( " << ipulse << "::" << npulse << " ) = " << _bxs.coeff(ipulse) << std::endl;
    if (_bxs.coeff(ipulse)==0) {
      ipulseintime = ipulse;
      foundintime = true;
      break;
    }
  }
  // std::cout << " foundintime = " << foundintime << std::endl;
  if (!foundintime) return status;
  
  
  
  const unsigned int ipulseintimemin = ipulseintime;
  
  double approxerr = ComputeApproxUncertainty(ipulseintime);
  double chisq0 = _chisq;
  double x0 = _ampvecmin[ipulseintime];
  
  //move in time pulse first to active set if necessary
  if (ipulseintime<_nP) {
    _pulsemat.col(_nP-1).swap(_pulsemat.col(ipulseintime));
    std::swap(_ampvec.coeffRef(_nP-1),_ampvec.coeffRef(ipulseintime));
    std::swap(_bxs.coeffRef(_nP-1),_bxs.coeffRef(ipulseintime));
    ipulseintime = _nP - 1;
    --_nP;    
  }
  
  
  SampleVector pulseintime = _pulsemat.col(ipulseintime);
  _pulsemat.col(ipulseintime).setZero();
  
  //two point interpolation for upper uncertainty when amplitude is away from boundary
  double xplus100 = x0 + approxerr;
  _ampvec.coeffRef(ipulseintime) = xplus100;
  _sampvec = samples - _ampvec.coeff(ipulseintime)*pulseintime;

  status &= Minimize(samplecov,fullpulsecov);
  if (!status) return status;
  double chisqplus100 = ComputeChiSq();
  
  double sigmaplus = std::abs(xplus100-x0)/sqrt(chisqplus100-chisq0);
  
  //if amplitude is sufficiently far from the boundary, compute also the lower uncertainty and average them
  if ( (x0/sigmaplus) > 0.5 ) {
    for (unsigned int ipulse=0; ipulse<npulse; ++ipulse) {
      if (_bxs.coeff(ipulse)==0) {
        ipulseintime = ipulse;
        break;
      }
    }    
    double xminus100 = std::max(0.,x0-approxerr);
    _ampvec.coeffRef(ipulseintime) = xminus100;
    _sampvec = samples - _ampvec.coeff(ipulseintime)*pulseintime;
    status &= Minimize(samplecov,fullpulsecov);
    if (!status) return status;
    double chisqminus100 = ComputeChiSq();
    
    double sigmaminus = std::abs(xminus100-x0)/sqrt(chisqminus100-chisq0);
    _errvec[ipulseintimemin] = 0.5*(sigmaplus + sigmaminus);
    
  }
  else {
    _errvec[ipulseintimemin] = sigmaplus;
  }
  
  _chisq = chisq0;  
  
  return status;
  
}

template <class P>
void CubicPulseChiSqSNNLS<P>::AdjustSignalPulseShape(){
  const unsigned int npulsetot = _bxs.rows();

  unsigned int ipulseSignal = GetSignalPulseIndex();

  const int nTemplateBins = P::kPulseShapeTemplateSampleSize;
  float pulseShapeTemplate[nTemplateBins];
  FullSampleVector fullpulse(FullSampleVector::Zero());
  FullSampleVector fullpulse_deriv(FullSampleVector::Zero());

  //   intime sample is [3] // edm
  for(int i=0; i<nTemplateBins; i++){
    //     double x = double( IDSTART + P::Samp_Period * (i + 3) - WFLENGTH / 2);
    double x = double( P::Samp_Period * i - P::kPulseShapePeakShift_ns );
    pulseShapeTemplate[i] = _spline.Eval(i, x -_time[ipulseSignal]);
    //std::cout << "\t\tSpline bin " << i << " val = " << pulseShapeTemplate[i] << std::endl;
  }

  for (int i=0; i<nTemplateBins; ++i) {
    fullpulse(i+P::maxShift) = pulseShapeTemplate[i];
    double x  = P::Samp_Period * i;
    double dp = _spline.Eval(i, x + 0.001 - P::kPulseShapePeakShift_ns - _time[ipulseSignal]);
    double dm = _spline.Eval(i, x - 0.001 - P::kPulseShapePeakShift_ns - _time[ipulseSignal]);
    fullpulse_deriv(i + P::maxShift) = (dp - dm)/0.002;
    // std::cout << "\t\tSpline deriv bin " << i << " x = " << x << "    dp = " << dp << "   dm = " << dm << "   fullpulse_deriv( " << i + P::maxShift << " ) = " << fullpulse_deriv(i + P::maxShift) << std::endl;
  }

  // std::cout << "pre: _pulsemat.col(ipulse) " <<_pulsemat.col(ipulseSignal) << std::endl;

  //initialize pulse template matrix
  for (unsigned int ipulse=0; ipulse<npulsetot; ++ipulse) {
    int bx = _bxs.coeff(ipulse);
    if (abs(bx) < 10) {
      if (ipulse != ipulseSignal) continue;
      int offset = P::maxShift - P::nPreSamples - bx*int(25./P::Samp_Period);
      _pulsemat.col(ipulse) = fullpulse.template segment<SampleVector::RowsAtCompileTime>(offset);
      // std::cout << "Adjust pulsemat ipulse " << ipulse << " = " << _pulsemat.col(ipulse) << std::endl;
    }
    if (bx == 1000){
      int bx_s = _bxs.coeff(GetSignalPulseIndex());
      int offset = P::maxShift - P::nPreSamples - bx_s*int(25./P::Samp_Period);
      _pulsemat.col(ipulse) = fullpulse_deriv.template segment<SampleVector::RowsAtCompileTime>(offset);
    }
  }

  // std::cout << "post: _pulsemat.col(ipulse) " <<_pulsemat.col(ipulseSignal) << std::endl;

}

template <class P>
bool CubicPulseChiSqSNNLS<P>::Minimize(const SampleMatrix &samplecov, const FullSampleMatrix &fullpulsecov) {

  //  std::cout << "Minimize pulsemat = " << _pulsemat << std::endl;

  const unsigned int npulse = _bxs.rows();

  const int maxiter = 50;
  int iter = 0;
  bool status = false;
  while (true) {

    if (iter>=maxiter) {
      std::cout << "CubicPulseChiSqSNNLS::Minimize ===> " << "Max Iterations reached at iter " << iter <<  std::endl;
      std::cout << " maxiter =  " << iter << " :: " << maxiter << std::endl;
      break;
    }

    status = updateCov(samplecov,fullpulsecov);
    if (!status) break;
    if (npulse > 1) {
      status = NNLS();
    } else {
      //special case for one pulse fit (performance optimized)
      status = OnePulseMinimize();
    }
    // std::cout << "Before adjusting time, time = " << _time << std::endl;
    AdjustSignalPulseShape(); // Adjusting!!
    if (!status) break;

    // std::cout << "Minimize 2 pulsemat = " << _pulsemat << std::endl;
  
    double chisqnow = ComputeChiSq();
    double deltachisq = chisqnow-_chisq;

    // std::cout << "Iter = " << iter << "  chisq now = " << chisqnow <<  "   deltachisq = " << std::abs(deltachisq) << std::endl;
    // std::cout << "N active pulses = " << _nP << std::endl;
    _chisq = chisqnow;
    if (std::abs(deltachisq)<1e-3) {
      break;
    }

    ++iter;
  }
  // std::cout << "End Minimize pulsemat = " << _pulsemat << std::endl;

  return status;

}


template <class P>
bool CubicPulseChiSqSNNLS<P>::updateCov(const SampleMatrix &samplecov, const FullSampleMatrix &fullpulsecov) {

  // std::cout << " updateCov " << std::endl;

  const unsigned int nsample = SampleVector::RowsAtCompileTime;
  const unsigned int npulse = _bxs.rows();

  // std::cout << " nsample " << nsample << std::endl;
  // std::cout << "_bxs = " << std::endl << _bxs << "   npulse = " << npulse << std::endl;

  _invcov.template triangularView<Eigen::Lower>() = samplecov;

  // std::cout << " samplecov :(  = " << std::endl << samplecov << std::endl;
  // std::cout << " invcov (only noise) = " << std::endl << _invcov << std::endl;

  for (unsigned int ipulse=0; ipulse<npulse; ++ipulse) {
    if (_ampvec.coeff(ipulse)==0.) continue;
    int bx = _bxs.coeff(ipulse);
    if (std::abs(bx- _pedestalBxOffset) < 10)
      continue;  //no contribution to covariance from pedestal or saturation/slew step correction
    if (bx == _derivativeBxOffset)
      continue;  //no contribution to covariance from pedestal or saturation/slew step correction
    if (std::abs(bx - _stepCorrBxOffset) < 20)
      continue;

    // std::cout << "in update cov, bx number: " << bx << std::endl;
    // std::cout << " P::maxShift = " << P::maxShift << "   P::nPreSamples = " << P::nPreSamples
    //           << "   bx*int(25./P::Samp_Period) = " << bx*int(25./P::Samp_Period) 
    //           << "   offset = " << P::maxShift - P::nPreSamples - bx*int(25./P::Samp_Period) << std::endl;

    int firstsamplet = std::max(0,int(bx * int(25./P::Samp_Period) + P::nPreSamples));
    int offset = P::maxShift - P::nPreSamples - bx*int(25./P::Samp_Period);

    double ampsq = _ampvec.coeff(ipulse)*_ampvec.coeff(ipulse);
    // std::cout << "     >>> ipulse = " << ipulse << "    ampsq = " << ampsq << std::endl;
    const unsigned int nsamplepulse = nsample-firstsamplet;

    if (_bxs.coeff(ipulse) == 0) {
   // Create a dynamic matrix with the right size
    Eigen::MatrixXd block_allocated(nsamplepulse, nsamplepulse);
    block_allocated.setZero();

    // Fill the diagonal with the squared entries
    // Make sure sizes match: only take as many entries as nsamplepulse
    block_allocated.diagonal().head(nsamplepulse) =
      _signalTemplateError.head(nsamplepulse).cwiseProduct(_signalTemplateError.head(nsamplepulse));
    
    // Add to the lower-triangular part
    _invcov.template block(firstsamplet, firstsamplet, nsamplepulse, nsamplepulse).template triangularView<Eigen::Lower>() += ampsq * block_allocated;

    } else {
        auto block_allocated = fullpulsecov.block(firstsamplet+offset,firstsamplet+offset,nsamplepulse,nsamplepulse);
        // std::cout << "firstsamplet  = " << firstsamplet << "   nsamplepulse = " << nsamplepulse << std::endl;
        // std::cout << "block_allocated: " << block_allocated << std::endl;
        _invcov.template block(firstsamplet,firstsamplet,nsamplepulse,nsamplepulse).template triangularView<Eigen::Lower>() += ampsq*block_allocated;
    }

    // Symmetrize just in case
    //Eigen::MatrixXd block_sym = block_allocated.template triangularView<Eigen::Lower>();
    //block_sym = block_sym + block_sym.transpose().triangularView<Eigen::StrictlyUpper>();

  }

  // std::cout << " updateCov " << " here "  << std::endl;
  // std::cout << " invcov after adding pulse covariance= " << std::endl << _invcov << std::endl;


  _invcov.template triangularView<Eigen::Upper>() = _invcov.template transpose().template triangularView<Eigen::Upper>();

   // Quick PD check via LLT
   Eigen::LLT<SampleMatrix> llt(_invcov);
   if (llt.info() == Eigen::NumericalIssue) {
      std::cout << "WARNING: _invcov not PD" << std::endl;
   }

   _covdecomp.compute(_invcov);
   // std::cout << " updateCov " << " done "  << std::endl;
  
  bool status = true;
  return status;
  
}



template <class P>
double CubicPulseChiSqSNNLS<P>::ComputeChiSq() {

  // std::cout << "pulsemat = " << _pulsemat << std::endl;
  // std::cout << "ampvec = " << _ampvec << std::endl;
  
  SampleVector model = _pulsemat*_ampvec;

    // std::cout << "model pre-time: " << model << std::endl;
    // add timing shifts
    //for (unsigned int ipulse=0; ipulse<_bxs.rows(); ++ipulse) {
    //    if (_timeActive(ipulse)) {
    //        //std::cout << "ipulse (time Active here): " << ipulse << ", _time(ipulse): " << _time(ipulse) << ", _pulsemat_t.col(ipulse): " << _pulsemat_t.col(ipulse) << ", _ampvec(ipulse): " << _ampvec(ipulse) << std::endl;
    //        model -= _time(ipulse) * _pulsemat_t.col(ipulse) * _ampvec(ipulse);
    //    }
    //}
    // std::cout << "model: " << std::endl << model << std::endl;
    // std::cout << "sampVec: " << std::endl << _sampvec << std::endl;
    // std::cout << "_invcov at chi2 / residuals step: " << std::endl << _invcov << std::endl;

    //debug
    // SampleMatrix L_debug = _covdecomp.matrixL();
    // std::cout << "_covdecomp.matrixL at chi2 / residuals step: " << std::endl << L_debug << std::endl;
    //end debug

    SampleVector normResVec = SampleVector::Zero();
    normResVec = _covdecomp.matrixL().solve(model - _sampvec);
    // std::cout << "normResVec: " << std::endl << normResVec << std::endl;

    return normResVec.squaredNorm();
}


template <class P>
double CubicPulseChiSqSNNLS<P>::ComputeApproxUncertainty(unsigned int ipulse) {
  //compute approximate uncertainties
  //(using 1/second derivative since full Hessian is not meaningful in
  //presence of positive amplitude boundaries.)
  
  return 1./_covdecomp.matrixL().solve(_pulsemat.col(ipulse)).norm();
  
}

template <class P>
bool CubicPulseChiSqSNNLS<P>::NNLS() {

  //  std::cout << "NNLS start pulsemat = " << _pulsemat << std::endl;

  //Fast NNLS (fnnls) algorithm as per http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.157.9203&rep=rep1&type=pdf

  const unsigned int npulse = _bxs.rows();

  SamplePulseMatrix invcovp = _covdecomp.template matrixL().solve(_pulsemat);
  aTamat.template triangularView<Eigen::Lower>() = invcovp.template transpose()*invcovp;
  aTamat = aTamat.template selfadjointView<Eigen::Lower>();
  aTbvec = invcovp.template transpose()*_covdecomp.matrixL().solve(_sampvec);  

  PulseVector wvec(npulse);
  
  
  int iter = 0;
  while (true) {    
    //can only perform this step if solution is guaranteed viable
    if (iter>0 || _nP==0) {
      if ( _nP==npulse ) break;                  
      
      const unsigned int nActive = npulse - _nP;
      
      wvec.tail(nActive) = aTbvec.tail(nActive) - (aTamat.template selfadjointView<Eigen::Lower>()*_ampvec).tail(nActive);       
      
      Index idxwmax;
      double wmax = wvec.tail(nActive).maxCoeff(&idxwmax);
      
      //convergence
      if (wmax<1e-11) break;

      //worst case protection
      if (iter >= 500) {
      	std::cout << "CubicPulseChiSqSNNLS::NNLS()" << "\tMax Iterations reached at iter " << iter << std::endl;
        break;
      }
      
      //unconstrain parameter
      Index idxp = _nP + idxwmax;
      NNLSUnconstrainParameter(idxp);
      std::cout << "\t===> NNLS iter " << iter << " pulsemat = " << _pulsemat << std::endl;

      // std::cout << "adding index " << int(idxp) << " orig index " << int(_bxs.coeff(idxp)) << std::endl;
    }
    
    
    while (true) {
      // std::cout << "iter in, _nP = " << _nP << std::endl;      
      // std::cout << " >>  iter = " << iter << std::endl;
      
      if (_nP==0) break;     
      
      ampvecpermtest = _ampvec;
      
      //solve for unconstrained parameters      
      //ampvecpermtest.head(_nP) = aTamat.topLeftCorner(_nP,_nP).ldlt().solve(aTbvec.head(_nP));     

      //need to have specialized function to call optimized versions
      // of matrix solver... this is truly amazing...
      using Base = EigenMatrixTypes<P>;
      eigen_solve_submatrix<Base>(aTamat, aTbvec, ampvecpermtest, _nP);

      //check solution
      bool positive = true;
      for (unsigned int i = 0; i < _nP; ++i){
        if ((int)i == GetDerivativePulseIndex()) continue;
        positive &= (ampvecpermtest(i) > 0);
      }
      if (positive) {
        _ampvec.head(_nP) = ampvecpermtest.head(_nP);
        break;
      }
      
      //update parameter vector
      Index minratioidx=0;
      
      double minratio = std::numeric_limits<double>::max();
      for (unsigned int ipulse=0; ipulse<_nP; ++ipulse) {
        if ((int)ipulse == GetDerivativePulseIndex()) continue;
        if (ampvecpermtest.coeff(ipulse)<=0.) {
      	  const double c_ampvec = _ampvec.coeff(ipulse);
          const double ratio = c_ampvec/(c_ampvec - ampvecpermtest.coeff(ipulse));
          if (ratio<minratio) {
            minratio = ratio;
            minratioidx = ipulse;
          }
        }
      }
      
      _ampvec.head(_nP) += minratio*(ampvecpermtest.head(_nP) - _ampvec.head(_nP));
      
      //avoid numerical problems with later ==0. check
      _ampvec.coeffRef(minratioidx) = 0.;
      
      // std::cout << "removing index " << int(minratioidx) << " orig idx " << int(_bxs.coeff(minratioidx)) << std::endl;
      NNLSConstrainParameter(minratioidx);      
    }
    ++iter;
        
    if (iter > 1000) break;
    
  }
  
  // std::cout << "     -> _ampvec = " << std::endl << _ampvec << std::endl;
  
  if ( _ampvec.coeff(GetSignalPulseIndex())>0 ) 
      _time[GetSignalPulseIndex()] += - _ampvec.coeff(GetDerivativePulseIndex()) / _ampvec.coeff(GetSignalPulseIndex()) / 2.;

  return true;

}


template <class P>
void CubicPulseChiSqSNNLS<P>::NNLSUnconstrainParameter(Index idxp) {
  aTamat.col(_nP).swap(aTamat.col(idxp));
  aTamat.row(_nP).swap(aTamat.row(idxp));
  _pulsemat.col(_nP).swap(_pulsemat.col(idxp));
  std::swap(aTbvec.coeffRef(_nP), aTbvec.coeffRef(idxp));
  std::swap(_ampvec.coeffRef(_nP), _ampvec.coeffRef(idxp));
  std::swap(_bxs.coeffRef(_nP), _bxs.coeffRef(idxp));
  ++_nP;
}

template <class P>
void CubicPulseChiSqSNNLS<P>::NNLSConstrainParameter(Index minratioidx) {
  aTamat.col(_nP - 1).swap(aTamat.col(minratioidx));
  aTamat.row(_nP - 1).swap(aTamat.row(minratioidx));
  _pulsemat.col(_nP - 1).swap(_pulsemat.col(minratioidx));
  std::swap(aTbvec.coeffRef(_nP - 1), aTbvec.coeffRef(minratioidx));
  std::swap(_ampvec.coeffRef(_nP - 1), _ampvec.coeffRef(minratioidx));
  std::swap(_bxs.coeffRef(_nP - 1), _bxs.coeffRef(minratioidx));
  --_nP;
}


template <class P>
bool CubicPulseChiSqSNNLS<P>::OnePulseMinimize() {
  //Fast NNLS (fnnls) algorithm as per http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.157.9203&rep=rep1&type=pdf

  //   const unsigned int npulse = 1;

  invcovp = _covdecomp.matrixL().solve(_pulsemat);
  //   aTamat = invcovp.transpose()*invcovp;
  //   aTbvec = invcovp.transpose()*_covdecomp.matrixL().solve(_sampvec);

  SingleMatrix aTamatval = invcovp.transpose() * invcovp;
  SingleVector aTbvecval = invcovp.transpose() * _covdecomp.matrixL().solve(_sampvec);
  _ampvec.coeffRef(0) = std::max(0., aTbvecval.coeff(0) / aTamatval.coeff(0));

  return true;
}


template class CubicPulseChiSqSNNLS<ecalPh1>;
template class CubicPulseChiSqSNNLS<ecalPh2>;
