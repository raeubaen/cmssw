#include "DataFormats/Common/interface/Handle.h"
#include "DataFormats/EcalDigi/interface/EcalDigiCollections.h"
#include "DataFormats/EcalRecHit/interface/EcalRecHitCollections.h"
#include "FWCore/Framework/interface/ConsumesCollector.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/stream/EDProducer.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/ParameterSet/interface/ConfigurationDescriptions.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/ParameterSetDescription.h"
#include "FWCore/PluginManager/interface/PluginInfo.h"
#include "FWCore/PluginManager/interface/PluginManager.h"
#include "FWCore/PluginManager/interface/standard.h"
#include "FWCore/Utilities/interface/Algorithms.h"
#include "FWCore/Utilities/interface/Exception.h"
#include "RecoLocalCalo/EcalRecProducers/interface/EcalUncalibRecHitFillDescriptionWorkerFactory.h"
#include "RecoLocalCalo/EcalRecProducers/interface/EcalUncalibRecHitWorkerBaseClass.h"
#include "RecoLocalCalo/EcalRecProducers/interface/EcalUncalibRecHitWorkerFactory.h"

class EcalUncalibRecHitProducer : public edm::stream::EDProducer<> {
public:
  explicit EcalUncalibRecHitProducer(const edm::ParameterSet& ps);
  void produce(edm::Event& evt, const edm::EventSetup& es) override;
  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);

private:
  edm::EDGetTokenT<EBDigiCollection> ebDigiCollectionToken_;
  edm::EDGetTokenT<EEDigiCollection> eeDigiCollectionToken_;

  std::string ebHitCollection_;
  std::string eeHitCollection_;

  std::unique_ptr<EcalUncalibRecHitWorkerBaseClass> worker_;
};

EcalUncalibRecHitProducer::EcalUncalibRecHitProducer(const edm::ParameterSet& ps) {
  isPhase2_ = ps.getParameter<bool>("IsPhase2");
  ebHitCollection_ = ps.getParameter<std::string>("EBhitCollection");
  eeHitCollection_ = ps.getParameter<std::string>("EEhitCollection");
  produces<EBUncalibratedRecHitCollection>(ebHitCollection_);
  produces<EEUncalibratedRecHitCollection>(eeHitCollection_);

  if (isPhase2_) {
    ebPh2DigiCollectionToken_ = consumes<EBDigiCollectionPh2>(ps.getParameter<edm::InputTag>("EBdigiCollection"));
  } else {
    ebDigiCollectionToken_ = consumes<EBDigiCollection>(ps.getParameter<edm::InputTag>("EBdigiCollection"));
    eeDigiCollectionToken_ = consumes<EEDigiCollection>(ps.getParameter<edm::InputTag>("EEdigiCollection"));
  }

  std::string componentType = ps.getParameter<std::string>("algo");
  edm::ParameterSet algoConf = ps.getParameter<edm::ParameterSet>("algoPSet");

  edm::ConsumesCollector c{consumesCollector()};
  worker_ = EcalUncalibRecHitWorkerFactory::get()->create(componentType, algoConf, c);
}

void EcalUncalibRecHitProducer::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  EcalUncalibRecHitFillDescriptionWorkerFactory* factory = EcalUncalibRecHitFillDescriptionWorkerFactory::get();
  std::vector<edmplugin::PluginInfo> infos = factory->available();

  {
    edm::ParameterSetDescription desc;
    desc.add<bool>("IsPhase2", false);
    desc.add<edm::InputTag>("EBdigiCollection", edm::InputTag("ecalDigis", "ebDigis"));
    desc.add<std::string>("EEhitCollection", "EcalUncalibRecHitsEE");
    desc.add<edm::InputTag>("EEdigiCollection", edm::InputTag("ecalDigis", "eeDigis"));
    desc.add<std::string>("EBhitCollection", "EcalUncalibRecHitsEB");

    auto itInfos = infos.begin();
    assert(itInfos != infos.end());

    std::unique_ptr<edm::ParameterDescriptionCases<std::string>> s;
    {
      std::unique_ptr<EcalUncalibRecHitWorkerBaseClass> tmw(
          EcalUncalibRecHitFillDescriptionWorkerFactory::get()->create(itInfos->name_));
      s = (itInfos->name_ >>
           edm::ParameterDescription<edm::ParameterSetDescription>("algoPSet", tmw->getAlgoDescription(), true));
    }
    for (++itInfos; itInfos != infos.end(); ++itInfos) {
      std::unique_ptr<EcalUncalibRecHitWorkerBaseClass> tmw(
          EcalUncalibRecHitFillDescriptionWorkerFactory::get()->create(itInfos->name_));
      s = (std::move(s) or itInfos->name_ >> edm::ParameterDescription<edm::ParameterSetDescription>(
                                                 "algoPSet", tmw->getAlgoDescription(), true));
    }
    desc.ifValue(edm::ParameterDescription<std::string>("algo", "EcalUncalibRecHitWorkerMultiFit", true), std::move(s));

    descriptions.addDefault(desc);
  }

  for (std::vector<edmplugin::PluginInfo>::const_iterator itInfos = infos.begin(); itInfos != infos.end(); itInfos++) {
    std::unique_ptr<EcalUncalibRecHitWorkerBaseClass> fdWorker(
        EcalUncalibRecHitFillDescriptionWorkerFactory::get()->create(itInfos->name_));

    edm::DescriptionCloner desc;
    desc.set<std::string>("algo", itInfos->name_);
    desc.set("algoPSet", fdWorker->getAlgoDescription());

    std::string algoName = itInfos->name_.substr(itInfos->name_.find("Worker") + 6, itInfos->name_.length());
    descriptions.add("ecal" + algoName + "UncalibRecHitProducer", desc);
  }
}

void EcalUncalibRecHitProducer::produce(edm::Event& evt, const edm::EventSetup& es) {
  using namespace edm;

  const EBDigiCollection* ebDigis = nullptr;
  const EEDigiCollection* eeDigis = nullptr;

  if (isPhase2_) {  // Using Phase2 classes
    Handle<EBDigiCollectionPh2> pEBDigis;

    evt.getByToken(ebPh2DigiCollectionToken_, pEBDigis);
    ebDigis = (EBDigiCollection*) pEBDigis.product();  // get a ptr to the product
  } else {  // Using Phase1 classes
    Handle<EBDigiCollection> pEBDigis;
    Handle<EEDigiCollection> pEEDigis;

    evt.getByToken(ebDigiCollectionToken_, pEBDigis);
    ebDigis = pEBDigis.product();  // get a ptr to the product

    evt.getByToken(eeDigiCollectionToken_, pEEDigis);
    eeDigis = pEEDigis.product();  // get a ptr to the product
  }

  // transparently get things from event setup
  worker_->set(es);
  worker_->set(evt);

  // prepare output
  auto ebUncalibRechits = std::make_unique<EBUncalibratedRecHitCollection>();
  auto eeUncalibRechits = std::make_unique<EEUncalibratedRecHitCollection>();

  // loop over EB digis
  if (ebDigis) {
    edm::LogInfo("EcalUncalibRecHitInfo") << "total # ebDigis: " << ebDigis->size();
    worker_->run(evt, *ebDigis, *ebUncalibRechits);
  }

  // loop over EB digis
  if (eeDigis) {
    edm::LogInfo("EcalUncalibRecHitInfo") << "total # eeDigis: " << eeDigis->size();
    worker_->run(evt, *eeDigis, *eeUncalibRechits);
  }

  // put the collection of recunstructed hits in the event
  evt.put(std::move(ebUncalibRechits), ebHitCollection_);
  evt.put(std::move(eeUncalibRechits), eeHitCollection_);
}

#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_FWK_MODULE(EcalUncalibRecHitProducer);
