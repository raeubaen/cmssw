#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/Ecal/interface/EcalCubicPulseSymmCovariancesHandler.h"
#include "FWCore/Framework/interface/MakerMacros.h"

typedef popcon::PopConAnalyzer<popcon::EcalCubicPulseSymmCovariancesHandler<EcalPh2PulseSymmCovariance>> ExTestEcalPh2PulseSymmCovariancesAnalyzer;

//define this as a plug-in
DEFINE_FWK_MODULE(ExTestEcalPh2PulseSymmCovariancesAnalyzer);
