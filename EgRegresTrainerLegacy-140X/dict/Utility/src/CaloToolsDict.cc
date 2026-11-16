// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdICaloToolsDict
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
#include "Utility/CaloTools.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *CaloTools_Dictionary();
   static void CaloTools_TClassManip(TClass*);
   static void delete_CaloTools(void *p);
   static void deleteArray_CaloTools(void *p);
   static void destruct_CaloTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloTools*)
   {
      ::CaloTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloTools));
      static ::ROOT::TGenericClassInfo 
         instance("CaloTools", "Utility/CaloTools.hh", 7,
                  typeid(::CaloTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloTools_Dictionary, isa_proxy, 4,
                  sizeof(::CaloTools) );
      instance.SetDelete(&delete_CaloTools);
      instance.SetDeleteArray(&deleteArray_CaloTools);
      instance.SetDestructor(&destruct_CaloTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloTools*)
   {
      return GenerateInitInstanceLocal(static_cast<::CaloTools*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CaloTools*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::CaloTools*>(nullptr))->GetClass();
      CaloTools_TClassManip(theClass);
   return theClass;
   }

   static void CaloTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloTools(void *p) {
      delete (static_cast<::CaloTools*>(p));
   }
   static void deleteArray_CaloTools(void *p) {
      delete [] (static_cast<::CaloTools*>(p));
   }
   static void destruct_CaloTools(void *p) {
      typedef ::CaloTools current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CaloTools

namespace {
  void TriggerDictionaryInitialization_CaloToolsDict_Impl() {
    static const char* headers[] = {
"Utility/CaloTools.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CaloToolsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/CaloTools.hh")))  CaloTools;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CaloToolsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/CaloTools.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CaloTools", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CaloToolsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CaloToolsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CaloToolsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CaloToolsDict() {
  TriggerDictionaryInitialization_CaloToolsDict_Impl();
}
