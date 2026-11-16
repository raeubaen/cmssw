// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIGBRLikelihooddIsrcdIHybridGBRForestDDict
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
#include "GBRLikelihood/HybridGBRForestD.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_HybridGBRForestD(void *p = nullptr);
   static void *newArray_HybridGBRForestD(Long_t size, void *p);
   static void delete_HybridGBRForestD(void *p);
   static void deleteArray_HybridGBRForestD(void *p);
   static void destruct_HybridGBRForestD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HybridGBRForestD*)
   {
      ::HybridGBRForestD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HybridGBRForestD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("HybridGBRForestD", ::HybridGBRForestD::Class_Version(), "GBRLikelihood/HybridGBRForestD.h", 25,
                  typeid(::HybridGBRForestD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HybridGBRForestD::Dictionary, isa_proxy, 4,
                  sizeof(::HybridGBRForestD) );
      instance.SetNew(&new_HybridGBRForestD);
      instance.SetNewArray(&newArray_HybridGBRForestD);
      instance.SetDelete(&delete_HybridGBRForestD);
      instance.SetDeleteArray(&deleteArray_HybridGBRForestD);
      instance.SetDestructor(&destruct_HybridGBRForestD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HybridGBRForestD*)
   {
      return GenerateInitInstanceLocal(static_cast<::HybridGBRForestD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HybridGBRForestD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr HybridGBRForestD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridGBRForestD::Class_Name()
{
   return "HybridGBRForestD";
}

//______________________________________________________________________________
const char *HybridGBRForestD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridGBRForestD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridGBRForestD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridGBRForestD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRForestD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void HybridGBRForestD::Streamer(TBuffer &R__b)
{
   // Stream an object of class HybridGBRForestD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HybridGBRForestD::Class(),this);
   } else {
      R__b.WriteClassBuffer(HybridGBRForestD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_HybridGBRForestD(void *p) {
      return  p ? new(p) ::HybridGBRForestD : new ::HybridGBRForestD;
   }
   static void *newArray_HybridGBRForestD(Long_t nElements, void *p) {
      return p ? new(p) ::HybridGBRForestD[nElements] : new ::HybridGBRForestD[nElements];
   }
   // Wrapper around operator delete
   static void delete_HybridGBRForestD(void *p) {
      delete (static_cast<::HybridGBRForestD*>(p));
   }
   static void deleteArray_HybridGBRForestD(void *p) {
      delete [] (static_cast<::HybridGBRForestD*>(p));
   }
   static void destruct_HybridGBRForestD(void *p) {
      typedef ::HybridGBRForestD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HybridGBRForestD

namespace ROOT {
   static TClass *vectorlEvectorlEHybridGBRTreeDgRsPgR_Dictionary();
   static void vectorlEvectorlEHybridGBRTreeDgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEHybridGBRTreeDgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p);
   static void destruct_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<HybridGBRTreeD> >*)
   {
      vector<vector<HybridGBRTreeD> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<HybridGBRTreeD> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<HybridGBRTreeD> >", -2, "vector", 423,
                  typeid(vector<vector<HybridGBRTreeD> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEHybridGBRTreeDgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<HybridGBRTreeD> >) );
      instance.SetNew(&new_vectorlEvectorlEHybridGBRTreeDgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEHybridGBRTreeDgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEHybridGBRTreeDgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEHybridGBRTreeDgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEHybridGBRTreeDgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<HybridGBRTreeD> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<HybridGBRTreeD> >","std::vector<std::vector<HybridGBRTreeD, std::allocator<HybridGBRTreeD> >, std::allocator<std::vector<HybridGBRTreeD, std::allocator<HybridGBRTreeD> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<HybridGBRTreeD> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEHybridGBRTreeDgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<HybridGBRTreeD> >*>(nullptr))->GetClass();
      vectorlEvectorlEHybridGBRTreeDgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEHybridGBRTreeDgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<HybridGBRTreeD> > : new vector<vector<HybridGBRTreeD> >;
   }
   static void *newArray_vectorlEvectorlEHybridGBRTreeDgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<HybridGBRTreeD> >[nElements] : new vector<vector<HybridGBRTreeD> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p) {
      delete (static_cast<vector<vector<HybridGBRTreeD> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<HybridGBRTreeD> >*>(p));
   }
   static void destruct_vectorlEvectorlEHybridGBRTreeDgRsPgR(void *p) {
      typedef vector<vector<HybridGBRTreeD> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<HybridGBRTreeD> >

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 423,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

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
  void TriggerDictionaryInitialization_HybridGBRForestDDict_Impl() {
    static const char* headers[] = {
"GBRLikelihood/HybridGBRForestD.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HybridGBRForestDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/HybridGBRForestD.h")))  HybridGBRForestD;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HybridGBRForestDDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "GBRLikelihood/HybridGBRForestD.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HybridGBRForestD", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HybridGBRForestDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HybridGBRForestDDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HybridGBRForestDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HybridGBRForestDDict() {
  TriggerDictionaryInitialization_HybridGBRForestDDict_Impl();
}
