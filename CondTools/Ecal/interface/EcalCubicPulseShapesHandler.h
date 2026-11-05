#ifndef ECAL_CUBIC_PULSESHAPES_HANDLER_H
#define ECAL_CUBIC_PULSESHAPES_HANDLER_H

#include <vector>
#include <typeinfo>
#include <string>
#include <map>
#include <iostream>
#include <ctime>

#include "CondCore/PopCon/interface/PopConSourceHandler.h"
#include "FWCore/ParameterSet/interface/ParameterSetfwd.h"

#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CondCore/DBOutputService/interface/PoolDBOutputService.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/Common/interface/Handle.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/EventSetupRecordKey.h"

#include "CondFormats/EcalObjects/interface/EcalCubicPulseShapeT.h"
#include "CondFormats/DataRecord/interface/EcalPh1CubicPulseShapesRcd.h"
#include "CondFormats/DataRecord/interface/EcalPh2CubicPulseShapesRcd.h"

#include "DataFormats/EcalDetId/interface/EEDetId.h"
#include "DataFormats/EcalDetId/interface/EBDetId.h"
#include "DataFormats/Provenance/interface/Timestamp.h"

namespace edm {
  class ParameterSet;
  class Event;
  class EventSetup;
}  // namespace edm

namespace popcon {

  template <class P>
    class EcalCubicPulseShapesHandler : public popcon::PopConSourceHandler<P> {

  public:
  EcalCubicPulseShapesHandler(const edm::ParameterSet& ps)
    : m_name(ps.getUntrackedParameter<std::string>("name", "EcalCubicPulseShapesHandler")) {
      std::cout << "EcalCubicPulseShapeT Source handler constructor\n" << std::endl;
      m_firstRun = static_cast<unsigned int>(atoi(ps.getParameter<std::string>("firstRun").c_str()));
      m_filename = ps.getParameter<std::string>("inputFileName");
      m_EBPulseShapeTemplate = ps.getParameter<std::vector<double> >("EBCubicPulseShapeTemplate");
      m_EEPulseShapeTemplate = ps.getParameter<std::vector<double> >("EECubicPulseShapeTemplate");
    }

    ~EcalCubicPulseShapesHandler() {};

    bool checkPulseShape(P::Item* item) {
      // true means all is standard and OK
      bool result = true;
      for (int s = 0; s < item->TEMPLATESAMPLES; ++s) {
        // check on the template bin values: it's normalized to max-sample, so 0<=t<=1
        if (s % item->PARSPERSAMPLE == 0 && (item->parameters[s] > 1+3e-3 || item->parameters[s] < 0)) {
          std::cout << "Error template = " << item->parameters[s] << std::endl;
          result = false;
        }
        // check the first derivative
        if (s % item->PARSPERSAMPLE == 1 && (fabs(item->parameters[s]) > 1e-1)) {
          std::cout << "Error 1st deriv = " << item->parameters[s] << std::endl;
          result = false;
        }
        // check the second derivative
        if (s % item->PARSPERSAMPLE == 2 && (fabs(item->parameters[s]) > 2e-3)) {
          std::cout << "Error 2nd deriv = " << item->parameters[s] << std::endl;
          result = false;
        }
        // check the third derivative
        if (s % item->PARSPERSAMPLE == 3 && (fabs(item->parameters[s]) > 1e-5)) {
          std::cout << "Error 3rd deriv = " << item->parameters[s] << std::endl;
          result = false;
        }
      }
      return result;
    }

    void fillSimPulseShape(P::Item* item, bool isbarrel) {
      for (int s = 0; s < item->TEMPLATESAMPLES; ++s) {
        for (int c=0; c < item->PARSPERSAMPLE; ++c) {
          item->parameters[s*(item->PARSPERSAMPLE) + c] = isbarrel ? m_EBPulseShapeTemplate[s*(item->PARSPERSAMPLE) + c] : m_EEPulseShapeTemplate[s*(item->PARSPERSAMPLE) + c];
        }
      }
    }

    void getNewObjects() {
      std::cout << "------- Ecal - > getNewObjects\n";

      // create the object pukse shapes
      P* pulseshapes = new P();

      // read the templates from a text file
      std::ifstream inputfile;
      inputfile.open(m_filename.c_str());
      typename P::Item item;
      float templatecoeffvals[(item.TEMPLATESAMPLES)*(item.PARSPERSAMPLE)];
      unsigned int rawId;
      std::string line;

      // keep track of bad crystals
      int nEBbad(0), nEEbad(0);
      std::vector<EBDetId> ebgood;
      std::vector<EEDetId> eegood;

      // fill with the measured shapes only for data
      if (m_firstRun > 1) {
        while (std::getline(inputfile, line)) {
          std::istringstream linereader(line);
          linereader >> rawId;
          // std::cout << "Inserting template for crystal with rawId = " << rawId << std::endl;
          for (int s = 0; s < item.TEMPLATESAMPLES; ++s) {
            for (int c=0; c < item.PARSPERSAMPLE; ++c) {
              linereader >> templatecoeffvals[s*(item.PARSPERSAMPLE) + c];
            }
            // std::cout << templatecoeffvals[s*(item.PARSPERSAMPLE) + c] << "\t";
          }
          // std::cout << std::endl;

          if (!linereader) {
            std::cout << "Wrong format of the text file. Exit." << std::endl;
            return;
          }
          for (int s = 0; s < item.TEMPLATESAMPLES; ++s) {
            for (int c=0; c < item.PARSPERSAMPLE; ++c) {
              item.parameters[s*(item.PARSPERSAMPLE) + c] = templatecoeffvals[s*(item.PARSPERSAMPLE) + c];
            }
          }
          
          DetId id(rawId);
          if (id.subdetId()==EcalBarrel) {
            EBDetId ebdetid(rawId);
            if (!checkPulseShape(&item))
              nEBbad++;
            else {
              ebgood.push_back(ebdetid);
              pulseshapes->insert(std::make_pair(ebdetid.rawId(), item));
            }
          } else if (id.subdetId()==EcalEndcap) {
            EEDetId eedetid(rawId);
            if (!checkPulseShape(&item))
              nEEbad++;
            else {
              eegood.push_back(eedetid);
              pulseshapes->insert(std::make_pair(eedetid.rawId(), item));
            }
          }
          else {
            std::cout << "ERROR: Encountered rawId = " << rawId << " which is neither EcalBarrel nor EcalEndcap. Skipped from insertion." << std::endl;
          }
        }
      }

      // now fill the bad crystals and simulation with the simulation values (from TB)
      std::cout << "Filled the DB with the good measured ECAL templates. Now filling the others with the TB values"
                << std::endl;
      for (int iEta = -EBDetId::MAX_IETA; iEta <= EBDetId::MAX_IETA; ++iEta) {
        if (iEta == 0)
          continue;
        for (int iPhi = EBDetId::MIN_IPHI; iPhi <= EBDetId::MAX_IPHI; ++iPhi) {
          if (EBDetId::validDetId(iEta, iPhi)) {
            EBDetId ebdetid(iEta, iPhi, EBDetId::ETAPHIMODE);

            std::vector<EBDetId>::iterator it = find(ebgood.begin(), ebgood.end(), ebdetid);
            if (it == ebgood.end()) {
              fillSimPulseShape(&item, true);
              pulseshapes->insert(std::make_pair(ebdetid.rawId(), item));
            }
          }
        }
      }

      for (int iZ = -1; iZ < 2; iZ += 2) {
        for (int iX = EEDetId::IX_MIN; iX <= EEDetId::IX_MAX; ++iX) {
          for (int iY = EEDetId::IY_MIN; iY <= EEDetId::IY_MAX; ++iY) {
            if (EEDetId::validDetId(iX, iY, iZ)) {
              EEDetId eedetid(iX, iY, iZ);

              std::vector<EEDetId>::iterator it = find(eegood.begin(), eegood.end(), eedetid);
              if (it == eegood.end()) {
                fillSimPulseShape(&item, false);
                pulseshapes->insert(std::make_pair(eedetid.rawId(), item));
              }
            }
          }
        }
      }

      std::cout << "Inserted the pulse shapes into the new item object" << std::endl;

      unsigned int irun = m_firstRun;
      cond::Time_t snc = (cond::Time_t)irun;

      this->m_to_transfer.push_back(std::make_pair(pulseshapes, snc));

      std::cout << "Ecal - > end of getNewObjects -----------" << std::endl;
      std::cout << "N. bad shapes for EB = " << nEBbad << std::endl;
      std::cout << "N. bad shapes for EE = " << nEEbad << std::endl;
      std::cout << "Written the object" << std::endl;
    }

    std::string id() const override { return m_name; }

  private:
    const P* mypulseshapes;

    unsigned int m_firstRun;
    unsigned int m_lastRun;

    std::string m_gentag;
    std::string m_filename;
    std::string m_name;
    std::vector<double> m_EBPulseShapeTemplate, m_EEPulseShapeTemplate;
  };
}  // namespace popcon
#endif
