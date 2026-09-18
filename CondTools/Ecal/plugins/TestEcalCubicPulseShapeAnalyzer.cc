#include "CondCore/PopCon/interface/PopConAnalyzer.h"
#include "CondTools/Ecal/interface/EcalCubicPulseShapesHandler.h"
#include "FWCore/Framework/interface/MakerMacros.h"

using EcalPh1CubicPulseShapesHandler = popcon::EcalCubicPulseShapesHandler<EcalPh1CubicPulseShapes>;
typedef popcon::PopConAnalyzer<EcalPh1CubicPulseShapesHandler> ExTestEcalPh1CubicPulseShapesAnalyzer;

using EcalPh2CubicPulseShapesHandler = popcon::EcalCubicPulseShapesHandler<EcalPh2CubicPulseShapes>;
typedef popcon::PopConAnalyzer<EcalPh2CubicPulseShapesHandler> ExTestEcalPh2CubicPulseShapesAnalyzer;

//define this as a plug-in
DEFINE_FWK_MODULE(ExTestEcalPh1CubicPulseShapesAnalyzer);
DEFINE_FWK_MODULE(ExTestEcalPh2CubicPulseShapesAnalyzer);
