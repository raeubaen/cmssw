// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIAnaFuncsDict
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
#include "Utility/AnaFuncs.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *pairlETH1mUcOTH1mUgR_Dictionary();
   static void pairlETH1mUcOTH1mUgR_TClassManip(TClass*);
   static void *new_pairlETH1mUcOTH1mUgR(void *p = nullptr);
   static void *newArray_pairlETH1mUcOTH1mUgR(Long_t size, void *p);
   static void delete_pairlETH1mUcOTH1mUgR(void *p);
   static void deleteArray_pairlETH1mUcOTH1mUgR(void *p);
   static void destruct_pairlETH1mUcOTH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<TH1*,TH1*>*)
   {
      pair<TH1*,TH1*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<TH1*,TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<TH1*,TH1*>", "string", 185,
                  typeid(pair<TH1*,TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlETH1mUcOTH1mUgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<TH1*,TH1*>) );
      instance.SetNew(&new_pairlETH1mUcOTH1mUgR);
      instance.SetNewArray(&newArray_pairlETH1mUcOTH1mUgR);
      instance.SetDelete(&delete_pairlETH1mUcOTH1mUgR);
      instance.SetDeleteArray(&deleteArray_pairlETH1mUcOTH1mUgR);
      instance.SetDestructor(&destruct_pairlETH1mUcOTH1mUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<TH1*,TH1*>","std::pair<TH1*, TH1*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<TH1*,TH1*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlETH1mUcOTH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<TH1*,TH1*>*>(nullptr))->GetClass();
      pairlETH1mUcOTH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlETH1mUcOTH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnaFuncs*)
   {
      ::AnaFuncs *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AnaFuncs >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AnaFuncs", ::AnaFuncs::Class_Version(), "Utility/AnaFuncs.hh", 30,
                  typeid(::AnaFuncs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AnaFuncs::Dictionary, isa_proxy, 4,
                  sizeof(::AnaFuncs) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnaFuncs*)
   {
      return GenerateInitInstanceLocal(static_cast<::AnaFuncs*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AnaFuncs*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *AnaFuncscLcLGoodLumiChecker_Dictionary();
   static void AnaFuncscLcLGoodLumiChecker_TClassManip(TClass*);
   static void *new_AnaFuncscLcLGoodLumiChecker(void *p = nullptr);
   static void *newArray_AnaFuncscLcLGoodLumiChecker(Long_t size, void *p);
   static void delete_AnaFuncscLcLGoodLumiChecker(void *p);
   static void deleteArray_AnaFuncscLcLGoodLumiChecker(void *p);
   static void destruct_AnaFuncscLcLGoodLumiChecker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnaFuncs::GoodLumiChecker*)
   {
      ::AnaFuncs::GoodLumiChecker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AnaFuncs::GoodLumiChecker));
      static ::ROOT::TGenericClassInfo 
         instance("AnaFuncs::GoodLumiChecker", "EgRegresTrainerLegacy-140X/Utility/AnaFuncs.hh", 78,
                  typeid(::AnaFuncs::GoodLumiChecker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AnaFuncscLcLGoodLumiChecker_Dictionary, isa_proxy, 4,
                  sizeof(::AnaFuncs::GoodLumiChecker) );
      instance.SetNew(&new_AnaFuncscLcLGoodLumiChecker);
      instance.SetNewArray(&newArray_AnaFuncscLcLGoodLumiChecker);
      instance.SetDelete(&delete_AnaFuncscLcLGoodLumiChecker);
      instance.SetDeleteArray(&deleteArray_AnaFuncscLcLGoodLumiChecker);
      instance.SetDestructor(&destruct_AnaFuncscLcLGoodLumiChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnaFuncs::GoodLumiChecker*)
   {
      return GenerateInitInstanceLocal(static_cast<::AnaFuncs::GoodLumiChecker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AnaFuncs::GoodLumiChecker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AnaFuncscLcLGoodLumiChecker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AnaFuncs::GoodLumiChecker*>(nullptr))->GetClass();
      AnaFuncscLcLGoodLumiChecker_TClassManip(theClass);
   return theClass;
   }

   static void AnaFuncscLcLGoodLumiChecker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AnaFuncscLcLLumiData_Dictionary();
   static void AnaFuncscLcLLumiData_TClassManip(TClass*);
   static void *new_AnaFuncscLcLLumiData(void *p = nullptr);
   static void *newArray_AnaFuncscLcLLumiData(Long_t size, void *p);
   static void delete_AnaFuncscLcLLumiData(void *p);
   static void deleteArray_AnaFuncscLcLLumiData(void *p);
   static void destruct_AnaFuncscLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnaFuncs::LumiData*)
   {
      ::AnaFuncs::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AnaFuncs::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("AnaFuncs::LumiData", "EgRegresTrainerLegacy-140X/Utility/AnaFuncs.hh", 134,
                  typeid(::AnaFuncs::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AnaFuncscLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::AnaFuncs::LumiData) );
      instance.SetNew(&new_AnaFuncscLcLLumiData);
      instance.SetNewArray(&newArray_AnaFuncscLcLLumiData);
      instance.SetDelete(&delete_AnaFuncscLcLLumiData);
      instance.SetDeleteArray(&deleteArray_AnaFuncscLcLLumiData);
      instance.SetDestructor(&destruct_AnaFuncscLcLLumiData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnaFuncs::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::AnaFuncs::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AnaFuncs::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AnaFuncscLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AnaFuncs::LumiData*>(nullptr))->GetClass();
      AnaFuncscLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void AnaFuncscLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AnaFuncs::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AnaFuncs::Class_Name()
{
   return "AnaFuncs";
}

//______________________________________________________________________________
const char *AnaFuncs::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnaFuncs*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AnaFuncs::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AnaFuncs*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnaFuncs::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnaFuncs*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnaFuncs::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AnaFuncs*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlETH1mUcOTH1mUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<TH1*,TH1*> : new pair<TH1*,TH1*>;
   }
   static void *newArray_pairlETH1mUcOTH1mUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<TH1*,TH1*>[nElements] : new pair<TH1*,TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlETH1mUcOTH1mUgR(void *p) {
      delete (static_cast<pair<TH1*,TH1*>*>(p));
   }
   static void deleteArray_pairlETH1mUcOTH1mUgR(void *p) {
      delete [] (static_cast<pair<TH1*,TH1*>*>(p));
   }
   static void destruct_pairlETH1mUcOTH1mUgR(void *p) {
      typedef pair<TH1*,TH1*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<TH1*,TH1*>

//______________________________________________________________________________
void AnaFuncs::Streamer(TBuffer &R__b)
{
   // Stream an object of class AnaFuncs.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AnaFuncs::Class(),this);
   } else {
      R__b.WriteClassBuffer(AnaFuncs::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::AnaFuncs

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnaFuncscLcLGoodLumiChecker(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::AnaFuncs::GoodLumiChecker : new ::AnaFuncs::GoodLumiChecker;
   }
   static void *newArray_AnaFuncscLcLGoodLumiChecker(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::AnaFuncs::GoodLumiChecker[nElements] : new ::AnaFuncs::GoodLumiChecker[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnaFuncscLcLGoodLumiChecker(void *p) {
      delete (static_cast<::AnaFuncs::GoodLumiChecker*>(p));
   }
   static void deleteArray_AnaFuncscLcLGoodLumiChecker(void *p) {
      delete [] (static_cast<::AnaFuncs::GoodLumiChecker*>(p));
   }
   static void destruct_AnaFuncscLcLGoodLumiChecker(void *p) {
      typedef ::AnaFuncs::GoodLumiChecker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AnaFuncs::GoodLumiChecker

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnaFuncscLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::AnaFuncs::LumiData : new ::AnaFuncs::LumiData;
   }
   static void *newArray_AnaFuncscLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::AnaFuncs::LumiData[nElements] : new ::AnaFuncs::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnaFuncscLcLLumiData(void *p) {
      delete (static_cast<::AnaFuncs::LumiData*>(p));
   }
   static void deleteArray_AnaFuncscLcLLumiData(void *p) {
      delete [] (static_cast<::AnaFuncs::LumiData*>(p));
   }
   static void destruct_AnaFuncscLcLLumiData(void *p) {
      typedef ::AnaFuncs::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AnaFuncs::LumiData

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 423,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<int> >*>(nullptr))->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete (static_cast<vector<vector<int> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<int> >*>(p));
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEpairlEintcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEintcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEintcOfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEintcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEintcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEintcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEintcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<int,float> >*)
   {
      vector<pair<int,float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<int,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<int,float> >", -2, "vector", 423,
                  typeid(vector<pair<int,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEintcOfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<int,float> >) );
      instance.SetNew(&new_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEintcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEintcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<int,float> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<int,float> >","std::vector<std::pair<int, float>, std::allocator<std::pair<int, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<int,float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEintcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<int,float> >*>(nullptr))->GetClass();
      vectorlEpairlEintcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEintcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<int,float> > : new vector<pair<int,float> >;
   }
   static void *newArray_vectorlEpairlEintcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<int,float> >[nElements] : new vector<pair<int,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      delete (static_cast<vector<pair<int,float> >*>(p));
   }
   static void deleteArray_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<int,float> >*>(p));
   }
   static void destruct_vectorlEpairlEintcOfloatgRsPgR(void *p) {
      typedef vector<pair<int,float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<int,float> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 423,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_Dictionary();
   static void vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p);
   static void deleteArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p);
   static void destruct_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<AnaFuncs::GoodLumiChecker::GoodLumiData>*)
   {
      vector<AnaFuncs::GoodLumiChecker::GoodLumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<AnaFuncs::GoodLumiChecker::GoodLumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<AnaFuncs::GoodLumiChecker::GoodLumiData>", -2, "vector", 423,
                  typeid(vector<AnaFuncs::GoodLumiChecker::GoodLumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<AnaFuncs::GoodLumiChecker::GoodLumiData>) );
      instance.SetNew(&new_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR);
      instance.SetDelete(&delete_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<AnaFuncs::GoodLumiChecker::GoodLumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<AnaFuncs::GoodLumiChecker::GoodLumiData>","std::vector<AnaFuncs::GoodLumiChecker::GoodLumiData, std::allocator<AnaFuncs::GoodLumiChecker::GoodLumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<AnaFuncs::GoodLumiChecker::GoodLumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<AnaFuncs::GoodLumiChecker::GoodLumiData>*>(nullptr))->GetClass();
      vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<AnaFuncs::GoodLumiChecker::GoodLumiData> : new vector<AnaFuncs::GoodLumiChecker::GoodLumiData>;
   }
   static void *newArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<AnaFuncs::GoodLumiChecker::GoodLumiData>[nElements] : new vector<AnaFuncs::GoodLumiChecker::GoodLumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p) {
      delete (static_cast<vector<AnaFuncs::GoodLumiChecker::GoodLumiData>*>(p));
   }
   static void deleteArray_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p) {
      delete [] (static_cast<vector<AnaFuncs::GoodLumiChecker::GoodLumiData>*>(p));
   }
   static void destruct_vectorlEAnaFuncscLcLGoodLumiCheckercLcLGoodLumiDatagR(void *p) {
      typedef vector<AnaFuncs::GoodLumiChecker::GoodLumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<AnaFuncs::GoodLumiChecker::GoodLumiData>

namespace ROOT {
   static TClass *maplEstringcOTTreemUgR_Dictionary();
   static void maplEstringcOTTreemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTTreemUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTTreemUgR(Long_t size, void *p);
   static void delete_maplEstringcOTTreemUgR(void *p);
   static void deleteArray_maplEstringcOTTreemUgR(void *p);
   static void destruct_maplEstringcOTTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TTree*>*)
   {
      map<string,TTree*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TTree*>", -2, "map", 100,
                  typeid(map<string,TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTTreemUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,TTree*>) );
      instance.SetNew(&new_maplEstringcOTTreemUgR);
      instance.SetNewArray(&newArray_maplEstringcOTTreemUgR);
      instance.SetDelete(&delete_maplEstringcOTTreemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTTreemUgR);
      instance.SetDestructor(&destruct_maplEstringcOTTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TTree*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,TTree*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TTree*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TTree*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,TTree*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,TTree*>*>(nullptr))->GetClass();
      maplEstringcOTTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTTreemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TTree*> : new map<string,TTree*>;
   }
   static void *newArray_maplEstringcOTTreemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TTree*>[nElements] : new map<string,TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTTreemUgR(void *p) {
      delete (static_cast<map<string,TTree*>*>(p));
   }
   static void deleteArray_maplEstringcOTTreemUgR(void *p) {
      delete [] (static_cast<map<string,TTree*>*>(p));
   }
   static void destruct_maplEstringcOTTreemUgR(void *p) {
      typedef map<string,TTree*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,TTree*>

namespace {
  void TriggerDictionaryInitialization_AnaFuncsDict_Impl() {
    static const char* headers[] = {
"Utility/AnaFuncs.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "AnaFuncsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$Utility/AnaFuncs.hh")))  TH1;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace std{template <typename _CharT> struct __attribute__((annotate("$clingAutoload$bits/char_traits.h")))  __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
class __attribute__((annotate("$clingAutoload$Utility/AnaFuncs.hh")))  AnaFuncs;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AnaFuncsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/AnaFuncs.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AnaFuncs", payloadCode, "@",
"AnaFuncs::GoodLumiChecker", payloadCode, "@",
"AnaFuncs::LumiData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AnaFuncsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AnaFuncsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AnaFuncsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AnaFuncsDict() {
  TriggerDictionaryInitialization_AnaFuncsDict_Impl();
}
