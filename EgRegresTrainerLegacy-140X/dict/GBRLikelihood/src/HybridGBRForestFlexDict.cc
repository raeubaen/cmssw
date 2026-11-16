// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIGBRLikelihooddIsrcdIHybridGBRForestFlexDict
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
#include "GBRLikelihood/HybridGBRForestFlex.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_HybridGBRForestFlex(void *p = nullptr);
   static void *newArray_HybridGBRForestFlex(Long_t size, void *p);
   static void delete_HybridGBRForestFlex(void *p);
   static void deleteArray_HybridGBRForestFlex(void *p);
   static void destruct_HybridGBRForestFlex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HybridGBRForestFlex*)
   {
      ::HybridGBRForestFlex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HybridGBRForestFlex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("HybridGBRForestFlex", ::HybridGBRForestFlex::Class_Version(), "GBRLikelihood/HybridGBRForestFlex.h", 25,
                  typeid(::HybridGBRForestFlex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HybridGBRForestFlex::Dictionary, isa_proxy, 4,
                  sizeof(::HybridGBRForestFlex) );
      instance.SetNew(&new_HybridGBRForestFlex);
      instance.SetNewArray(&newArray_HybridGBRForestFlex);
      instance.SetDelete(&delete_HybridGBRForestFlex);
      instance.SetDeleteArray(&deleteArray_HybridGBRForestFlex);
      instance.SetDestructor(&destruct_HybridGBRForestFlex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HybridGBRForestFlex*)
   {
      return GenerateInitInstanceLocal(static_cast<::HybridGBRForestFlex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HybridGBRForestFlex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr HybridGBRForestFlex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridGBRForestFlex::Class_Name()
{
   return "HybridGBRForestFlex";
}

//______________________________________________________________________________
const char *HybridGBRForestFlex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestFlex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridGBRForestFlex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestFlex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridGBRForestFlex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestFlex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridGBRForestFlex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestFlex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void HybridGBRForestFlex::Streamer(TBuffer &R__b)
{
   // Stream an object of class HybridGBRForestFlex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HybridGBRForestFlex::Class(),this);
   } else {
      R__b.WriteClassBuffer(HybridGBRForestFlex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_HybridGBRForestFlex(void *p) {
      return  p ? new(p) ::HybridGBRForestFlex : new ::HybridGBRForestFlex;
   }
   static void *newArray_HybridGBRForestFlex(Long_t nElements, void *p) {
      return p ? new(p) ::HybridGBRForestFlex[nElements] : new ::HybridGBRForestFlex[nElements];
   }
   // Wrapper around operator delete
   static void delete_HybridGBRForestFlex(void *p) {
      delete (static_cast<::HybridGBRForestFlex*>(p));
   }
   static void deleteArray_HybridGBRForestFlex(void *p) {
      delete [] (static_cast<::HybridGBRForestFlex*>(p));
   }
   static void destruct_HybridGBRForestFlex(void *p) {
      typedef ::HybridGBRForestFlex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HybridGBRForestFlex

namespace ROOT {
   static TClass *vectorlEHybridGBRTreeDgR_Dictionary();
   static void vectorlEHybridGBRTreeDgR_TClassManip(TClass*);
   static void *new_vectorlEHybridGBRTreeDgR(void *p = nullptr);
   static void *newArray_vectorlEHybridGBRTreeDgR(Long_t size, void *p);
   static void delete_vectorlEHybridGBRTreeDgR(void *p);
   static void deleteArray_vectorlEHybridGBRTreeDgR(void *p);
   static void destruct_vectorlEHybridGBRTreeDgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HybridGBRTreeD>*)
   {
      vector<HybridGBRTreeD> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HybridGBRTreeD>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HybridGBRTreeD>", -2, "vector", 423,
                  typeid(vector<HybridGBRTreeD>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHybridGBRTreeDgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<HybridGBRTreeD>) );
      instance.SetNew(&new_vectorlEHybridGBRTreeDgR);
      instance.SetNewArray(&newArray_vectorlEHybridGBRTreeDgR);
      instance.SetDelete(&delete_vectorlEHybridGBRTreeDgR);
      instance.SetDeleteArray(&deleteArray_vectorlEHybridGBRTreeDgR);
      instance.SetDestructor(&destruct_vectorlEHybridGBRTreeDgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HybridGBRTreeD> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<HybridGBRTreeD>","std::vector<HybridGBRTreeD, std::allocator<HybridGBRTreeD> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<HybridGBRTreeD>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHybridGBRTreeDgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<HybridGBRTreeD>*>(nullptr))->GetClass();
      vectorlEHybridGBRTreeDgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHybridGBRTreeDgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHybridGBRTreeDgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<HybridGBRTreeD> : new vector<HybridGBRTreeD>;
   }
   static void *newArray_vectorlEHybridGBRTreeDgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<HybridGBRTreeD>[nElements] : new vector<HybridGBRTreeD>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHybridGBRTreeDgR(void *p) {
      delete (static_cast<vector<HybridGBRTreeD>*>(p));
   }
   static void deleteArray_vectorlEHybridGBRTreeDgR(void *p) {
      delete [] (static_cast<vector<HybridGBRTreeD>*>(p));
   }
   static void destruct_vectorlEHybridGBRTreeDgR(void *p) {
      typedef vector<HybridGBRTreeD> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<HybridGBRTreeD>

namespace {
  void TriggerDictionaryInitialization_HybridGBRForestFlexDict_Impl() {
    static const char* headers[] = {
"GBRLikelihood/HybridGBRForestFlex.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HybridGBRForestFlexDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/HybridGBRForestFlex.h")))  HybridGBRForestFlex;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HybridGBRForestFlexDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "GBRLikelihood/HybridGBRForestFlex.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HybridGBRForestFlex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HybridGBRForestFlexDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HybridGBRForestFlexDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HybridGBRForestFlexDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HybridGBRForestFlexDict() {
  TriggerDictionaryInitialization_HybridGBRForestFlexDict_Impl();
}
