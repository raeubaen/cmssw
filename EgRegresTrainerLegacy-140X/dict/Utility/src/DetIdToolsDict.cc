// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIDetIdToolsDict
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
#include "Utility/DetIdTools.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *DetIdTools_Dictionary();
   static void DetIdTools_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetIdTools*)
   {
      ::DetIdTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DetIdTools));
      static ::ROOT::TGenericClassInfo 
         instance("DetIdTools", "Utility/DetIdTools.hh", 12,
                  typeid(::DetIdTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DetIdTools_Dictionary, isa_proxy, 4,
                  sizeof(::DetIdTools) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetIdTools*)
   {
      return GenerateInitInstanceLocal(static_cast<::DetIdTools*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DetIdTools*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DetIdTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DetIdTools*>(nullptr))->GetClass();
      DetIdTools_TClassManip(theClass);
   return theClass;
   }

   static void DetIdTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DetIdToolscLcLEcalNavigator_Dictionary();
   static void DetIdToolscLcLEcalNavigator_TClassManip(TClass*);
   static void delete_DetIdToolscLcLEcalNavigator(void *p);
   static void deleteArray_DetIdToolscLcLEcalNavigator(void *p);
   static void destruct_DetIdToolscLcLEcalNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetIdTools::EcalNavigator*)
   {
      ::DetIdTools::EcalNavigator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DetIdTools::EcalNavigator));
      static ::ROOT::TGenericClassInfo 
         instance("DetIdTools::EcalNavigator", "EgRegresTrainerLegacy-140X/Utility/DetIdTools.hh", 16,
                  typeid(::DetIdTools::EcalNavigator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DetIdToolscLcLEcalNavigator_Dictionary, isa_proxy, 4,
                  sizeof(::DetIdTools::EcalNavigator) );
      instance.SetDelete(&delete_DetIdToolscLcLEcalNavigator);
      instance.SetDeleteArray(&deleteArray_DetIdToolscLcLEcalNavigator);
      instance.SetDestructor(&destruct_DetIdToolscLcLEcalNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetIdTools::EcalNavigator*)
   {
      return GenerateInitInstanceLocal(static_cast<::DetIdTools::EcalNavigator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DetIdTools::EcalNavigator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DetIdToolscLcLEcalNavigator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::DetIdTools::EcalNavigator*>(nullptr))->GetClass();
      DetIdToolscLcLEcalNavigator_TClassManip(theClass);
   return theClass;
   }

   static void DetIdToolscLcLEcalNavigator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::DetIdTools

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DetIdToolscLcLEcalNavigator(void *p) {
      delete (static_cast<::DetIdTools::EcalNavigator*>(p));
   }
   static void deleteArray_DetIdToolscLcLEcalNavigator(void *p) {
      delete [] (static_cast<::DetIdTools::EcalNavigator*>(p));
   }
   static void destruct_DetIdToolscLcLEcalNavigator(void *p) {
      typedef ::DetIdTools::EcalNavigator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DetIdTools::EcalNavigator

namespace {
  void TriggerDictionaryInitialization_DetIdToolsDict_Impl() {
    static const char* headers[] = {
"Utility/DetIdTools.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DetIdToolsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/DetIdTools.hh")))  DetIdTools;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DetIdToolsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/DetIdTools.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"DetIdTools", payloadCode, "@",
"DetIdTools::EcalNavigator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DetIdToolsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DetIdToolsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DetIdToolsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DetIdToolsDict() {
  TriggerDictionaryInitialization_DetIdToolsDict_Impl();
}
