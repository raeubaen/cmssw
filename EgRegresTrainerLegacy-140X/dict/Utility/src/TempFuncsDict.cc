// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdITempFuncsDict
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
#include "Utility/TempFuncs.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TempFuncs {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TempFuncs_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TempFuncs", 0 /*version*/, "Utility/TempFuncs.hh", 10,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TempFuncs_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TempFuncs_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace {
  void TriggerDictionaryInitialization_TempFuncsDict_Impl() {
    static const char* headers[] = {
"Utility/TempFuncs.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TempFuncsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TempFuncsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/TempFuncs.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TempFuncsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TempFuncsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TempFuncsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TempFuncsDict() {
  TriggerDictionaryInitialization_TempFuncsDict_Impl();
}
