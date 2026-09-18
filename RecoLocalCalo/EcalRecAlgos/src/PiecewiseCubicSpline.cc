#include <RecoLocalCalo/EcalRecAlgos/interface/PiecewiseCubicSpline.h>

PiecewiseCubicSpline::PiecewiseCubicSpline(const char* file="coeffs_global.txt") {

    std::ifstream in(file);
    if(!in.is_open()){
        std::cerr << "Cannot open file: " << file << std::endl;
        return;
    }

    std::string line;
    std::getline(in, line); // skip header

    while(std::getline(in, line)){
        if(line.empty() || line[0]=='#') continue;

        std::istringstream ss(line);

        CubicSegment s;
        ss >> s.xc >> s.values[0] >> s.values[1] >> s.values[2] >> s.values[3];

        if(ss.fail()) continue;

        _segs.push_back(s);
    }

    in.close();

};


PiecewiseCubicSpline::PiecewiseCubicSpline(const int n_samples, const int n_parameters, const double sampling_period)
{
 	_n_samples = n_samples;
    _n_parameters = n_parameters;

    for (int iSample=0; iSample<n_samples; iSample++) {
        CubicSegment s;
        s.xc = iSample * sampling_period;
        for (int iPar=0; iPar < n_parameters; iPar++) {
          s.values.push_back(0.);
        }
        _segs.push_back(s);
    }
}

double PiecewiseCubicSpline::Eval(int iSample, double x) const
{
  double dx = x - _segs[iSample].xc;
  //std::cout << " ======== PiecewiseCubicSpline iSample " << iSample << " x = " << x << "    _segs[iSample].xc = " << _segs[iSample].xc << "  dx  = " << dx  << std::endl;
  double sum = 0;
  for (int iPar=0; iPar<_n_parameters; iPar++){
    double power = 1;
    for (int jExp=0; jExp<iPar; jExp++) power *= dx; // to avoid pow(...)
    sum += _segs[iSample].values[iPar]*power;
    //std::cout << "########## PiecewiseCubicSpline for iSample " << iSample << " iPar = " << iPar << "   seg = " 
     //          << _segs[iSample].values[iPar] << "  sum = " << sum << std::endl;
  }
  return sum;
  if (sum < 0) return 0;
}
