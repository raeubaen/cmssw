// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIGBRLikelihooddIsrcdIRooHybridBDTAutoPdfDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "GBRLikelihood/RooHybridBDTAutoPdf.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RooTreeConvert(void *p = nullptr);
   static void *newArray_RooTreeConvert(Long_t size, void *p);
   static void delete_RooTreeConvert(void *p);
   static void deleteArray_RooTreeConvert(void *p);
   static void destruct_RooTreeConvert(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTreeConvert*)
   {
      ::RooTreeConvert *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTreeConvert >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTreeConvert", ::RooTreeConvert::Class_Version(), "GBRLikelihood/RooHybridBDTAutoPdf.h", 36,
                  typeid(::RooTreeConvert), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTreeConvert::Dictionary, isa_proxy, 4,
                  sizeof(::RooTreeConvert) );
      instance.SetNew(&new_RooTreeConvert);
      instance.SetNewArray(&newArray_RooTreeConvert);
      instance.SetDelete(&delete_RooTreeConvert);
      instance.SetDeleteArray(&deleteArray_RooTreeConvert);
      instance.SetDestructor(&destruct_RooTreeConvert);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTreeConvert*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTreeConvert*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTreeConvert*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNormPdf(void *p = nullptr);
   static void *newArray_RooNormPdf(Long_t size, void *p);
   static void delete_RooNormPdf(void *p);
   static void deleteArray_RooNormPdf(void *p);
   static void destruct_RooNormPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNormPdf*)
   {
      ::RooNormPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNormPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNormPdf", ::RooNormPdf::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 51,
                  typeid(::RooNormPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNormPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooNormPdf) );
      instance.SetNew(&new_RooNormPdf);
      instance.SetNewArray(&newArray_RooNormPdf);
      instance.SetDelete(&delete_RooNormPdf);
      instance.SetDeleteArray(&deleteArray_RooNormPdf);
      instance.SetDestructor(&destruct_RooNormPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNormPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNormPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNormPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealConstraint(void *p = nullptr);
   static void *newArray_RooRealConstraint(Long_t size, void *p);
   static void delete_RooRealConstraint(void *p);
   static void deleteArray_RooRealConstraint(void *p);
   static void destruct_RooRealConstraint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealConstraint*)
   {
      ::RooRealConstraint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealConstraint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealConstraint", ::RooRealConstraint::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 74,
                  typeid(::RooRealConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealConstraint::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealConstraint) );
      instance.SetNew(&new_RooRealConstraint);
      instance.SetNewArray(&newArray_RooRealConstraint);
      instance.SetDelete(&delete_RooRealConstraint);
      instance.SetDeleteArray(&deleteArray_RooRealConstraint);
      instance.SetDestructor(&destruct_RooRealConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealConstraint*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealConstraint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealConstraint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPowerLaw(void *p = nullptr);
   static void *newArray_RooPowerLaw(Long_t size, void *p);
   static void delete_RooPowerLaw(void *p);
   static void deleteArray_RooPowerLaw(void *p);
   static void destruct_RooPowerLaw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPowerLaw*)
   {
      ::RooPowerLaw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPowerLaw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPowerLaw", ::RooPowerLaw::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 101,
                  typeid(::RooPowerLaw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPowerLaw::Dictionary, isa_proxy, 4,
                  sizeof(::RooPowerLaw) );
      instance.SetNew(&new_RooPowerLaw);
      instance.SetNewArray(&newArray_RooPowerLaw);
      instance.SetDelete(&delete_RooPowerLaw);
      instance.SetDeleteArray(&deleteArray_RooPowerLaw);
      instance.SetDestructor(&destruct_RooPowerLaw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPowerLaw*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPowerLaw*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPowerLaw*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCondAddPdf(void *p = nullptr);
   static void *newArray_RooCondAddPdf(Long_t size, void *p);
   static void delete_RooCondAddPdf(void *p);
   static void deleteArray_RooCondAddPdf(void *p);
   static void destruct_RooCondAddPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCondAddPdf*)
   {
      ::RooCondAddPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCondAddPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCondAddPdf", ::RooCondAddPdf::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 135,
                  typeid(::RooCondAddPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCondAddPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooCondAddPdf) );
      instance.SetNew(&new_RooCondAddPdf);
      instance.SetNewArray(&newArray_RooCondAddPdf);
      instance.SetDelete(&delete_RooCondAddPdf);
      instance.SetDeleteArray(&deleteArray_RooCondAddPdf);
      instance.SetDestructor(&destruct_RooCondAddPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCondAddPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCondAddPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCondAddPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCondRatioPdf(void *p = nullptr);
   static void *newArray_RooCondRatioPdf(Long_t size, void *p);
   static void delete_RooCondRatioPdf(void *p);
   static void deleteArray_RooCondRatioPdf(void *p);
   static void destruct_RooCondRatioPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCondRatioPdf*)
   {
      ::RooCondRatioPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCondRatioPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCondRatioPdf", ::RooCondRatioPdf::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 172,
                  typeid(::RooCondRatioPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCondRatioPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooCondRatioPdf) );
      instance.SetNew(&new_RooCondRatioPdf);
      instance.SetNewArray(&newArray_RooCondRatioPdf);
      instance.SetDelete(&delete_RooCondRatioPdf);
      instance.SetDeleteArray(&deleteArray_RooCondRatioPdf);
      instance.SetDestructor(&destruct_RooCondRatioPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCondRatioPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCondRatioPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCondRatioPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPdfAddReal(void *p = nullptr);
   static void *newArray_RooPdfAddReal(Long_t size, void *p);
   static void delete_RooPdfAddReal(void *p);
   static void deleteArray_RooPdfAddReal(void *p);
   static void destruct_RooPdfAddReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPdfAddReal*)
   {
      ::RooPdfAddReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPdfAddReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPdfAddReal", ::RooPdfAddReal::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 205,
                  typeid(::RooPdfAddReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPdfAddReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooPdfAddReal) );
      instance.SetNew(&new_RooPdfAddReal);
      instance.SetNewArray(&newArray_RooPdfAddReal);
      instance.SetDelete(&delete_RooPdfAddReal);
      instance.SetDeleteArray(&deleteArray_RooPdfAddReal);
      instance.SetDestructor(&destruct_RooPdfAddReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPdfAddReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPdfAddReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPdfAddReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGBRFunctionFlex(void *p = nullptr);
   static void *newArray_RooGBRFunctionFlex(Long_t size, void *p);
   static void delete_RooGBRFunctionFlex(void *p);
   static void deleteArray_RooGBRFunctionFlex(void *p);
   static void destruct_RooGBRFunctionFlex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGBRFunctionFlex*)
   {
      ::RooGBRFunctionFlex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGBRFunctionFlex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGBRFunctionFlex", ::RooGBRFunctionFlex::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 232,
                  typeid(::RooGBRFunctionFlex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGBRFunctionFlex::Dictionary, isa_proxy, 4,
                  sizeof(::RooGBRFunctionFlex) );
      instance.SetNew(&new_RooGBRFunctionFlex);
      instance.SetNewArray(&newArray_RooGBRFunctionFlex);
      instance.SetDelete(&delete_RooGBRFunctionFlex);
      instance.SetDeleteArray(&deleteArray_RooGBRFunctionFlex);
      instance.SetDestructor(&destruct_RooGBRFunctionFlex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGBRFunctionFlex*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGBRFunctionFlex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGBRFunctionFlex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGBRTargetFlex(void *p = nullptr);
   static void *newArray_RooGBRTargetFlex(Long_t size, void *p);
   static void delete_RooGBRTargetFlex(void *p);
   static void deleteArray_RooGBRTargetFlex(void *p);
   static void destruct_RooGBRTargetFlex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGBRTargetFlex*)
   {
      ::RooGBRTargetFlex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGBRTargetFlex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGBRTargetFlex", ::RooGBRTargetFlex::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 260,
                  typeid(::RooGBRTargetFlex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGBRTargetFlex::Dictionary, isa_proxy, 4,
                  sizeof(::RooGBRTargetFlex) );
      instance.SetNew(&new_RooGBRTargetFlex);
      instance.SetNewArray(&newArray_RooGBRTargetFlex);
      instance.SetDelete(&delete_RooGBRTargetFlex);
      instance.SetDeleteArray(&deleteArray_RooGBRTargetFlex);
      instance.SetDestructor(&destruct_RooGBRTargetFlex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGBRTargetFlex*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGBRTargetFlex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGBRTargetFlex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGBRFunction(void *p = nullptr);
   static void *newArray_RooGBRFunction(Long_t size, void *p);
   static void delete_RooGBRFunction(void *p);
   static void deleteArray_RooGBRFunction(void *p);
   static void destruct_RooGBRFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGBRFunction*)
   {
      ::RooGBRFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGBRFunction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGBRFunction", ::RooGBRFunction::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 300,
                  typeid(::RooGBRFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGBRFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooGBRFunction) );
      instance.SetNew(&new_RooGBRFunction);
      instance.SetNewArray(&newArray_RooGBRFunction);
      instance.SetDelete(&delete_RooGBRFunction);
      instance.SetDeleteArray(&deleteArray_RooGBRFunction);
      instance.SetDestructor(&destruct_RooGBRFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGBRFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGBRFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGBRFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGBRTarget(void *p = nullptr);
   static void *newArray_RooGBRTarget(Long_t size, void *p);
   static void delete_RooGBRTarget(void *p);
   static void deleteArray_RooGBRTarget(void *p);
   static void destruct_RooGBRTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGBRTarget*)
   {
      ::RooGBRTarget *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGBRTarget >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGBRTarget", ::RooGBRTarget::Class_Version(), "EgRegresTrainerLegacy-140X/GBRLikelihood/RooHybridBDTAutoPdf.h", 334,
                  typeid(::RooGBRTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGBRTarget::Dictionary, isa_proxy, 4,
                  sizeof(::RooGBRTarget) );
      instance.SetNew(&new_RooGBRTarget);
      instance.SetNewArray(&newArray_RooGBRTarget);
      instance.SetDelete(&delete_RooGBRTarget);
      instance.SetDeleteArray(&deleteArray_RooGBRTarget);
      instance.SetDestructor(&destruct_RooGBRTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGBRTarget*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGBRTarget*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGBRTarget*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RooTreeConvert::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTreeConvert::Class_Name()
{
   return "RooTreeConvert";
}

//______________________________________________________________________________
const char *RooTreeConvert::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeConvert*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTreeConvert::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeConvert*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTreeConvert::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeConvert*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTreeConvert::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeConvert*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNormPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNormPdf::Class_Name()
{
   return "RooNormPdf";
}

//______________________________________________________________________________
const char *RooNormPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNormPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNormPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNormPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNormPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNormPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNormPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNormPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealConstraint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealConstraint::Class_Name()
{
   return "RooRealConstraint";
}

//______________________________________________________________________________
const char *RooRealConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstraint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstraint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstraint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstraint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPowerLaw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPowerLaw::Class_Name()
{
   return "RooPowerLaw";
}

//______________________________________________________________________________
const char *RooPowerLaw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPowerLaw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPowerLaw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPowerLaw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPowerLaw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPowerLaw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPowerLaw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPowerLaw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCondAddPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCondAddPdf::Class_Name()
{
   return "RooCondAddPdf";
}

//______________________________________________________________________________
const char *RooCondAddPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCondAddPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCondAddPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCondAddPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCondAddPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCondAddPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCondAddPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCondAddPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCondRatioPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCondRatioPdf::Class_Name()
{
   return "RooCondRatioPdf";
}

//______________________________________________________________________________
const char *RooCondRatioPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCondRatioPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCondRatioPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCondRatioPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCondRatioPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCondRatioPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCondRatioPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCondRatioPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPdfAddReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPdfAddReal::Class_Name()
{
   return "RooPdfAddReal";
}

//______________________________________________________________________________
const char *RooPdfAddReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPdfAddReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPdfAddReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPdfAddReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPdfAddReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPdfAddReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPdfAddReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPdfAddReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGBRFunctionFlex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGBRFunctionFlex::Class_Name()
{
   return "RooGBRFunctionFlex";
}

//______________________________________________________________________________
const char *RooGBRFunctionFlex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunctionFlex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGBRFunctionFlex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunctionFlex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGBRFunctionFlex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunctionFlex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGBRFunctionFlex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunctionFlex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGBRTargetFlex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGBRTargetFlex::Class_Name()
{
   return "RooGBRTargetFlex";
}

//______________________________________________________________________________
const char *RooGBRTargetFlex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTargetFlex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGBRTargetFlex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTargetFlex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGBRTargetFlex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTargetFlex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGBRTargetFlex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTargetFlex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGBRFunction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGBRFunction::Class_Name()
{
   return "RooGBRFunction";
}

//______________________________________________________________________________
const char *RooGBRFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGBRFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGBRFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGBRFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRFunction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGBRTarget::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGBRTarget::Class_Name()
{
   return "RooGBRTarget";
}

//______________________________________________________________________________
const char *RooGBRTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTarget*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGBRTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTarget*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGBRTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTarget*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGBRTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGBRTarget*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RooTreeConvert::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTreeConvert.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTreeConvert::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTreeConvert::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTreeConvert(void *p) {
      return  p ? new(p) ::RooTreeConvert : new ::RooTreeConvert;
   }
   static void *newArray_RooTreeConvert(Long_t nElements, void *p) {
      return p ? new(p) ::RooTreeConvert[nElements] : new ::RooTreeConvert[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTreeConvert(void *p) {
      delete (static_cast<::RooTreeConvert*>(p));
   }
   static void deleteArray_RooTreeConvert(void *p) {
      delete [] (static_cast<::RooTreeConvert*>(p));
   }
   static void destruct_RooTreeConvert(void *p) {
      typedef ::RooTreeConvert current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTreeConvert

//______________________________________________________________________________
void RooNormPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNormPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNormPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNormPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNormPdf(void *p) {
      return  p ? new(p) ::RooNormPdf : new ::RooNormPdf;
   }
   static void *newArray_RooNormPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooNormPdf[nElements] : new ::RooNormPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNormPdf(void *p) {
      delete (static_cast<::RooNormPdf*>(p));
   }
   static void deleteArray_RooNormPdf(void *p) {
      delete [] (static_cast<::RooNormPdf*>(p));
   }
   static void destruct_RooNormPdf(void *p) {
      typedef ::RooNormPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNormPdf

//______________________________________________________________________________
void RooRealConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealConstraint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealConstraint::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealConstraint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealConstraint(void *p) {
      return  p ? new(p) ::RooRealConstraint : new ::RooRealConstraint;
   }
   static void *newArray_RooRealConstraint(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealConstraint[nElements] : new ::RooRealConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealConstraint(void *p) {
      delete (static_cast<::RooRealConstraint*>(p));
   }
   static void deleteArray_RooRealConstraint(void *p) {
      delete [] (static_cast<::RooRealConstraint*>(p));
   }
   static void destruct_RooRealConstraint(void *p) {
      typedef ::RooRealConstraint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealConstraint

//______________________________________________________________________________
void RooPowerLaw::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPowerLaw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPowerLaw::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPowerLaw::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPowerLaw(void *p) {
      return  p ? new(p) ::RooPowerLaw : new ::RooPowerLaw;
   }
   static void *newArray_RooPowerLaw(Long_t nElements, void *p) {
      return p ? new(p) ::RooPowerLaw[nElements] : new ::RooPowerLaw[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPowerLaw(void *p) {
      delete (static_cast<::RooPowerLaw*>(p));
   }
   static void deleteArray_RooPowerLaw(void *p) {
      delete [] (static_cast<::RooPowerLaw*>(p));
   }
   static void destruct_RooPowerLaw(void *p) {
      typedef ::RooPowerLaw current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPowerLaw

//______________________________________________________________________________
void RooCondAddPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCondAddPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCondAddPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCondAddPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCondAddPdf(void *p) {
      return  p ? new(p) ::RooCondAddPdf : new ::RooCondAddPdf;
   }
   static void *newArray_RooCondAddPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooCondAddPdf[nElements] : new ::RooCondAddPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCondAddPdf(void *p) {
      delete (static_cast<::RooCondAddPdf*>(p));
   }
   static void deleteArray_RooCondAddPdf(void *p) {
      delete [] (static_cast<::RooCondAddPdf*>(p));
   }
   static void destruct_RooCondAddPdf(void *p) {
      typedef ::RooCondAddPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCondAddPdf

//______________________________________________________________________________
void RooCondRatioPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCondRatioPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCondRatioPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCondRatioPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCondRatioPdf(void *p) {
      return  p ? new(p) ::RooCondRatioPdf : new ::RooCondRatioPdf;
   }
   static void *newArray_RooCondRatioPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooCondRatioPdf[nElements] : new ::RooCondRatioPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCondRatioPdf(void *p) {
      delete (static_cast<::RooCondRatioPdf*>(p));
   }
   static void deleteArray_RooCondRatioPdf(void *p) {
      delete [] (static_cast<::RooCondRatioPdf*>(p));
   }
   static void destruct_RooCondRatioPdf(void *p) {
      typedef ::RooCondRatioPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCondRatioPdf

//______________________________________________________________________________
void RooPdfAddReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPdfAddReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPdfAddReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPdfAddReal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPdfAddReal(void *p) {
      return  p ? new(p) ::RooPdfAddReal : new ::RooPdfAddReal;
   }
   static void *newArray_RooPdfAddReal(Long_t nElements, void *p) {
      return p ? new(p) ::RooPdfAddReal[nElements] : new ::RooPdfAddReal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPdfAddReal(void *p) {
      delete (static_cast<::RooPdfAddReal*>(p));
   }
   static void deleteArray_RooPdfAddReal(void *p) {
      delete [] (static_cast<::RooPdfAddReal*>(p));
   }
   static void destruct_RooPdfAddReal(void *p) {
      typedef ::RooPdfAddReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPdfAddReal

//______________________________________________________________________________
void RooGBRFunctionFlex::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGBRFunctionFlex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGBRFunctionFlex::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGBRFunctionFlex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGBRFunctionFlex(void *p) {
      return  p ? new(p) ::RooGBRFunctionFlex : new ::RooGBRFunctionFlex;
   }
   static void *newArray_RooGBRFunctionFlex(Long_t nElements, void *p) {
      return p ? new(p) ::RooGBRFunctionFlex[nElements] : new ::RooGBRFunctionFlex[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGBRFunctionFlex(void *p) {
      delete (static_cast<::RooGBRFunctionFlex*>(p));
   }
   static void deleteArray_RooGBRFunctionFlex(void *p) {
      delete [] (static_cast<::RooGBRFunctionFlex*>(p));
   }
   static void destruct_RooGBRFunctionFlex(void *p) {
      typedef ::RooGBRFunctionFlex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGBRFunctionFlex

//______________________________________________________________________________
void RooGBRTargetFlex::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGBRTargetFlex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGBRTargetFlex::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGBRTargetFlex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGBRTargetFlex(void *p) {
      return  p ? new(p) ::RooGBRTargetFlex : new ::RooGBRTargetFlex;
   }
   static void *newArray_RooGBRTargetFlex(Long_t nElements, void *p) {
      return p ? new(p) ::RooGBRTargetFlex[nElements] : new ::RooGBRTargetFlex[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGBRTargetFlex(void *p) {
      delete (static_cast<::RooGBRTargetFlex*>(p));
   }
   static void deleteArray_RooGBRTargetFlex(void *p) {
      delete [] (static_cast<::RooGBRTargetFlex*>(p));
   }
   static void destruct_RooGBRTargetFlex(void *p) {
      typedef ::RooGBRTargetFlex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGBRTargetFlex

//______________________________________________________________________________
void RooGBRFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGBRFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGBRFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGBRFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGBRFunction(void *p) {
      return  p ? new(p) ::RooGBRFunction : new ::RooGBRFunction;
   }
   static void *newArray_RooGBRFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooGBRFunction[nElements] : new ::RooGBRFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGBRFunction(void *p) {
      delete (static_cast<::RooGBRFunction*>(p));
   }
   static void deleteArray_RooGBRFunction(void *p) {
      delete [] (static_cast<::RooGBRFunction*>(p));
   }
   static void destruct_RooGBRFunction(void *p) {
      typedef ::RooGBRFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGBRFunction

//______________________________________________________________________________
void RooGBRTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGBRTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGBRTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGBRTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGBRTarget(void *p) {
      return  p ? new(p) ::RooGBRTarget : new ::RooGBRTarget;
   }
   static void *newArray_RooGBRTarget(Long_t nElements, void *p) {
      return p ? new(p) ::RooGBRTarget[nElements] : new ::RooGBRTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGBRTarget(void *p) {
      delete (static_cast<::RooGBRTarget*>(p));
   }
   static void deleteArray_RooGBRTarget(void *p) {
      delete [] (static_cast<::RooGBRTarget*>(p));
   }
   static void destruct_RooGBRTarget(void *p) {
      typedef ::RooGBRTarget current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGBRTarget

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 423,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_RooHybridBDTAutoPdfDict_Impl() {
    static const char* headers[] = {
"GBRLikelihood/RooHybridBDTAutoPdf.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RooHybridBDTAutoPdfDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooTreeConvert;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooNormPdf;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooRealConstraint;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooPowerLaw;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooCondAddPdf;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooCondRatioPdf;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooPdfAddReal;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooGBRFunctionFlex;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooGBRTargetFlex;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooGBRFunction;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooHybridBDTAutoPdf.h")))  RooGBRTarget;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RooHybridBDTAutoPdfDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "GBRLikelihood/RooHybridBDTAutoPdf.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RooCondAddPdf", payloadCode, "@",
"RooCondRatioPdf", payloadCode, "@",
"RooGBRFunction", payloadCode, "@",
"RooGBRFunctionFlex", payloadCode, "@",
"RooGBRTarget", payloadCode, "@",
"RooGBRTargetFlex", payloadCode, "@",
"RooNormPdf", payloadCode, "@",
"RooPdfAddReal", payloadCode, "@",
"RooPowerLaw", payloadCode, "@",
"RooRealConstraint", payloadCode, "@",
"RooTreeConvert", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RooHybridBDTAutoPdfDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RooHybridBDTAutoPdfDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RooHybridBDTAutoPdfDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RooHybridBDTAutoPdfDict() {
  TriggerDictionaryInitialization_RooHybridBDTAutoPdfDict_Impl();
}
