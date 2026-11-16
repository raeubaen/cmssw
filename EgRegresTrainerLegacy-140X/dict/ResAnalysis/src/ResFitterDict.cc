// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIResAnalysisdIsrcdIResFitterDict
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
#include "ResAnalysis/ResFitter.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ResFitter_Dictionary();
   static void ResFitter_TClassManip(TClass*);
   static void *new_ResFitter(void *p = nullptr);
   static void *newArray_ResFitter(Long_t size, void *p);
   static void delete_ResFitter(void *p);
   static void deleteArray_ResFitter(void *p);
   static void destruct_ResFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ResFitter*)
   {
      ::ResFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ResFitter));
      static ::ROOT::TGenericClassInfo 
         instance("ResFitter", "ResAnalysis/ResFitter.hh", 12,
                  typeid(::ResFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ResFitter_Dictionary, isa_proxy, 4,
                  sizeof(::ResFitter) );
      instance.SetNew(&new_ResFitter);
      instance.SetNewArray(&newArray_ResFitter);
      instance.SetDelete(&delete_ResFitter);
      instance.SetDeleteArray(&deleteArray_ResFitter);
      instance.SetDestructor(&destruct_ResFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ResFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ResFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ResFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ResFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ResFitter*>(nullptr))->GetClass();
      ResFitter_TClassManip(theClass);
   return theClass;
   }

   static void ResFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ResFittercLcLParam_Dictionary();
   static void ResFittercLcLParam_TClassManip(TClass*);
   static void *new_ResFittercLcLParam(void *p = nullptr);
   static void *newArray_ResFittercLcLParam(Long_t size, void *p);
   static void delete_ResFittercLcLParam(void *p);
   static void deleteArray_ResFittercLcLParam(void *p);
   static void destruct_ResFittercLcLParam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ResFitter::Param*)
   {
      ::ResFitter::Param *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ResFitter::Param));
      static ::ROOT::TGenericClassInfo 
         instance("ResFitter::Param", "EgRegresTrainerLegacy-140X/ResAnalysis/ResFitter.hh", 17,
                  typeid(::ResFitter::Param), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ResFittercLcLParam_Dictionary, isa_proxy, 4,
                  sizeof(::ResFitter::Param) );
      instance.SetNew(&new_ResFittercLcLParam);
      instance.SetNewArray(&newArray_ResFittercLcLParam);
      instance.SetDelete(&delete_ResFittercLcLParam);
      instance.SetDeleteArray(&deleteArray_ResFittercLcLParam);
      instance.SetDestructor(&destruct_ResFittercLcLParam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ResFitter::Param*)
   {
      return GenerateInitInstanceLocal(static_cast<::ResFitter::Param*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ResFitter::Param*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ResFittercLcLParam_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ResFitter::Param*>(nullptr))->GetClass();
      ResFittercLcLParam_TClassManip(theClass);
   return theClass;
   }

   static void ResFittercLcLParam_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ResFittercLcLParamsVsVar_Dictionary();
   static void ResFittercLcLParamsVsVar_TClassManip(TClass*);
   static void delete_ResFittercLcLParamsVsVar(void *p);
   static void deleteArray_ResFittercLcLParamsVsVar(void *p);
   static void destruct_ResFittercLcLParamsVsVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ResFitter::ParamsVsVar*)
   {
      ::ResFitter::ParamsVsVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ResFitter::ParamsVsVar));
      static ::ROOT::TGenericClassInfo 
         instance("ResFitter::ParamsVsVar", "EgRegresTrainerLegacy-140X/ResAnalysis/ResFitter.hh", 68,
                  typeid(::ResFitter::ParamsVsVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ResFittercLcLParamsVsVar_Dictionary, isa_proxy, 4,
                  sizeof(::ResFitter::ParamsVsVar) );
      instance.SetDelete(&delete_ResFittercLcLParamsVsVar);
      instance.SetDeleteArray(&deleteArray_ResFittercLcLParamsVsVar);
      instance.SetDestructor(&destruct_ResFittercLcLParamsVsVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ResFitter::ParamsVsVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::ResFitter::ParamsVsVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ResFitter::ParamsVsVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ResFittercLcLParamsVsVar_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ResFitter::ParamsVsVar*>(nullptr))->GetClass();
      ResFittercLcLParamsVsVar_TClassManip(theClass);
   return theClass;
   }

   static void ResFittercLcLParamsVsVar_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ResFitter(void *p) {
      return  p ? new(p) ::ResFitter : new ::ResFitter;
   }
   static void *newArray_ResFitter(Long_t nElements, void *p) {
      return p ? new(p) ::ResFitter[nElements] : new ::ResFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ResFitter(void *p) {
      delete (static_cast<::ResFitter*>(p));
   }
   static void deleteArray_ResFitter(void *p) {
      delete [] (static_cast<::ResFitter*>(p));
   }
   static void destruct_ResFitter(void *p) {
      typedef ::ResFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ResFitter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ResFittercLcLParam(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ResFitter::Param : new ::ResFitter::Param;
   }
   static void *newArray_ResFittercLcLParam(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ResFitter::Param[nElements] : new ::ResFitter::Param[nElements];
   }
   // Wrapper around operator delete
   static void delete_ResFittercLcLParam(void *p) {
      delete (static_cast<::ResFitter::Param*>(p));
   }
   static void deleteArray_ResFittercLcLParam(void *p) {
      delete [] (static_cast<::ResFitter::Param*>(p));
   }
   static void destruct_ResFittercLcLParam(void *p) {
      typedef ::ResFitter::Param current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ResFitter::Param

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ResFittercLcLParamsVsVar(void *p) {
      delete (static_cast<::ResFitter::ParamsVsVar*>(p));
   }
   static void deleteArray_ResFittercLcLParamsVsVar(void *p) {
      delete [] (static_cast<::ResFitter::ParamsVsVar*>(p));
   }
   static void destruct_ResFittercLcLParamsVsVar(void *p) {
      typedef ::ResFitter::ParamsVsVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ResFitter::ParamsVsVar

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
   static TClass *vectorlEResFittercLcLParamgR_Dictionary();
   static void vectorlEResFittercLcLParamgR_TClassManip(TClass*);
   static void *new_vectorlEResFittercLcLParamgR(void *p = nullptr);
   static void *newArray_vectorlEResFittercLcLParamgR(Long_t size, void *p);
   static void delete_vectorlEResFittercLcLParamgR(void *p);
   static void deleteArray_vectorlEResFittercLcLParamgR(void *p);
   static void destruct_vectorlEResFittercLcLParamgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ResFitter::Param>*)
   {
      vector<ResFitter::Param> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ResFitter::Param>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ResFitter::Param>", -2, "vector", 423,
                  typeid(vector<ResFitter::Param>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEResFittercLcLParamgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ResFitter::Param>) );
      instance.SetNew(&new_vectorlEResFittercLcLParamgR);
      instance.SetNewArray(&newArray_vectorlEResFittercLcLParamgR);
      instance.SetDelete(&delete_vectorlEResFittercLcLParamgR);
      instance.SetDeleteArray(&deleteArray_vectorlEResFittercLcLParamgR);
      instance.SetDestructor(&destruct_vectorlEResFittercLcLParamgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ResFitter::Param> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ResFitter::Param>","std::vector<ResFitter::Param, std::allocator<ResFitter::Param> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ResFitter::Param>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEResFittercLcLParamgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ResFitter::Param>*>(nullptr))->GetClass();
      vectorlEResFittercLcLParamgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEResFittercLcLParamgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEResFittercLcLParamgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ResFitter::Param> : new vector<ResFitter::Param>;
   }
   static void *newArray_vectorlEResFittercLcLParamgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ResFitter::Param>[nElements] : new vector<ResFitter::Param>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEResFittercLcLParamgR(void *p) {
      delete (static_cast<vector<ResFitter::Param>*>(p));
   }
   static void deleteArray_vectorlEResFittercLcLParamgR(void *p) {
      delete [] (static_cast<vector<ResFitter::Param>*>(p));
   }
   static void destruct_vectorlEResFittercLcLParamgR(void *p) {
      typedef vector<ResFitter::Param> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ResFitter::Param>

namespace {
  void TriggerDictionaryInitialization_ResFitterDict_Impl() {
    static const char* headers[] = {
"ResAnalysis/ResFitter.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ResFitterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$ResAnalysis/ResFitter.hh")))  ResFitter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ResFitterDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ResAnalysis/ResFitter.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ResFitter", payloadCode, "@",
"ResFitter::Param", payloadCode, "@",
"ResFitter::ParamsVsVar", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ResFitterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ResFitterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ResFitterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ResFitterDict() {
  TriggerDictionaryInitialization_ResFitterDict_Impl();
}
