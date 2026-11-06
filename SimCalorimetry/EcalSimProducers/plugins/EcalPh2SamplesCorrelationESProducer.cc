#include <memory>
#include <string>
#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/Framework/interface/ESProductHost.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "CondFormats/DataRecord/interface/EcalPh2SamplesCorrelationRcd.h"
#include "CondFormats/EcalObjects/interface/EcalPh2SamplesCorrelation.h"
#include "DataFormats/EcalDigi/interface/EcalConstants.h"

//
// class declaration
//

class EcalPh2SamplesCorrelationESProducer : public edm::ESProducer {
public:
  EcalPh2SamplesCorrelationESProducer(const edm::ParameterSet& p);

  typedef std::unique_ptr<EcalPh2SamplesCorrelation> ReturnType;

  ReturnType produce(const EcalPh2SamplesCorrelationRcd& iRecord);

private:
  std::vector<double> g10SamplesCorrelation_, g1SamplesCorrelation_;
};

using namespace edm;

EcalPh2SamplesCorrelationESProducer::EcalPh2SamplesCorrelationESProducer(const edm::ParameterSet& p) {
  std::string myname = p.getParameter<std::string>("ComponentName");
  g10SamplesCorrelation_ = p.getParameter<std::vector<double>>("SamplesCorrelationGain10");
  g1SamplesCorrelation_ = p.getParameter<std::vector<double>>("SamplesCorrelationGain1");
  setWhatProduced(this);
}

EcalPh2SamplesCorrelationESProducer::ReturnType EcalPh2SamplesCorrelationESProducer::produce(
    const EcalPh2SamplesCorrelationRcd& iRecord) {
  auto prod = std::make_unique<EcalPh2SamplesCorrelation>();

  for (unsigned int iChannel = 0; iChannel < ecalPh2::kEBChannels; iChannel++) {

    prod->g10SamplesCorrelation = g10SamplesCorrelation_;
    prod->g1SamplesCorrelation  = g1SamplesCorrelation_;

  }

  return prod;
}

//Define this as a plug-in
DEFINE_FWK_EVENTSETUP_MODULE(EcalPh2SamplesCorrelationESProducer);

