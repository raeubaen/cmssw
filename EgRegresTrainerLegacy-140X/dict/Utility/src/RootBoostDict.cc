// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIRootBoostDict
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
#include "Utility/RootBoost.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootBoost*)
   {
      ::RootBoost *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RootBoost >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RootBoost", ::RootBoost::Class_Version(), "Utility/RootBoost.hh", 9,
                  typeid(::RootBoost), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RootBoost::Dictionary, isa_proxy, 4,
                  sizeof(::RootBoost) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootBoost*)
   {
      return GenerateInitInstanceLocal(static_cast<::RootBoost*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RootBoost*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RootBoost::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RootBoost::Class_Name()
{
   return "RootBoost";
}

//______________________________________________________________________________
const char *RootBoost::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RootBoost*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RootBoost::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RootBoost*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootBoost::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RootBoost*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootBoost::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RootBoost*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RootBoost::Streamer(TBuffer &R__b)
{
   // Stream an object of class RootBoost.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RootBoost::Class(),this);
   } else {
      R__b.WriteClassBuffer(RootBoost::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::RootBoost

namespace {
  void TriggerDictionaryInitialization_RootBoostDict_Impl() {
    static const char* headers[] = {
"Utility/RootBoost.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RootBoostDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/RootBoost.hh")))  RootBoost;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RootBoostDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/RootBoost.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RootBoost", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RootBoostDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RootBoostDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RootBoostDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RootBoostDict() {
  TriggerDictionaryInitialization_RootBoostDict_Impl();
}
