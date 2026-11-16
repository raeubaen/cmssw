// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIEvtIndexLUTDict
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
#include "Utility/EvtIndexLUT.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *EvtIndexLUT_Dictionary();
   static void EvtIndexLUT_TClassManip(TClass*);
   static void *new_EvtIndexLUT(void *p = nullptr);
   static void *newArray_EvtIndexLUT(Long_t size, void *p);
   static void delete_EvtIndexLUT(void *p);
   static void deleteArray_EvtIndexLUT(void *p);
   static void destruct_EvtIndexLUT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtIndexLUT*)
   {
      ::EvtIndexLUT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtIndexLUT));
      static ::ROOT::TGenericClassInfo 
         instance("EvtIndexLUT", "Utility/EvtIndexLUT.hh", 14,
                  typeid(::EvtIndexLUT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtIndexLUT_Dictionary, isa_proxy, 4,
                  sizeof(::EvtIndexLUT) );
      instance.SetNew(&new_EvtIndexLUT);
      instance.SetNewArray(&newArray_EvtIndexLUT);
      instance.SetDelete(&delete_EvtIndexLUT);
      instance.SetDeleteArray(&deleteArray_EvtIndexLUT);
      instance.SetDestructor(&destruct_EvtIndexLUT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtIndexLUT*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtIndexLUT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtIndexLUT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT*>(nullptr))->GetClass();
      EvtIndexLUT_TClassManip(theClass);
   return theClass;
   }

   static void EvtIndexLUT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtIndexLUTcLcLEvtData_Dictionary();
   static void EvtIndexLUTcLcLEvtData_TClassManip(TClass*);
   static void *new_EvtIndexLUTcLcLEvtData(void *p = nullptr);
   static void *newArray_EvtIndexLUTcLcLEvtData(Long_t size, void *p);
   static void delete_EvtIndexLUTcLcLEvtData(void *p);
   static void deleteArray_EvtIndexLUTcLcLEvtData(void *p);
   static void destruct_EvtIndexLUTcLcLEvtData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtIndexLUT::EvtData*)
   {
      ::EvtIndexLUT::EvtData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtIndexLUT::EvtData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtIndexLUT::EvtData", "EgRegresTrainerLegacy-140X/Utility/EvtIndexLUT.hh", 35,
                  typeid(::EvtIndexLUT::EvtData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtIndexLUTcLcLEvtData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtIndexLUT::EvtData) );
      instance.SetNew(&new_EvtIndexLUTcLcLEvtData);
      instance.SetNewArray(&newArray_EvtIndexLUTcLcLEvtData);
      instance.SetDelete(&delete_EvtIndexLUTcLcLEvtData);
      instance.SetDeleteArray(&deleteArray_EvtIndexLUTcLcLEvtData);
      instance.SetDestructor(&destruct_EvtIndexLUTcLcLEvtData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtIndexLUT::EvtData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtIndexLUT::EvtData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::EvtData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtIndexLUTcLcLEvtData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::EvtData*>(nullptr))->GetClass();
      EvtIndexLUTcLcLEvtData_TClassManip(theClass);
   return theClass;
   }

   static void EvtIndexLUTcLcLEvtData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtIndexLUTcLcLLumiData_Dictionary();
   static void EvtIndexLUTcLcLLumiData_TClassManip(TClass*);
   static void *new_EvtIndexLUTcLcLLumiData(void *p = nullptr);
   static void *newArray_EvtIndexLUTcLcLLumiData(Long_t size, void *p);
   static void delete_EvtIndexLUTcLcLLumiData(void *p);
   static void deleteArray_EvtIndexLUTcLcLLumiData(void *p);
   static void destruct_EvtIndexLUTcLcLLumiData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtIndexLUT::LumiData*)
   {
      ::EvtIndexLUT::LumiData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtIndexLUT::LumiData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtIndexLUT::LumiData", "EgRegresTrainerLegacy-140X/Utility/EvtIndexLUT.hh", 50,
                  typeid(::EvtIndexLUT::LumiData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtIndexLUTcLcLLumiData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtIndexLUT::LumiData) );
      instance.SetNew(&new_EvtIndexLUTcLcLLumiData);
      instance.SetNewArray(&newArray_EvtIndexLUTcLcLLumiData);
      instance.SetDelete(&delete_EvtIndexLUTcLcLLumiData);
      instance.SetDeleteArray(&deleteArray_EvtIndexLUTcLcLLumiData);
      instance.SetDestructor(&destruct_EvtIndexLUTcLcLLumiData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtIndexLUT::LumiData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtIndexLUT::LumiData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::LumiData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtIndexLUTcLcLLumiData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::LumiData*>(nullptr))->GetClass();
      EvtIndexLUTcLcLLumiData_TClassManip(theClass);
   return theClass;
   }

   static void EvtIndexLUTcLcLLumiData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EvtIndexLUTcLcLRunData_Dictionary();
   static void EvtIndexLUTcLcLRunData_TClassManip(TClass*);
   static void *new_EvtIndexLUTcLcLRunData(void *p = nullptr);
   static void *newArray_EvtIndexLUTcLcLRunData(Long_t size, void *p);
   static void delete_EvtIndexLUTcLcLRunData(void *p);
   static void deleteArray_EvtIndexLUTcLcLRunData(void *p);
   static void destruct_EvtIndexLUTcLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EvtIndexLUT::RunData*)
   {
      ::EvtIndexLUT::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EvtIndexLUT::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("EvtIndexLUT::RunData", "EgRegresTrainerLegacy-140X/Utility/EvtIndexLUT.hh", 69,
                  typeid(::EvtIndexLUT::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EvtIndexLUTcLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::EvtIndexLUT::RunData) );
      instance.SetNew(&new_EvtIndexLUTcLcLRunData);
      instance.SetNewArray(&newArray_EvtIndexLUTcLcLRunData);
      instance.SetDelete(&delete_EvtIndexLUTcLcLRunData);
      instance.SetDeleteArray(&deleteArray_EvtIndexLUTcLcLRunData);
      instance.SetDestructor(&destruct_EvtIndexLUTcLcLRunData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EvtIndexLUT::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EvtIndexLUT::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EvtIndexLUTcLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EvtIndexLUT::RunData*>(nullptr))->GetClass();
      EvtIndexLUTcLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void EvtIndexLUTcLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtIndexLUT(void *p) {
      return  p ? new(p) ::EvtIndexLUT : new ::EvtIndexLUT;
   }
   static void *newArray_EvtIndexLUT(Long_t nElements, void *p) {
      return p ? new(p) ::EvtIndexLUT[nElements] : new ::EvtIndexLUT[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtIndexLUT(void *p) {
      delete (static_cast<::EvtIndexLUT*>(p));
   }
   static void deleteArray_EvtIndexLUT(void *p) {
      delete [] (static_cast<::EvtIndexLUT*>(p));
   }
   static void destruct_EvtIndexLUT(void *p) {
      typedef ::EvtIndexLUT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtIndexLUT

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtIndexLUTcLcLEvtData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::EvtData : new ::EvtIndexLUT::EvtData;
   }
   static void *newArray_EvtIndexLUTcLcLEvtData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::EvtData[nElements] : new ::EvtIndexLUT::EvtData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtIndexLUTcLcLEvtData(void *p) {
      delete (static_cast<::EvtIndexLUT::EvtData*>(p));
   }
   static void deleteArray_EvtIndexLUTcLcLEvtData(void *p) {
      delete [] (static_cast<::EvtIndexLUT::EvtData*>(p));
   }
   static void destruct_EvtIndexLUTcLcLEvtData(void *p) {
      typedef ::EvtIndexLUT::EvtData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtIndexLUT::EvtData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtIndexLUTcLcLLumiData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::LumiData : new ::EvtIndexLUT::LumiData;
   }
   static void *newArray_EvtIndexLUTcLcLLumiData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::LumiData[nElements] : new ::EvtIndexLUT::LumiData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtIndexLUTcLcLLumiData(void *p) {
      delete (static_cast<::EvtIndexLUT::LumiData*>(p));
   }
   static void deleteArray_EvtIndexLUTcLcLLumiData(void *p) {
      delete [] (static_cast<::EvtIndexLUT::LumiData*>(p));
   }
   static void destruct_EvtIndexLUTcLcLLumiData(void *p) {
      typedef ::EvtIndexLUT::LumiData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtIndexLUT::LumiData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EvtIndexLUTcLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::RunData : new ::EvtIndexLUT::RunData;
   }
   static void *newArray_EvtIndexLUTcLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::EvtIndexLUT::RunData[nElements] : new ::EvtIndexLUT::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EvtIndexLUTcLcLRunData(void *p) {
      delete (static_cast<::EvtIndexLUT::RunData*>(p));
   }
   static void deleteArray_EvtIndexLUTcLcLRunData(void *p) {
      delete [] (static_cast<::EvtIndexLUT::RunData*>(p));
   }
   static void destruct_EvtIndexLUTcLcLRunData(void *p) {
      typedef ::EvtIndexLUT::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EvtIndexLUT::RunData

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 423,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned long>","std::vector<unsigned long, std::allocator<unsigned long> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr))->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete (static_cast<vector<unsigned long>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<vector<unsigned long>*>(p));
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 423,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

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
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlEEvtIndexLUTcLcLRunDatagR_Dictionary();
   static void vectorlEEvtIndexLUTcLcLRunDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtIndexLUTcLcLRunDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtIndexLUTcLcLRunDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtIndexLUTcLcLRunDatagR(void *p);
   static void deleteArray_vectorlEEvtIndexLUTcLcLRunDatagR(void *p);
   static void destruct_vectorlEEvtIndexLUTcLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtIndexLUT::RunData>*)
   {
      vector<EvtIndexLUT::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtIndexLUT::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtIndexLUT::RunData>", -2, "vector", 423,
                  typeid(vector<EvtIndexLUT::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtIndexLUTcLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtIndexLUT::RunData>) );
      instance.SetNew(&new_vectorlEEvtIndexLUTcLcLRunDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtIndexLUTcLcLRunDatagR);
      instance.SetDelete(&delete_vectorlEEvtIndexLUTcLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtIndexLUTcLcLRunDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtIndexLUTcLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtIndexLUT::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtIndexLUT::RunData>","std::vector<EvtIndexLUT::RunData, std::allocator<EvtIndexLUT::RunData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtIndexLUTcLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::RunData>*>(nullptr))->GetClass();
      vectorlEEvtIndexLUTcLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtIndexLUTcLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtIndexLUTcLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::RunData> : new vector<EvtIndexLUT::RunData>;
   }
   static void *newArray_vectorlEEvtIndexLUTcLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::RunData>[nElements] : new vector<EvtIndexLUT::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtIndexLUTcLcLRunDatagR(void *p) {
      delete (static_cast<vector<EvtIndexLUT::RunData>*>(p));
   }
   static void deleteArray_vectorlEEvtIndexLUTcLcLRunDatagR(void *p) {
      delete [] (static_cast<vector<EvtIndexLUT::RunData>*>(p));
   }
   static void destruct_vectorlEEvtIndexLUTcLcLRunDatagR(void *p) {
      typedef vector<EvtIndexLUT::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtIndexLUT::RunData>

namespace ROOT {
   static TClass *vectorlEEvtIndexLUTcLcLLumiDatagR_Dictionary();
   static void vectorlEEvtIndexLUTcLcLLumiDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtIndexLUTcLcLLumiDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p);
   static void deleteArray_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p);
   static void destruct_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtIndexLUT::LumiData>*)
   {
      vector<EvtIndexLUT::LumiData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtIndexLUT::LumiData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtIndexLUT::LumiData>", -2, "vector", 423,
                  typeid(vector<EvtIndexLUT::LumiData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtIndexLUTcLcLLumiDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtIndexLUT::LumiData>) );
      instance.SetNew(&new_vectorlEEvtIndexLUTcLcLLumiDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtIndexLUTcLcLLumiDatagR);
      instance.SetDelete(&delete_vectorlEEvtIndexLUTcLcLLumiDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtIndexLUTcLcLLumiDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtIndexLUTcLcLLumiDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtIndexLUT::LumiData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtIndexLUT::LumiData>","std::vector<EvtIndexLUT::LumiData, std::allocator<EvtIndexLUT::LumiData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::LumiData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtIndexLUTcLcLLumiDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::LumiData>*>(nullptr))->GetClass();
      vectorlEEvtIndexLUTcLcLLumiDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtIndexLUTcLcLLumiDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::LumiData> : new vector<EvtIndexLUT::LumiData>;
   }
   static void *newArray_vectorlEEvtIndexLUTcLcLLumiDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::LumiData>[nElements] : new vector<EvtIndexLUT::LumiData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p) {
      delete (static_cast<vector<EvtIndexLUT::LumiData>*>(p));
   }
   static void deleteArray_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p) {
      delete [] (static_cast<vector<EvtIndexLUT::LumiData>*>(p));
   }
   static void destruct_vectorlEEvtIndexLUTcLcLLumiDatagR(void *p) {
      typedef vector<EvtIndexLUT::LumiData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtIndexLUT::LumiData>

namespace ROOT {
   static TClass *vectorlEEvtIndexLUTcLcLEvtDatagR_Dictionary();
   static void vectorlEEvtIndexLUTcLcLEvtDatagR_TClassManip(TClass*);
   static void *new_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p = nullptr);
   static void *newArray_vectorlEEvtIndexLUTcLcLEvtDatagR(Long_t size, void *p);
   static void delete_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p);
   static void deleteArray_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p);
   static void destruct_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EvtIndexLUT::EvtData>*)
   {
      vector<EvtIndexLUT::EvtData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EvtIndexLUT::EvtData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EvtIndexLUT::EvtData>", -2, "vector", 423,
                  typeid(vector<EvtIndexLUT::EvtData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEvtIndexLUTcLcLEvtDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EvtIndexLUT::EvtData>) );
      instance.SetNew(&new_vectorlEEvtIndexLUTcLcLEvtDatagR);
      instance.SetNewArray(&newArray_vectorlEEvtIndexLUTcLcLEvtDatagR);
      instance.SetDelete(&delete_vectorlEEvtIndexLUTcLcLEvtDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEvtIndexLUTcLcLEvtDatagR);
      instance.SetDestructor(&destruct_vectorlEEvtIndexLUTcLcLEvtDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EvtIndexLUT::EvtData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EvtIndexLUT::EvtData>","std::vector<EvtIndexLUT::EvtData, std::allocator<EvtIndexLUT::EvtData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::EvtData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEvtIndexLUTcLcLEvtDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EvtIndexLUT::EvtData>*>(nullptr))->GetClass();
      vectorlEEvtIndexLUTcLcLEvtDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEvtIndexLUTcLcLEvtDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::EvtData> : new vector<EvtIndexLUT::EvtData>;
   }
   static void *newArray_vectorlEEvtIndexLUTcLcLEvtDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EvtIndexLUT::EvtData>[nElements] : new vector<EvtIndexLUT::EvtData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p) {
      delete (static_cast<vector<EvtIndexLUT::EvtData>*>(p));
   }
   static void deleteArray_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p) {
      delete [] (static_cast<vector<EvtIndexLUT::EvtData>*>(p));
   }
   static void destruct_vectorlEEvtIndexLUTcLcLEvtDatagR(void *p) {
      typedef vector<EvtIndexLUT::EvtData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EvtIndexLUT::EvtData>

namespace {
  void TriggerDictionaryInitialization_EvtIndexLUTDict_Impl() {
    static const char* headers[] = {
"Utility/EvtIndexLUT.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EvtIndexLUTDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/EvtIndexLUT.hh")))  EvtIndexLUT;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EvtIndexLUTDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/EvtIndexLUT.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EvtIndexLUT", payloadCode, "@",
"EvtIndexLUT::EvtData", payloadCode, "@",
"EvtIndexLUT::LumiData", payloadCode, "@",
"EvtIndexLUT::RunData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EvtIndexLUTDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EvtIndexLUTDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EvtIndexLUTDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EvtIndexLUTDict() {
  TriggerDictionaryInitialization_EvtIndexLUTDict_Impl();
}
