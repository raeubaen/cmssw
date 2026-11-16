// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIEvtLUTDict
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
#include "Utility/EvtLUT.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_Dictionary();
   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p);
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p);
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)
   {
      ::EvtLUT<vector<pair<TLorentzVector,int> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EvtLUT<vector<pair<TLorentzVector,int> > > >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<pair<TLorentzVector,int> > >", ::EvtLUT<vector<pair<TLorentzVector,int> > >::Class_Version(), "Utility/EvtLUT.hh", 14,
                  typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<pair<TLorentzVector,int> > >) );
      instance.SetNew(&new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR);
      instance.SetDelete(&delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >","EvtLUT<std::vector<std::pair<TLorentzVector,int> > >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >","EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >*>(nullptr))->GetClass();
      EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_Dictionary();
   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p);
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p);
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*)
   {
      ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 23,
                  typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData) );
      instance.SetNew(&new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData);
      instance.SetDelete(&delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData","EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::EvtData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData","EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::EvtData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*>(nullptr))->GetClass();
      EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_Dictionary();
   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p);
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p);
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*)
   {
      ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 38,
                  typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData) );
      instance.SetNew(&new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData);
      instance.SetDelete(&delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData","EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::LumiData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData","EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::LumiData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*>(nullptr))->GetClass();
      EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_Dictionary();
   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p);
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p);
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*)
   {
      ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<pair<TLorentzVector,int> > >::RunData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 57,
                  typeid(::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData) );
      instance.SetNew(&new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData);
      instance.SetDelete(&delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::RunData","EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::RunData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<pair<TLorentzVector,int> > >::RunData","EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::RunData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*>(nullptr))->GetClass();
      EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEintgR_Dictionary();
   static void EvtLUTlEintgR_TClassManip(TClass*);
   static void *new_EvtLUTlEintgR(void *p = nullptr);
   static void *newArray_EvtLUTlEintgR(Long_t size, void *p);
   static void delete_EvtLUTlEintgR(void *p);
   static void deleteArray_EvtLUTlEintgR(void *p);
   static void destruct_EvtLUTlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<int>*)
   {
      ::EvtLUT<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EvtLUT<int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<int>", ::EvtLUT<int>::Class_Version(), "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 14,
                  typeid(::EvtLUT<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<int>) );
      instance.SetNew(&new_EvtLUTlEintgR);
      instance.SetNewArray(&newArray_EvtLUTlEintgR);
      instance.SetDelete(&delete_EvtLUTlEintgR);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEintgR);
      instance.SetDestructor(&destruct_EvtLUTlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>*>(nullptr))->GetClass();
      EvtLUTlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEintgRcLcLEvtData_Dictionary();
   static void EvtLUTlEintgRcLcLEvtData_TClassManip(TClass*);
   static void *new_EvtLUTlEintgRcLcLEvtData(void *p = nullptr);
   static void *newArray_EvtLUTlEintgRcLcLEvtData(Long_t size, void *p);
   static void delete_EvtLUTlEintgRcLcLEvtData(void *p);
   static void deleteArray_EvtLUTlEintgRcLcLEvtData(void *p);
   static void destruct_EvtLUTlEintgRcLcLEvtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<int>::EvtData*)
   {
      ::EvtLUT<int>::EvtData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<int>::EvtData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<int>::EvtData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 23,
                  typeid(::EvtLUT<int>::EvtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEintgRcLcLEvtData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<int>::EvtData) );
      instance.SetNew(&new_EvtLUTlEintgRcLcLEvtData);
      instance.SetNewArray(&newArray_EvtLUTlEintgRcLcLEvtData);
      instance.SetDelete(&delete_EvtLUTlEintgRcLcLEvtData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEintgRcLcLEvtData);
      instance.SetDestructor(&destruct_EvtLUTlEintgRcLcLEvtData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<int>::EvtData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<int>::EvtData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::EvtData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEintgRcLcLEvtData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::EvtData*>(nullptr))->GetClass();
      EvtLUTlEintgRcLcLEvtData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEintgRcLcLEvtData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEintgRcLcLLumiData_Dictionary();
   static void EvtLUTlEintgRcLcLLumiData_TClassManip(TClass*);
   static void *new_EvtLUTlEintgRcLcLLumiData(void *p = nullptr);
   static void *newArray_EvtLUTlEintgRcLcLLumiData(Long_t size, void *p);
   static void delete_EvtLUTlEintgRcLcLLumiData(void *p);
   static void deleteArray_EvtLUTlEintgRcLcLLumiData(void *p);
   static void destruct_EvtLUTlEintgRcLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<int>::LumiData*)
   {
      ::EvtLUT<int>::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<int>::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<int>::LumiData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 38,
                  typeid(::EvtLUT<int>::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEintgRcLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<int>::LumiData) );
      instance.SetNew(&new_EvtLUTlEintgRcLcLLumiData);
      instance.SetNewArray(&newArray_EvtLUTlEintgRcLcLLumiData);
      instance.SetDelete(&delete_EvtLUTlEintgRcLcLLumiData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEintgRcLcLLumiData);
      instance.SetDestructor(&destruct_EvtLUTlEintgRcLcLLumiData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<int>::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<int>::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEintgRcLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::LumiData*>(nullptr))->GetClass();
      EvtLUTlEintgRcLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEintgRcLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEintgRcLcLRunData_Dictionary();
   static void EvtLUTlEintgRcLcLRunData_TClassManip(TClass*);
   static void *new_EvtLUTlEintgRcLcLRunData(void *p = nullptr);
   static void *newArray_EvtLUTlEintgRcLcLRunData(Long_t size, void *p);
   static void delete_EvtLUTlEintgRcLcLRunData(void *p);
   static void deleteArray_EvtLUTlEintgRcLcLRunData(void *p);
   static void destruct_EvtLUTlEintgRcLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<int>::RunData*)
   {
      ::EvtLUT<int>::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<int>::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<int>::RunData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 57,
                  typeid(::EvtLUT<int>::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEintgRcLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<int>::RunData) );
      instance.SetNew(&new_EvtLUTlEintgRcLcLRunData);
      instance.SetNewArray(&newArray_EvtLUTlEintgRcLcLRunData);
      instance.SetDelete(&delete_EvtLUTlEintgRcLcLRunData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEintgRcLcLRunData);
      instance.SetDestructor(&destruct_EvtLUTlEintgRcLcLRunData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<int>::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<int>::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEintgRcLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<int>::RunData*>(nullptr))->GetClass();
      EvtLUTlEintgRcLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEintgRcLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlETLorentzVectorgR_Dictionary();
   static void EvtLUTlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_EvtLUTlETLorentzVectorgR(void *p = nullptr);
   static void *newArray_EvtLUTlETLorentzVectorgR(Long_t size, void *p);
   static void delete_EvtLUTlETLorentzVectorgR(void *p);
   static void deleteArray_EvtLUTlETLorentzVectorgR(void *p);
   static void destruct_EvtLUTlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<TLorentzVector>*)
   {
      ::EvtLUT<TLorentzVector> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EvtLUT<TLorentzVector> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<TLorentzVector>", ::EvtLUT<TLorentzVector>::Class_Version(), "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 14,
                  typeid(::EvtLUT<TLorentzVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlETLorentzVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<TLorentzVector>) );
      instance.SetNew(&new_EvtLUTlETLorentzVectorgR);
      instance.SetNewArray(&newArray_EvtLUTlETLorentzVectorgR);
      instance.SetDelete(&delete_EvtLUTlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_EvtLUTlETLorentzVectorgR);
      instance.SetDestructor(&destruct_EvtLUTlETLorentzVectorgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<TLorentzVector>*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<TLorentzVector>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>*>(nullptr))->GetClass();
      EvtLUTlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlETLorentzVectorgRcLcLEvtData_Dictionary();
   static void EvtLUTlETLorentzVectorgRcLcLEvtData_TClassManip(TClass*);
   static void *new_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p = nullptr);
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLEvtData(Long_t size, void *p);
   static void delete_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p);
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p);
   static void destruct_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<TLorentzVector>::EvtData*)
   {
      ::EvtLUT<TLorentzVector>::EvtData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<TLorentzVector>::EvtData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<TLorentzVector>::EvtData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 23,
                  typeid(::EvtLUT<TLorentzVector>::EvtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlETLorentzVectorgRcLcLEvtData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<TLorentzVector>::EvtData) );
      instance.SetNew(&new_EvtLUTlETLorentzVectorgRcLcLEvtData);
      instance.SetNewArray(&newArray_EvtLUTlETLorentzVectorgRcLcLEvtData);
      instance.SetDelete(&delete_EvtLUTlETLorentzVectorgRcLcLEvtData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlETLorentzVectorgRcLcLEvtData);
      instance.SetDestructor(&destruct_EvtLUTlETLorentzVectorgRcLcLEvtData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<TLorentzVector>::EvtData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<TLorentzVector>::EvtData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::EvtData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlETLorentzVectorgRcLcLEvtData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::EvtData*>(nullptr))->GetClass();
      EvtLUTlETLorentzVectorgRcLcLEvtData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlETLorentzVectorgRcLcLEvtData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlETLorentzVectorgRcLcLLumiData_Dictionary();
   static void EvtLUTlETLorentzVectorgRcLcLLumiData_TClassManip(TClass*);
   static void *new_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p = nullptr);
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLLumiData(Long_t size, void *p);
   static void delete_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p);
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p);
   static void destruct_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<TLorentzVector>::LumiData*)
   {
      ::EvtLUT<TLorentzVector>::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<TLorentzVector>::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<TLorentzVector>::LumiData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 38,
                  typeid(::EvtLUT<TLorentzVector>::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlETLorentzVectorgRcLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<TLorentzVector>::LumiData) );
      instance.SetNew(&new_EvtLUTlETLorentzVectorgRcLcLLumiData);
      instance.SetNewArray(&newArray_EvtLUTlETLorentzVectorgRcLcLLumiData);
      instance.SetDelete(&delete_EvtLUTlETLorentzVectorgRcLcLLumiData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlETLorentzVectorgRcLcLLumiData);
      instance.SetDestructor(&destruct_EvtLUTlETLorentzVectorgRcLcLLumiData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<TLorentzVector>::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<TLorentzVector>::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlETLorentzVectorgRcLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::LumiData*>(nullptr))->GetClass();
      EvtLUTlETLorentzVectorgRcLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlETLorentzVectorgRcLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlETLorentzVectorgRcLcLRunData_Dictionary();
   static void EvtLUTlETLorentzVectorgRcLcLRunData_TClassManip(TClass*);
   static void *new_EvtLUTlETLorentzVectorgRcLcLRunData(void *p = nullptr);
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLRunData(Long_t size, void *p);
   static void delete_EvtLUTlETLorentzVectorgRcLcLRunData(void *p);
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLRunData(void *p);
   static void destruct_EvtLUTlETLorentzVectorgRcLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<TLorentzVector>::RunData*)
   {
      ::EvtLUT<TLorentzVector>::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<TLorentzVector>::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<TLorentzVector>::RunData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 57,
                  typeid(::EvtLUT<TLorentzVector>::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlETLorentzVectorgRcLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<TLorentzVector>::RunData) );
      instance.SetNew(&new_EvtLUTlETLorentzVectorgRcLcLRunData);
      instance.SetNewArray(&newArray_EvtLUTlETLorentzVectorgRcLcLRunData);
      instance.SetDelete(&delete_EvtLUTlETLorentzVectorgRcLcLRunData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlETLorentzVectorgRcLcLRunData);
      instance.SetDestructor(&destruct_EvtLUTlETLorentzVectorgRcLcLRunData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<TLorentzVector>::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<TLorentzVector>::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlETLorentzVectorgRcLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<TLorentzVector>::RunData*>(nullptr))->GetClass();
      EvtLUTlETLorentzVectorgRcLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlETLorentzVectorgRcLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgR_Dictionary();
   static void EvtLUTlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgR(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p);
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p);
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<TLorentzVector> >*)
   {
      ::EvtLUT<vector<TLorentzVector> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EvtLUT<vector<TLorentzVector> > >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<TLorentzVector> >", ::EvtLUT<vector<TLorentzVector> >::Class_Version(), "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 14,
                  typeid(::EvtLUT<vector<TLorentzVector> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlETLorentzVectorgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<TLorentzVector> >) );
      instance.SetNew(&new_EvtLUTlEvectorlETLorentzVectorgRsPgR);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlETLorentzVectorgRsPgR);
      instance.SetDelete(&delete_EvtLUTlEvectorlETLorentzVectorgRsPgR);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgR);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlETLorentzVectorgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >","EvtLUT<std::vector<TLorentzVector> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >","EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<TLorentzVector> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<TLorentzVector> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >*>(nullptr))->GetClass();
      EvtLUTlEvectorlETLorentzVectorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_Dictionary();
   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p);
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p);
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<TLorentzVector> >::EvtData*)
   {
      ::EvtLUT<vector<TLorentzVector> >::EvtData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<TLorentzVector> >::EvtData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<TLorentzVector> >::EvtData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 23,
                  typeid(::EvtLUT<vector<TLorentzVector> >::EvtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<TLorentzVector> >::EvtData) );
      instance.SetNew(&new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData);
      instance.SetDelete(&delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::EvtData","EvtLUT<std::vector<TLorentzVector> >::EvtData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::EvtData","EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::EvtData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<TLorentzVector> >::EvtData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<TLorentzVector> >::EvtData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::EvtData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::EvtData*>(nullptr))->GetClass();
      EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_Dictionary();
   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p);
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p);
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<TLorentzVector> >::LumiData*)
   {
      ::EvtLUT<vector<TLorentzVector> >::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<TLorentzVector> >::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<TLorentzVector> >::LumiData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 38,
                  typeid(::EvtLUT<vector<TLorentzVector> >::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<TLorentzVector> >::LumiData) );
      instance.SetNew(&new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData);
      instance.SetDelete(&delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::LumiData","EvtLUT<std::vector<TLorentzVector> >::LumiData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::LumiData","EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::LumiData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<TLorentzVector> >::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<TLorentzVector> >::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::LumiData*>(nullptr))->GetClass();
      EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_Dictionary();
   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_TClassManip(TClass*);
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p = nullptr);
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(Long_t size, void *p);
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p);
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p);
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtLUT<vector<TLorentzVector> >::RunData*)
   {
      ::EvtLUT<vector<TLorentzVector> >::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtLUT<vector<TLorentzVector> >::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtLUT<vector<TLorentzVector> >::RunData", "EgRegresTrainerLegacy-140X/Utility/EvtLUT.hh", 57,
                  typeid(::EvtLUT<vector<TLorentzVector> >::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtLUT<vector<TLorentzVector> >::RunData) );
      instance.SetNew(&new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData);
      instance.SetNewArray(&newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData);
      instance.SetDelete(&delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData);
      instance.SetDeleteArray(&deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData);
      instance.SetDestructor(&destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::RunData","EvtLUT<std::vector<TLorentzVector> >::RunData"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("EvtLUT<vector<TLorentzVector> >::RunData","EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::RunData"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtLUT<vector<TLorentzVector> >::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtLUT<vector<TLorentzVector> >::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtLUT<vector<TLorentzVector> >::RunData*>(nullptr))->GetClass();
      EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr EvtLUT<vector<pair<TLorentzVector,int> > >::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *EvtLUT<vector<pair<TLorentzVector,int> > >::Class_Name()
{
   return "EvtLUT<vector<pair<TLorentzVector,int> > >";
}

//______________________________________________________________________________
template <> const char *EvtLUT<vector<pair<TLorentzVector,int> > >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int EvtLUT<vector<pair<TLorentzVector,int> > >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *EvtLUT<vector<pair<TLorentzVector,int> > >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *EvtLUT<vector<pair<TLorentzVector,int> > >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<pair<TLorentzVector,int> > >*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr EvtLUT<int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *EvtLUT<int>::Class_Name()
{
   return "EvtLUT<int>";
}

//______________________________________________________________________________
template <> const char *EvtLUT<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int EvtLUT<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *EvtLUT<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *EvtLUT<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr EvtLUT<TLorentzVector>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *EvtLUT<TLorentzVector>::Class_Name()
{
   return "EvtLUT<TLorentzVector>";
}

//______________________________________________________________________________
template <> const char *EvtLUT<TLorentzVector>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<TLorentzVector>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int EvtLUT<TLorentzVector>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<TLorentzVector>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *EvtLUT<TLorentzVector>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<TLorentzVector>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *EvtLUT<TLorentzVector>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<TLorentzVector>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr EvtLUT<vector<TLorentzVector> >::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *EvtLUT<vector<TLorentzVector> >::Class_Name()
{
   return "EvtLUT<vector<TLorentzVector> >";
}

//______________________________________________________________________________
template <> const char *EvtLUT<vector<TLorentzVector> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<TLorentzVector> >*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int EvtLUT<vector<TLorentzVector> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<TLorentzVector> >*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *EvtLUT<vector<TLorentzVector> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<TLorentzVector> >*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *EvtLUT<vector<TLorentzVector> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EvtLUT<vector<TLorentzVector> >*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> void EvtLUT<vector<pair<TLorentzVector,int> > >::Streamer(TBuffer &R__b)
{
   // Stream an object of class EvtLUT<vector<pair<TLorentzVector,int> > >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EvtLUT<vector<pair<TLorentzVector,int> > >::Class(),this);
   } else {
      R__b.WriteClassBuffer(EvtLUT<vector<pair<TLorentzVector,int> > >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p) {
      return  p ? new(p) ::EvtLUT<vector<pair<TLorentzVector,int> > > : new ::EvtLUT<vector<pair<TLorentzVector,int> > >;
   }
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::EvtLUT<vector<pair<TLorentzVector,int> > >[nElements] : new ::EvtLUT<vector<pair<TLorentzVector,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p) {
      delete (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p) {
      delete [] (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >*>(p));
   }
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgR(void *p) {
      typedef ::EvtLUT<vector<pair<TLorentzVector,int> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<pair<TLorentzVector,int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData;
   }
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData[nElements] : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p) {
      delete (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData*>(p));
   }
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtData(void *p) {
      typedef ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData;
   }
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData[nElements] : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p) {
      delete (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData*>(p));
   }
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiData(void *p) {
      typedef ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData;
   }
   static void *newArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData[nElements] : new ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p) {
      delete (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData*>(p));
   }
   static void destruct_EvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunData(void *p) {
      typedef ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<pair<TLorentzVector,int> > >::RunData

//______________________________________________________________________________
template <> void EvtLUT<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class EvtLUT<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EvtLUT<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(EvtLUT<int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEintgR(void *p) {
      return  p ? new(p) ::EvtLUT<int> : new ::EvtLUT<int>;
   }
   static void *newArray_EvtLUTlEintgR(Long_t nElements, void *p) {
      return p ? new(p) ::EvtLUT<int>[nElements] : new ::EvtLUT<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEintgR(void *p) {
      delete (static_cast<::EvtLUT<int>*>(p));
   }
   static void deleteArray_EvtLUTlEintgR(void *p) {
      delete [] (static_cast<::EvtLUT<int>*>(p));
   }
   static void destruct_EvtLUTlEintgR(void *p) {
      typedef ::EvtLUT<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEintgRcLcLEvtData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::EvtData : new ::EvtLUT<int>::EvtData;
   }
   static void *newArray_EvtLUTlEintgRcLcLEvtData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::EvtData[nElements] : new ::EvtLUT<int>::EvtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEintgRcLcLEvtData(void *p) {
      delete (static_cast<::EvtLUT<int>::EvtData*>(p));
   }
   static void deleteArray_EvtLUTlEintgRcLcLEvtData(void *p) {
      delete [] (static_cast<::EvtLUT<int>::EvtData*>(p));
   }
   static void destruct_EvtLUTlEintgRcLcLEvtData(void *p) {
      typedef ::EvtLUT<int>::EvtData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<int>::EvtData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEintgRcLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::LumiData : new ::EvtLUT<int>::LumiData;
   }
   static void *newArray_EvtLUTlEintgRcLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::LumiData[nElements] : new ::EvtLUT<int>::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEintgRcLcLLumiData(void *p) {
      delete (static_cast<::EvtLUT<int>::LumiData*>(p));
   }
   static void deleteArray_EvtLUTlEintgRcLcLLumiData(void *p) {
      delete [] (static_cast<::EvtLUT<int>::LumiData*>(p));
   }
   static void destruct_EvtLUTlEintgRcLcLLumiData(void *p) {
      typedef ::EvtLUT<int>::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<int>::LumiData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEintgRcLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::RunData : new ::EvtLUT<int>::RunData;
   }
   static void *newArray_EvtLUTlEintgRcLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<int>::RunData[nElements] : new ::EvtLUT<int>::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEintgRcLcLRunData(void *p) {
      delete (static_cast<::EvtLUT<int>::RunData*>(p));
   }
   static void deleteArray_EvtLUTlEintgRcLcLRunData(void *p) {
      delete [] (static_cast<::EvtLUT<int>::RunData*>(p));
   }
   static void destruct_EvtLUTlEintgRcLcLRunData(void *p) {
      typedef ::EvtLUT<int>::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<int>::RunData

//______________________________________________________________________________
template <> void EvtLUT<TLorentzVector>::Streamer(TBuffer &R__b)
{
   // Stream an object of class EvtLUT<TLorentzVector>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EvtLUT<TLorentzVector>::Class(),this);
   } else {
      R__b.WriteClassBuffer(EvtLUT<TLorentzVector>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlETLorentzVectorgR(void *p) {
      return  p ? new(p) ::EvtLUT<TLorentzVector> : new ::EvtLUT<TLorentzVector>;
   }
   static void *newArray_EvtLUTlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? new(p) ::EvtLUT<TLorentzVector>[nElements] : new ::EvtLUT<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlETLorentzVectorgR(void *p) {
      delete (static_cast<::EvtLUT<TLorentzVector>*>(p));
   }
   static void deleteArray_EvtLUTlETLorentzVectorgR(void *p) {
      delete [] (static_cast<::EvtLUT<TLorentzVector>*>(p));
   }
   static void destruct_EvtLUTlETLorentzVectorgR(void *p) {
      typedef ::EvtLUT<TLorentzVector> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<TLorentzVector>

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::EvtData : new ::EvtLUT<TLorentzVector>::EvtData;
   }
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLEvtData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::EvtData[nElements] : new ::EvtLUT<TLorentzVector>::EvtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p) {
      delete (static_cast<::EvtLUT<TLorentzVector>::EvtData*>(p));
   }
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p) {
      delete [] (static_cast<::EvtLUT<TLorentzVector>::EvtData*>(p));
   }
   static void destruct_EvtLUTlETLorentzVectorgRcLcLEvtData(void *p) {
      typedef ::EvtLUT<TLorentzVector>::EvtData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<TLorentzVector>::EvtData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::LumiData : new ::EvtLUT<TLorentzVector>::LumiData;
   }
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::LumiData[nElements] : new ::EvtLUT<TLorentzVector>::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p) {
      delete (static_cast<::EvtLUT<TLorentzVector>::LumiData*>(p));
   }
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p) {
      delete [] (static_cast<::EvtLUT<TLorentzVector>::LumiData*>(p));
   }
   static void destruct_EvtLUTlETLorentzVectorgRcLcLLumiData(void *p) {
      typedef ::EvtLUT<TLorentzVector>::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<TLorentzVector>::LumiData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlETLorentzVectorgRcLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::RunData : new ::EvtLUT<TLorentzVector>::RunData;
   }
   static void *newArray_EvtLUTlETLorentzVectorgRcLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<TLorentzVector>::RunData[nElements] : new ::EvtLUT<TLorentzVector>::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlETLorentzVectorgRcLcLRunData(void *p) {
      delete (static_cast<::EvtLUT<TLorentzVector>::RunData*>(p));
   }
   static void deleteArray_EvtLUTlETLorentzVectorgRcLcLRunData(void *p) {
      delete [] (static_cast<::EvtLUT<TLorentzVector>::RunData*>(p));
   }
   static void destruct_EvtLUTlETLorentzVectorgRcLcLRunData(void *p) {
      typedef ::EvtLUT<TLorentzVector>::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<TLorentzVector>::RunData

//______________________________________________________________________________
template <> void EvtLUT<vector<TLorentzVector> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class EvtLUT<vector<TLorentzVector> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EvtLUT<vector<TLorentzVector> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(EvtLUT<vector<TLorentzVector> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p) {
      return  p ? new(p) ::EvtLUT<vector<TLorentzVector> > : new ::EvtLUT<vector<TLorentzVector> >;
   }
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::EvtLUT<vector<TLorentzVector> >[nElements] : new ::EvtLUT<vector<TLorentzVector> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete (static_cast<::EvtLUT<vector<TLorentzVector> >*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete [] (static_cast<::EvtLUT<vector<TLorentzVector> >*>(p));
   }
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgR(void *p) {
      typedef ::EvtLUT<vector<TLorentzVector> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<TLorentzVector> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::EvtData : new ::EvtLUT<vector<TLorentzVector> >::EvtData;
   }
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::EvtData[nElements] : new ::EvtLUT<vector<TLorentzVector> >::EvtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p) {
      delete (static_cast<::EvtLUT<vector<TLorentzVector> >::EvtData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<TLorentzVector> >::EvtData*>(p));
   }
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtData(void *p) {
      typedef ::EvtLUT<vector<TLorentzVector> >::EvtData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<TLorentzVector> >::EvtData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::LumiData : new ::EvtLUT<vector<TLorentzVector> >::LumiData;
   }
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::LumiData[nElements] : new ::EvtLUT<vector<TLorentzVector> >::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p) {
      delete (static_cast<::EvtLUT<vector<TLorentzVector> >::LumiData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<TLorentzVector> >::LumiData*>(p));
   }
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiData(void *p) {
      typedef ::EvtLUT<vector<TLorentzVector> >::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<TLorentzVector> >::LumiData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::RunData : new ::EvtLUT<vector<TLorentzVector> >::RunData;
   }
   static void *newArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtLUT<vector<TLorentzVector> >::RunData[nElements] : new ::EvtLUT<vector<TLorentzVector> >::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p) {
      delete (static_cast<::EvtLUT<vector<TLorentzVector> >::RunData*>(p));
   }
   static void deleteArray_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p) {
      delete [] (static_cast<::EvtLUT<vector<TLorentzVector> >::RunData*>(p));
   }
   static void destruct_EvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunData(void *p) {
      typedef ::EvtLUT<vector<TLorentzVector> >::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtLUT<vector<TLorentzVector> >::RunData

namespace ROOT {
   static TClass *vectorlEpairlETLorentzVectorcOintgRsPgR_Dictionary();
   static void vectorlEpairlETLorentzVectorcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlETLorentzVectorcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<TLorentzVector,int> >*)
   {
      vector<pair<TLorentzVector,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<TLorentzVector,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<TLorentzVector,int> >", -2, "vector", 423,
                  typeid(vector<pair<TLorentzVector,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlETLorentzVectorcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<TLorentzVector,int> >) );
      instance.SetNew(&new_vectorlEpairlETLorentzVectorcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlETLorentzVectorcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlETLorentzVectorcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlETLorentzVectorcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlETLorentzVectorcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<TLorentzVector,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<TLorentzVector,int> >","std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<TLorentzVector,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlETLorentzVectorcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<TLorentzVector,int> >*>(nullptr))->GetClass();
      vectorlEpairlETLorentzVectorcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlETLorentzVectorcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TLorentzVector,int> > : new vector<pair<TLorentzVector,int> >;
   }
   static void *newArray_vectorlEpairlETLorentzVectorcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TLorentzVector,int> >[nElements] : new vector<pair<TLorentzVector,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p) {
      delete (static_cast<vector<pair<TLorentzVector,int> >*>(p));
   }
   static void deleteArray_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<TLorentzVector,int> >*>(p));
   }
   static void destruct_vectorlEpairlETLorentzVectorcOintgRsPgR(void *p) {
      typedef vector<pair<TLorentzVector,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<TLorentzVector,int> >

namespace ROOT {
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = nullptr);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 423,
                  typeid(vector<TLorentzVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TLorentzVector>","std::vector<TLorentzVector, std::allocator<TLorentzVector> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TLorentzVector>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TLorentzVector>*>(nullptr))->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete (static_cast<vector<TLorentzVector>*>(p));
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] (static_cast<vector<TLorentzVector>*>(p));
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>*)
   {
      vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>","std::vector<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::RunData, std::allocator<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::RunData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData> : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>[nElements] : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLRunDatagR(void *p) {
      typedef vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<pair<TLorentzVector,int> > >::RunData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>*)
   {
      vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>","std::vector<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::LumiData, std::allocator<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::LumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData> : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>[nElements] : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLLumiDatagR(void *p) {
      typedef vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<pair<TLorentzVector,int> > >::LumiData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>*)
   {
      vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>","std::vector<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::EvtData, std::allocator<EvtLUT<std::vector<std::pair<TLorentzVector, int>, std::allocator<std::pair<TLorentzVector, int> > > >::EvtData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData> : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>[nElements] : new vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlEpairlETLorentzVectorcOintgRsPgRsPgRcLcLEvtDatagR(void *p) {
      typedef vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<pair<TLorentzVector,int> > >::EvtData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<TLorentzVector> >::RunData>*)
   {
      vector<EvtLUT<vector<TLorentzVector> >::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<TLorentzVector> >::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<TLorentzVector> >::RunData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<TLorentzVector> >::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<TLorentzVector> >::RunData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<TLorentzVector> >::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<TLorentzVector> >::RunData>","std::vector<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::RunData, std::allocator<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::RunData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::RunData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::RunData> : new vector<EvtLUT<vector<TLorentzVector> >::RunData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::RunData>[nElements] : new vector<EvtLUT<vector<TLorentzVector> >::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<TLorentzVector> >::RunData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<TLorentzVector> >::RunData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLRunDatagR(void *p) {
      typedef vector<EvtLUT<vector<TLorentzVector> >::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<TLorentzVector> >::RunData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<TLorentzVector> >::LumiData>*)
   {
      vector<EvtLUT<vector<TLorentzVector> >::LumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<TLorentzVector> >::LumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<TLorentzVector> >::LumiData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<TLorentzVector> >::LumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<TLorentzVector> >::LumiData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<TLorentzVector> >::LumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<TLorentzVector> >::LumiData>","std::vector<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::LumiData, std::allocator<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::LumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::LumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::LumiData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::LumiData> : new vector<EvtLUT<vector<TLorentzVector> >::LumiData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::LumiData>[nElements] : new vector<EvtLUT<vector<TLorentzVector> >::LumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<TLorentzVector> >::LumiData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<TLorentzVector> >::LumiData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLLumiDatagR(void *p) {
      typedef vector<EvtLUT<vector<TLorentzVector> >::LumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<TLorentzVector> >::LumiData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_Dictionary();
   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<vector<TLorentzVector> >::EvtData>*)
   {
      vector<EvtLUT<vector<TLorentzVector> >::EvtData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<vector<TLorentzVector> >::EvtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<vector<TLorentzVector> >::EvtData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<vector<TLorentzVector> >::EvtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<vector<TLorentzVector> >::EvtData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<vector<TLorentzVector> >::EvtData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<vector<TLorentzVector> >::EvtData>","std::vector<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::EvtData, std::allocator<EvtLUT<std::vector<TLorentzVector, std::allocator<TLorentzVector> > >::EvtData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::EvtData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<vector<TLorentzVector> >::EvtData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::EvtData> : new vector<EvtLUT<vector<TLorentzVector> >::EvtData>;
   }
   static void *newArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<vector<TLorentzVector> >::EvtData>[nElements] : new vector<EvtLUT<vector<TLorentzVector> >::EvtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<vector<TLorentzVector> >::EvtData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<vector<TLorentzVector> >::EvtData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEvectorlETLorentzVectorgRsPgRcLcLEvtDatagR(void *p) {
      typedef vector<EvtLUT<vector<TLorentzVector> >::EvtData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<vector<TLorentzVector> >::EvtData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEintgRcLcLRunDatagR_Dictionary();
   static void vectorlEEvtLUTlEintgRcLcLRunDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEintgRcLcLRunDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<int>::RunData>*)
   {
      vector<EvtLUT<int>::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<int>::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<int>::RunData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<int>::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEintgRcLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<int>::RunData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEintgRcLcLRunDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEintgRcLcLRunDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEintgRcLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEintgRcLcLRunDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEintgRcLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<int>::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<int>::RunData>","std::vector<EvtLUT<int>::RunData, std::allocator<EvtLUT<int>::RunData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEintgRcLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::RunData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEintgRcLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEintgRcLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::RunData> : new vector<EvtLUT<int>::RunData>;
   }
   static void *newArray_vectorlEEvtLUTlEintgRcLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::RunData>[nElements] : new vector<EvtLUT<int>::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<int>::RunData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<int>::RunData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEintgRcLcLRunDatagR(void *p) {
      typedef vector<EvtLUT<int>::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<int>::RunData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEintgRcLcLLumiDatagR_Dictionary();
   static void vectorlEEvtLUTlEintgRcLcLLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<int>::LumiData>*)
   {
      vector<EvtLUT<int>::LumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<int>::LumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<int>::LumiData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<int>::LumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEintgRcLcLLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<int>::LumiData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEintgRcLcLLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEintgRcLcLLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEintgRcLcLLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<int>::LumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<int>::LumiData>","std::vector<EvtLUT<int>::LumiData, std::allocator<EvtLUT<int>::LumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::LumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEintgRcLcLLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::LumiData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEintgRcLcLLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEintgRcLcLLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::LumiData> : new vector<EvtLUT<int>::LumiData>;
   }
   static void *newArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::LumiData>[nElements] : new vector<EvtLUT<int>::LumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<int>::LumiData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<int>::LumiData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEintgRcLcLLumiDatagR(void *p) {
      typedef vector<EvtLUT<int>::LumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<int>::LumiData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlEintgRcLcLEvtDatagR_Dictionary();
   static void vectorlEEvtLUTlEintgRcLcLEvtDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p);
   static void destruct_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<int>::EvtData>*)
   {
      vector<EvtLUT<int>::EvtData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<int>::EvtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<int>::EvtData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<int>::EvtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlEintgRcLcLEvtDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<int>::EvtData>) );
      instance.SetNew(&new_vectorlEEvtLUTlEintgRcLcLEvtDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlEintgRcLcLEvtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlEintgRcLcLEvtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<int>::EvtData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<int>::EvtData>","std::vector<EvtLUT<int>::EvtData, std::allocator<EvtLUT<int>::EvtData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::EvtData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlEintgRcLcLEvtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<int>::EvtData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlEintgRcLcLEvtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlEintgRcLcLEvtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::EvtData> : new vector<EvtLUT<int>::EvtData>;
   }
   static void *newArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<int>::EvtData>[nElements] : new vector<EvtLUT<int>::EvtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<int>::EvtData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<int>::EvtData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlEintgRcLcLEvtDatagR(void *p) {
      typedef vector<EvtLUT<int>::EvtData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<int>::EvtData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_Dictionary();
   static void vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p);
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<TLorentzVector>::RunData>*)
   {
      vector<EvtLUT<TLorentzVector>::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<TLorentzVector>::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<TLorentzVector>::RunData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<TLorentzVector>::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<TLorentzVector>::RunData>) );
      instance.SetNew(&new_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<TLorentzVector>::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<TLorentzVector>::RunData>","std::vector<EvtLUT<TLorentzVector>::RunData, std::allocator<EvtLUT<TLorentzVector>::RunData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::RunData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::RunData> : new vector<EvtLUT<TLorentzVector>::RunData>;
   }
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::RunData>[nElements] : new vector<EvtLUT<TLorentzVector>::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<TLorentzVector>::RunData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<TLorentzVector>::RunData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLRunDatagR(void *p) {
      typedef vector<EvtLUT<TLorentzVector>::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<TLorentzVector>::RunData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_Dictionary();
   static void vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p);
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<TLorentzVector>::LumiData>*)
   {
      vector<EvtLUT<TLorentzVector>::LumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<TLorentzVector>::LumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<TLorentzVector>::LumiData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<TLorentzVector>::LumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<TLorentzVector>::LumiData>) );
      instance.SetNew(&new_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<TLorentzVector>::LumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<TLorentzVector>::LumiData>","std::vector<EvtLUT<TLorentzVector>::LumiData, std::allocator<EvtLUT<TLorentzVector>::LumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::LumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::LumiData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::LumiData> : new vector<EvtLUT<TLorentzVector>::LumiData>;
   }
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::LumiData>[nElements] : new vector<EvtLUT<TLorentzVector>::LumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<TLorentzVector>::LumiData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<TLorentzVector>::LumiData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLLumiDatagR(void *p) {
      typedef vector<EvtLUT<TLorentzVector>::LumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<TLorentzVector>::LumiData>

namespace ROOT {
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_Dictionary();
   static void vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p);
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p);
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtLUT<TLorentzVector>::EvtData>*)
   {
      vector<EvtLUT<TLorentzVector>::EvtData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtLUT<TLorentzVector>::EvtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtLUT<TLorentzVector>::EvtData>", -2, "vector", 423,
                  typeid(vector<EvtLUT<TLorentzVector>::EvtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtLUT<TLorentzVector>::EvtData>) );
      instance.SetNew(&new_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR);
      instance.SetDelete(&delete_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtLUT<TLorentzVector>::EvtData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtLUT<TLorentzVector>::EvtData>","std::vector<EvtLUT<TLorentzVector>::EvtData, std::allocator<EvtLUT<TLorentzVector>::EvtData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::EvtData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtLUT<TLorentzVector>::EvtData>*>(nullptr))->GetClass();
      vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::EvtData> : new vector<EvtLUT<TLorentzVector>::EvtData>;
   }
   static void *newArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtLUT<TLorentzVector>::EvtData>[nElements] : new vector<EvtLUT<TLorentzVector>::EvtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p) {
      delete (static_cast<vector<EvtLUT<TLorentzVector>::EvtData>*>(p));
   }
   static void deleteArray_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p) {
      delete [] (static_cast<vector<EvtLUT<TLorentzVector>::EvtData>*>(p));
   }
   static void destruct_vectorlEEvtLUTlETLorentzVectorgRcLcLEvtDatagR(void *p) {
      typedef vector<EvtLUT<TLorentzVector>::EvtData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtLUT<TLorentzVector>::EvtData>

namespace {
  void TriggerDictionaryInitialization_EvtLUTDict_Impl() {
    static const char* headers[] = {
"Utility/EvtLUT.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EvtLUTDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TLorentzVector.h")))  __attribute__((annotate("$clingAutoload$Utility/EvtLUT.hh")))  TLorentzVector;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
template <typename Payload> class __attribute__((annotate("$clingAutoload$Utility/EvtLUT.hh")))  EvtLUT;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EvtLUTDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/EvtLUT.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EvtLUT<TLorentzVector>", payloadCode, "@",
"EvtLUT<TLorentzVector>::EvtData", payloadCode, "@",
"EvtLUT<TLorentzVector>::LumiData", payloadCode, "@",
"EvtLUT<TLorentzVector>::RunData", payloadCode, "@",
"EvtLUT<int>", payloadCode, "@",
"EvtLUT<int>::EvtData", payloadCode, "@",
"EvtLUT<int>::LumiData", payloadCode, "@",
"EvtLUT<int>::RunData", payloadCode, "@",
"EvtLUT<std::vector<TLorentzVector> >", payloadCode, "@",
"EvtLUT<std::vector<TLorentzVector> >::EvtData", payloadCode, "@",
"EvtLUT<std::vector<TLorentzVector> >::LumiData", payloadCode, "@",
"EvtLUT<std::vector<TLorentzVector> >::RunData", payloadCode, "@",
"EvtLUT<std::vector<std::pair<TLorentzVector,int> > >", payloadCode, "@",
"EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::EvtData", payloadCode, "@",
"EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::LumiData", payloadCode, "@",
"EvtLUT<std::vector<std::pair<TLorentzVector,int> > >::RunData", payloadCode, "@",
"EvtLUT<vector<TLorentzVector> >", payloadCode, "@",
"EvtLUT<vector<pair<TLorentzVector,int> > >", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EvtLUTDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EvtLUTDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EvtLUTDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EvtLUTDict() {
  TriggerDictionaryInitialization_EvtLUTDict_Impl();
}
