#ifndef PiecewiseCubic_SPLINE_H
#define PiecewiseCubic_SPLINE_H

#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

struct CubicSegment {
    std::vector<float> values;
    double xc; // center of interval
};

class PiecewiseCubicSpline {
public:

    std::vector<CubicSegment> _segs;
    int _n_samples, _n_parameters;

    const std::vector<CubicSegment> GetSegments(){
        return _segs;
    }

    void SetSegments(const std::vector<CubicSegment>& s){
        _segs = s;
    }

    void SetParameter(const int n_segment, const int n_parameter, const float value){
         _segs[n_segment].values[n_parameter] = value;
    }

    void SetSampleParameters(const int n_parameters, const int n_sample, const float *splinepars){
        _segs[n_sample].values.assign(splinepars, splinepars + (size_t)(sizeof(float)*n_parameters));
    }

    PiecewiseCubicSpline() = default;

    PiecewiseCubicSpline(const char* f);

    PiecewiseCubicSpline(const int n_samples, const int n_parameters, const double sampling_period);

    double Eval(int iSample, double x) const;

    size_t Size() const { return _segs.size(); }

};

#endif
