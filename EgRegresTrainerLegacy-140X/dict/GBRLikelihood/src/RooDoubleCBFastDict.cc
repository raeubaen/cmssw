// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIGBRLikelihooddIsrcdIRooDoubleCBFastDict
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
#include "GBRLikelihood/RooDoubleCBFast.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_RooDoubleCBFast(void *p = nullptr);
   static void *newArray_RooDoubleCBFast(Long_t size, void *p);
   static void delete_RooDoubleCBFast(void *p);
   static void deleteArray_RooDoubleCBFast(void *p);
   static void destruct_RooDoubleCBFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDoubleCBFast*)
   {
      ::RooDoubleCBFast *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDoubleCBFast >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDoubleCBFast", ::RooDoubleCBFast::Class_Version(), "GBRLikelihood/RooDoubleCBFast.h", 8,
                  typeid(::RooDoubleCBFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDoubleCBFast::Dictionary, isa_proxy, 4,
                  sizeof(::RooDoubleCBFast) );
      instance.SetNew(&new_RooDoubleCBFast);
      instance.SetNewArray(&newArray_RooDoubleCBFast);
      instance.SetDelete(&delete_RooDoubleCBFast);
      instance.SetDeleteArray(&deleteArray_RooDoubleCBFast);
      instance.SetDestructor(&destruct_RooDoubleCBFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDoubleCBFast*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDoubleCBFast*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDoubleCBFast*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RooDoubleCBFast::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDoubleCBFast::Class_Name()
{
   return "RooDoubleCBFast";
}

//______________________________________________________________________________
const char *RooDoubleCBFast::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDoubleCBFast*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDoubleCBFast::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDoubleCBFast*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDoubleCBFast::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDoubleCBFast*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDoubleCBFast::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDoubleCBFast*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RooDoubleCBFast::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDoubleCBFast.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDoubleCBFast::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDoubleCBFast::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDoubleCBFast(void *p) {
      return  p ? new(p) ::RooDoubleCBFast : new ::RooDoubleCBFast;
   }
   static void *newArray_RooDoubleCBFast(Long_t nElements, void *p) {
      return p ? new(p) ::RooDoubleCBFast[nElements] : new ::RooDoubleCBFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDoubleCBFast(void *p) {
      delete (static_cast<::RooDoubleCBFast*>(p));
   }
   static void deleteArray_RooDoubleCBFast(void *p) {
      delete [] (static_cast<::RooDoubleCBFast*>(p));
   }
   static void destruct_RooDoubleCBFast(void *p) {
      typedef ::RooDoubleCBFast current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDoubleCBFast

namespace {
  void TriggerDictionaryInitialization_RooDoubleCBFastDict_Impl() {
    static const char* headers[] = {
"GBRLikelihood/RooDoubleCBFast.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RooDoubleCBFastDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/RooDoubleCBFast.h")))  RooDoubleCBFast;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RooDoubleCBFastDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "GBRLikelihood/RooDoubleCBFast.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RooDoubleCBFast", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RooDoubleCBFastDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RooDoubleCBFastDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RooDoubleCBFastDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RooDoubleCBFastDict() {
  TriggerDictionaryInitialization_RooDoubleCBFastDict_Impl();
}
