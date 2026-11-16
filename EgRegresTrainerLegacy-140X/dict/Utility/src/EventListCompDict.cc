// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIEventListCompDict
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
#include "Utility/EventListComp.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *EventListComp_Dictionary();
   static void EventListComp_TClassManip(TClass*);
   static void *new_EventListComp(void *p = nullptr);
   static void *newArray_EventListComp(Long_t size, void *p);
   static void delete_EventListComp(void *p);
   static void deleteArray_EventListComp(void *p);
   static void destruct_EventListComp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventListComp*)
   {
      ::EventListComp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventListComp));
      static ::ROOT::TGenericClassInfo 
         instance("EventListComp", "Utility/EventListComp.hh", 10,
                  typeid(::EventListComp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventListComp_Dictionary, isa_proxy, 4,
                  sizeof(::EventListComp) );
      instance.SetNew(&new_EventListComp);
      instance.SetNewArray(&newArray_EventListComp);
      instance.SetDelete(&delete_EventListComp);
      instance.SetDeleteArray(&deleteArray_EventListComp);
      instance.SetDestructor(&destruct_EventListComp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventListComp*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventListComp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventListComp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventListComp_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventListComp*>(nullptr))->GetClass();
      EventListComp_TClassManip(theClass);
   return theClass;
   }

   static void EventListComp_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventListCompcLcLEventListCompData_Dictionary();
   static void EventListCompcLcLEventListCompData_TClassManip(TClass*);
   static void *new_EventListCompcLcLEventListCompData(void *p = nullptr);
   static void *newArray_EventListCompcLcLEventListCompData(Long_t size, void *p);
   static void delete_EventListCompcLcLEventListCompData(void *p);
   static void deleteArray_EventListCompcLcLEventListCompData(void *p);
   static void destruct_EventListCompcLcLEventListCompData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventListComp::EventListCompData*)
   {
      ::EventListComp::EventListCompData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventListComp::EventListCompData));
      static ::ROOT::TGenericClassInfo 
         instance("EventListComp::EventListCompData", "EgRegresTrainerLegacy-140X/Utility/EventListComp.hh", 13,
                  typeid(::EventListComp::EventListCompData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventListCompcLcLEventListCompData_Dictionary, isa_proxy, 4,
                  sizeof(::EventListComp::EventListCompData) );
      instance.SetNew(&new_EventListCompcLcLEventListCompData);
      instance.SetNewArray(&newArray_EventListCompcLcLEventListCompData);
      instance.SetDelete(&delete_EventListCompcLcLEventListCompData);
      instance.SetDeleteArray(&deleteArray_EventListCompcLcLEventListCompData);
      instance.SetDestructor(&destruct_EventListCompcLcLEventListCompData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventListComp::EventListCompData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventListComp::EventListCompData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventListComp::EventListCompData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventListCompcLcLEventListCompData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventListComp::EventListCompData*>(nullptr))->GetClass();
      EventListCompcLcLEventListCompData_TClassManip(theClass);
   return theClass;
   }

   static void EventListCompcLcLEventListCompData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventListComp(void *p) {
      return  p ? new(p) ::EventListComp : new ::EventListComp;
   }
   static void *newArray_EventListComp(Long_t nElements, void *p) {
      return p ? new(p) ::EventListComp[nElements] : new ::EventListComp[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventListComp(void *p) {
      delete (static_cast<::EventListComp*>(p));
   }
   static void deleteArray_EventListComp(void *p) {
      delete [] (static_cast<::EventListComp*>(p));
   }
   static void destruct_EventListComp(void *p) {
      typedef ::EventListComp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventListComp

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventListCompcLcLEventListCompData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EventListComp::EventListCompData : new ::EventListComp::EventListCompData;
   }
   static void *newArray_EventListCompcLcLEventListCompData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EventListComp::EventListCompData[nElements] : new ::EventListComp::EventListCompData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventListCompcLcLEventListCompData(void *p) {
      delete (static_cast<::EventListComp::EventListCompData*>(p));
   }
   static void deleteArray_EventListCompcLcLEventListCompData(void *p) {
      delete [] (static_cast<::EventListComp::EventListCompData*>(p));
   }
   static void destruct_EventListCompcLcLEventListCompData(void *p) {
      typedef ::EventListComp::EventListCompData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventListComp::EventListCompData

namespace ROOT {
   static TClass *vectorlEEventListCompcLcLEventListCompDatagR_Dictionary();
   static void vectorlEEventListCompcLcLEventListCompDatagR_TClassManip(TClass*);
   static void *new_vectorlEEventListCompcLcLEventListCompDatagR(void *p = nullptr);
   static void *newArray_vectorlEEventListCompcLcLEventListCompDatagR(Long_t size, void *p);
   static void delete_vectorlEEventListCompcLcLEventListCompDatagR(void *p);
   static void deleteArray_vectorlEEventListCompcLcLEventListCompDatagR(void *p);
   static void destruct_vectorlEEventListCompcLcLEventListCompDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventListComp::EventListCompData>*)
   {
      vector<EventListComp::EventListCompData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventListComp::EventListCompData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventListComp::EventListCompData>", -2, "vector", 423,
                  typeid(vector<EventListComp::EventListCompData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventListCompcLcLEventListCompDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EventListComp::EventListCompData>) );
      instance.SetNew(&new_vectorlEEventListCompcLcLEventListCompDatagR);
      instance.SetNewArray(&newArray_vectorlEEventListCompcLcLEventListCompDatagR);
      instance.SetDelete(&delete_vectorlEEventListCompcLcLEventListCompDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventListCompcLcLEventListCompDatagR);
      instance.SetDestructor(&destruct_vectorlEEventListCompcLcLEventListCompDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventListComp::EventListCompData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EventListComp::EventListCompData>","std::vector<EventListComp::EventListCompData, std::allocator<EventListComp::EventListCompData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EventListComp::EventListCompData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventListCompcLcLEventListCompDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EventListComp::EventListCompData>*>(nullptr))->GetClass();
      vectorlEEventListCompcLcLEventListCompDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventListCompcLcLEventListCompDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventListCompcLcLEventListCompDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventListComp::EventListCompData> : new vector<EventListComp::EventListCompData>;
   }
   static void *newArray_vectorlEEventListCompcLcLEventListCompDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventListComp::EventListCompData>[nElements] : new vector<EventListComp::EventListCompData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventListCompcLcLEventListCompDatagR(void *p) {
      delete (static_cast<vector<EventListComp::EventListCompData>*>(p));
   }
   static void deleteArray_vectorlEEventListCompcLcLEventListCompDatagR(void *p) {
      delete [] (static_cast<vector<EventListComp::EventListCompData>*>(p));
   }
   static void destruct_vectorlEEventListCompcLcLEventListCompDatagR(void *p) {
      typedef vector<EventListComp::EventListCompData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EventListComp::EventListCompData>

namespace {
  void TriggerDictionaryInitialization_EventListCompDict_Impl() {
    static const char* headers[] = {
"Utility/EventListComp.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EventListCompDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/EventListComp.hh")))  EventListComp;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EventListCompDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/EventListComp.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventListComp", payloadCode, "@",
"EventListComp::EventListCompData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EventListCompDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EventListCompDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EventListCompDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EventListCompDict() {
  TriggerDictionaryInitialization_EventListCompDict_Impl();
}
