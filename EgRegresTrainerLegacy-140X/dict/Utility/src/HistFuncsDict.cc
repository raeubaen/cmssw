// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIHistFuncsDict
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
#include "Utility/HistFuncs.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HistFuncs*)
   {
      ::HistFuncs *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HistFuncs >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("HistFuncs", ::HistFuncs::Class_Version(), "Utility/HistFuncs.hh", 28,
                  typeid(::HistFuncs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HistFuncs::Dictionary, isa_proxy, 4,
                  sizeof(::HistFuncs) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HistFuncs*)
   {
      return GenerateInitInstanceLocal(static_cast<::HistFuncs*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HistFuncs*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *HistFuncscLcLBins1D_Dictionary();
   static void HistFuncscLcLBins1D_TClassManip(TClass*);
   static void delete_HistFuncscLcLBins1D(void *p);
   static void deleteArray_HistFuncscLcLBins1D(void *p);
   static void destruct_HistFuncscLcLBins1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HistFuncs::Bins1D*)
   {
      ::HistFuncs::Bins1D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HistFuncs::Bins1D));
      static ::ROOT::TGenericClassInfo 
         instance("HistFuncs::Bins1D", "EgRegresTrainerLegacy-140X/Utility/HistFuncs.hh", 31,
                  typeid(::HistFuncs::Bins1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HistFuncscLcLBins1D_Dictionary, isa_proxy, 4,
                  sizeof(::HistFuncs::Bins1D) );
      instance.SetDelete(&delete_HistFuncscLcLBins1D);
      instance.SetDeleteArray(&deleteArray_HistFuncscLcLBins1D);
      instance.SetDestructor(&destruct_HistFuncscLcLBins1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HistFuncs::Bins1D*)
   {
      return GenerateInitInstanceLocal(static_cast<::HistFuncs::Bins1D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HistFuncs::Bins1D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HistFuncscLcLBins1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HistFuncs::Bins1D*>(nullptr))->GetClass();
      HistFuncscLcLBins1D_TClassManip(theClass);
   return theClass;
   }

   static void HistFuncscLcLBins1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr HistFuncs::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HistFuncs::Class_Name()
{
   return "HistFuncs";
}

//______________________________________________________________________________
const char *HistFuncs::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HistFuncs*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HistFuncs::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HistFuncs*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistFuncs::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HistFuncs*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistFuncs::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HistFuncs*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void HistFuncs::Streamer(TBuffer &R__b)
{
   // Stream an object of class HistFuncs.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HistFuncs::Class(),this);
   } else {
      R__b.WriteClassBuffer(HistFuncs::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::HistFuncs

namespace ROOT {
   // Wrapper around operator delete
   static void delete_HistFuncscLcLBins1D(void *p) {
      delete (static_cast<::HistFuncs::Bins1D*>(p));
   }
   static void deleteArray_HistFuncscLcLBins1D(void *p) {
      delete [] (static_cast<::HistFuncs::Bins1D*>(p));
   }
   static void destruct_HistFuncscLcLBins1D(void *p) {
      typedef ::HistFuncs::Bins1D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HistFuncs::Bins1D

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
  void TriggerDictionaryInitialization_HistFuncsDict_Impl() {
    static const char* headers[] = {
"Utility/HistFuncs.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HistFuncsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/HistFuncs.hh")))  HistFuncs;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HistFuncsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/HistFuncs.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HistFuncs", payloadCode, "@",
"HistFuncs::Bins1D", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HistFuncsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HistFuncsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HistFuncsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HistFuncsDict() {
  TriggerDictionaryInitialization_HistFuncsDict_Impl();
}
