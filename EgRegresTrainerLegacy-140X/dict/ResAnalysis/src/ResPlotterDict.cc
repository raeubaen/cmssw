// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIResAnalysisdIsrcdIResPlotterDict
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
#include "ResAnalysis/ResPlotter.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ResPlotter_Dictionary();
   static void ResPlotter_TClassManip(TClass*);
   static void *new_ResPlotter(void *p = nullptr);
   static void *newArray_ResPlotter(Long_t size, void *p);
   static void delete_ResPlotter(void *p);
   static void deleteArray_ResPlotter(void *p);
   static void destruct_ResPlotter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ResPlotter*)
   {
      ::ResPlotter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ResPlotter));
      static ::ROOT::TGenericClassInfo 
         instance("ResPlotter", "ResAnalysis/ResPlotter.hh", 49,
                  typeid(::ResPlotter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ResPlotter_Dictionary, isa_proxy, 4,
                  sizeof(::ResPlotter) );
      instance.SetNew(&new_ResPlotter);
      instance.SetNewArray(&newArray_ResPlotter);
      instance.SetDelete(&delete_ResPlotter);
      instance.SetDeleteArray(&deleteArray_ResPlotter);
      instance.SetDestructor(&destruct_ResPlotter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ResPlotter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ResPlotter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ResPlotter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ResPlotter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ResPlotter*>(nullptr))->GetClass();
      ResPlotter_TClassManip(theClass);
   return theClass;
   }

   static void ResPlotter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ResPlottercLcLConfig_Dictionary();
   static void ResPlottercLcLConfig_TClassManip(TClass*);
   static void *new_ResPlottercLcLConfig(void *p = nullptr);
   static void *newArray_ResPlottercLcLConfig(Long_t size, void *p);
   static void delete_ResPlottercLcLConfig(void *p);
   static void deleteArray_ResPlottercLcLConfig(void *p);
   static void destruct_ResPlottercLcLConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ResPlotter::Config*)
   {
      ::ResPlotter::Config *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ResPlotter::Config));
      static ::ROOT::TGenericClassInfo 
         instance("ResPlotter::Config", "EgRegresTrainerLegacy-140X/ResAnalysis/ResPlotter.hh", 52,
                  typeid(::ResPlotter::Config), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ResPlottercLcLConfig_Dictionary, isa_proxy, 4,
                  sizeof(::ResPlotter::Config) );
      instance.SetNew(&new_ResPlottercLcLConfig);
      instance.SetNewArray(&newArray_ResPlottercLcLConfig);
      instance.SetDelete(&delete_ResPlottercLcLConfig);
      instance.SetDeleteArray(&deleteArray_ResPlottercLcLConfig);
      instance.SetDestructor(&destruct_ResPlottercLcLConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ResPlotter::Config*)
   {
      return GenerateInitInstanceLocal(static_cast<::ResPlotter::Config*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ResPlotter::Config*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ResPlottercLcLConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ResPlotter::Config*>(nullptr))->GetClass();
      ResPlottercLcLConfig_TClassManip(theClass);
   return theClass;
   }

   static void ResPlottercLcLConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ResPlotter(void *p) {
      return  p ? new(p) ::ResPlotter : new ::ResPlotter;
   }
   static void *newArray_ResPlotter(Long_t nElements, void *p) {
      return p ? new(p) ::ResPlotter[nElements] : new ::ResPlotter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ResPlotter(void *p) {
      delete (static_cast<::ResPlotter*>(p));
   }
   static void deleteArray_ResPlotter(void *p) {
      delete [] (static_cast<::ResPlotter*>(p));
   }
   static void destruct_ResPlotter(void *p) {
      typedef ::ResPlotter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ResPlotter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ResPlottercLcLConfig(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ResPlotter::Config : new ::ResPlotter::Config;
   }
   static void *newArray_ResPlottercLcLConfig(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ResPlotter::Config[nElements] : new ::ResPlotter::Config[nElements];
   }
   // Wrapper around operator delete
   static void delete_ResPlottercLcLConfig(void *p) {
      delete (static_cast<::ResPlotter::Config*>(p));
   }
   static void deleteArray_ResPlottercLcLConfig(void *p) {
      delete [] (static_cast<::ResPlotter::Config*>(p));
   }
   static void destruct_ResPlottercLcLConfig(void *p) {
      typedef ::ResPlotter::Config current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ResPlotter::Config

namespace ROOT {
   static TClass *vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<pair<string,string> > >*)
   {
      vector<vector<pair<string,string> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<pair<string,string> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<pair<string,string> > >", -2, "vector", 423,
                  typeid(vector<vector<pair<string,string> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<pair<string,string> > >) );
      instance.SetNew(&new_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<pair<string,string> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<pair<string,string> > >","std::vector<std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::allocator<std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<pair<string,string> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<pair<string,string> > >*>(nullptr))->GetClass();
      vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<string,string> > > : new vector<vector<pair<string,string> > >;
   }
   static void *newArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<string,string> > >[nElements] : new vector<vector<pair<string,string> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p) {
      delete (static_cast<vector<vector<pair<string,string> > >*>(p));
   }
   static void deleteArray_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<pair<string,string> > >*>(p));
   }
   static void destruct_vectorlEvectorlEpairlEstringcOstringgRsPgRsPgR(void *p) {
      typedef vector<vector<pair<string,string> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<pair<string,string> > >

namespace ROOT {
   static TClass *vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<pair<TH2*,string> > >*)
   {
      vector<vector<pair<TH2*,string> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<pair<TH2*,string> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<pair<TH2*,string> > >", -2, "vector", 423,
                  typeid(vector<vector<pair<TH2*,string> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<pair<TH2*,string> > >) );
      instance.SetNew(&new_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<pair<TH2*,string> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<pair<TH2*,string> > >","std::vector<std::vector<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >, std::allocator<std::vector<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<pair<TH2*,string> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<pair<TH2*,string> > >*>(nullptr))->GetClass();
      vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<TH2*,string> > > : new vector<vector<pair<TH2*,string> > >;
   }
   static void *newArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<TH2*,string> > >[nElements] : new vector<vector<pair<TH2*,string> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p) {
      delete (static_cast<vector<vector<pair<TH2*,string> > >*>(p));
   }
   static void deleteArray_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<pair<TH2*,string> > >*>(p));
   }
   static void destruct_vectorlEvectorlEpairlETH2mUcOstringgRsPgRsPgR(void *p) {
      typedef vector<vector<pair<TH2*,string> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<pair<TH2*,string> > >

namespace ROOT {
   static TClass *vectorlEpairlEstringcOstringgRsPgR_Dictionary();
   static void vectorlEpairlEstringcOstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEstringcOstringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEstringcOstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEstringcOstringgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEstringcOstringgRsPgR(void *p);
   static void destruct_vectorlEpairlEstringcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<string,string> >*)
   {
      vector<pair<string,string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<string,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<string,string> >", -2, "vector", 423,
                  typeid(vector<pair<string,string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEstringcOstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<string,string> >) );
      instance.SetNew(&new_vectorlEpairlEstringcOstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEstringcOstringgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEstringcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEstringcOstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEstringcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<string,string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<string,string> >","std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<string,string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEstringcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<string,string> >*>(nullptr))->GetClass();
      vectorlEpairlEstringcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEstringcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEstringcOstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<string,string> > : new vector<pair<string,string> >;
   }
   static void *newArray_vectorlEpairlEstringcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<string,string> >[nElements] : new vector<pair<string,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEstringcOstringgRsPgR(void *p) {
      delete (static_cast<vector<pair<string,string> >*>(p));
   }
   static void deleteArray_vectorlEpairlEstringcOstringgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<string,string> >*>(p));
   }
   static void destruct_vectorlEpairlEstringcOstringgRsPgR(void *p) {
      typedef vector<pair<string,string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<string,string> >

namespace ROOT {
   static TClass *vectorlEpairlETH2mUcOstringgRsPgR_Dictionary();
   static void vectorlEpairlETH2mUcOstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlETH2mUcOstringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlETH2mUcOstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlETH2mUcOstringgRsPgR(void *p);
   static void deleteArray_vectorlEpairlETH2mUcOstringgRsPgR(void *p);
   static void destruct_vectorlEpairlETH2mUcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<TH2*,string> >*)
   {
      vector<pair<TH2*,string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<TH2*,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<TH2*,string> >", -2, "vector", 423,
                  typeid(vector<pair<TH2*,string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlETH2mUcOstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<TH2*,string> >) );
      instance.SetNew(&new_vectorlEpairlETH2mUcOstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlETH2mUcOstringgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlETH2mUcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlETH2mUcOstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlETH2mUcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<TH2*,string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<TH2*,string> >","std::vector<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<TH2*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<TH2*,string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlETH2mUcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<TH2*,string> >*>(nullptr))->GetClass();
      vectorlEpairlETH2mUcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlETH2mUcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlETH2mUcOstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TH2*,string> > : new vector<pair<TH2*,string> >;
   }
   static void *newArray_vectorlEpairlETH2mUcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TH2*,string> >[nElements] : new vector<pair<TH2*,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlETH2mUcOstringgRsPgR(void *p) {
      delete (static_cast<vector<pair<TH2*,string> >*>(p));
   }
   static void deleteArray_vectorlEpairlETH2mUcOstringgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<TH2*,string> >*>(p));
   }
   static void destruct_vectorlEpairlETH2mUcOstringgRsPgR(void *p) {
      typedef vector<pair<TH2*,string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<TH2*,string> >

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

namespace {
  void TriggerDictionaryInitialization_ResPlotterDict_Impl() {
    static const char* headers[] = {
"ResAnalysis/ResPlotter.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ResPlotterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$ResAnalysis/ResPlotter.hh")))  ResPlotter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ResPlotterDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ResAnalysis/ResPlotter.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ResPlotter", payloadCode, "@",
"ResPlotter::Config", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ResPlotterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ResPlotterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ResPlotterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ResPlotterDict() {
  TriggerDictionaryInitialization_ResPlotterDict_Impl();
}
