#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/Ecal/interface/EcalCubicPulseSymmCovariancesHandler.h"

#include "FWCore/Framework/interface/MakerMacros.h"

typedef popcon::PopConAnalyzer<popcon::EcalCubicPulseSymmCovariancesHandler<EcalPh1PulseSymmCovariances>> ExTestEcalPh1PulseSymmCovariancesAnalyzer;


//define this as a plug-in
DEFINE_FWK_MODULE(ExTestEcalPh1PulseSymmCovariancesAnalyzer);
