// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIRegresTrainerdIsrcdICruijffPdfDict
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
#include "RegresTrainer/CruijffPdf.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_CruijffPdf(void *p);
   static void deleteArray_CruijffPdf(void *p);
   static void destruct_CruijffPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CruijffPdf*)
   {
      ::CruijffPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CruijffPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CruijffPdf", ::CruijffPdf::Class_Version(), "RegresTrainer/CruijffPdf.h", 13,
                  typeid(::CruijffPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CruijffPdf::Dictionary, isa_proxy, 4,
                  sizeof(::CruijffPdf) );
      instance.SetDelete(&delete_CruijffPdf);
      instance.SetDeleteArray(&deleteArray_CruijffPdf);
      instance.SetDestructor(&destruct_CruijffPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CruijffPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::CruijffPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CruijffPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CruijffPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CruijffPdf::Class_Name()
{
   return "CruijffPdf";
}

//______________________________________________________________________________
const char *CruijffPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CruijffPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CruijffPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CruijffPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CruijffPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CruijffPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CruijffPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CruijffPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CruijffPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class CruijffPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CruijffPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(CruijffPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CruijffPdf(void *p) {
      delete (static_cast<::CruijffPdf*>(p));
   }
   static void deleteArray_CruijffPdf(void *p) {
      delete [] (static_cast<::CruijffPdf*>(p));
   }
   static void destruct_CruijffPdf(void *p) {
      typedef ::CruijffPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CruijffPdf

namespace {
  void TriggerDictionaryInitialization_CruijffPdfDict_Impl() {
    static const char* headers[] = {
"RegresTrainer/CruijffPdf.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CruijffPdfDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$RegresTrainer/CruijffPdf.h")))  CruijffPdf;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CruijffPdfDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "RegresTrainer/CruijffPdf.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CruijffPdf", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CruijffPdfDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CruijffPdfDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CruijffPdfDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CruijffPdfDict() {
  TriggerDictionaryInitialization_CruijffPdfDict_Impl();
}
