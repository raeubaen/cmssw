#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/Ecal/interface/EcalPulseSymmCovariancesHandler.h"
#include "FWCore/Framework/interface/MakerMacros.h"

typedef popcon::PopConAnalyzer<popcon::EcalPulseSymmCovariancesHandler> ExTestEcalPh1PulseSymmCovariancesAnalyzer;

//define this as a plug-in
DEFINE_FWK_MODULE(ExTestEcalPh1PulseSymmCovariancesAnalyzer);
