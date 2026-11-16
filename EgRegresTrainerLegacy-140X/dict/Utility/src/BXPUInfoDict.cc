// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIUtilitydIsrcdIBXPUInfoDict
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
#include "Utility/BXPUInfo.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BXPUInfo(void *p = nullptr);
   static void *newArray_BXPUInfo(Long_t size, void *p);
   static void delete_BXPUInfo(void *p);
   static void deleteArray_BXPUInfo(void *p);
   static void destruct_BXPUInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXPUInfo*)
   {
      ::BXPUInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BXPUInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BXPUInfo", ::BXPUInfo::Class_Version(), "Utility/BXPUInfo.hh", 12,
                  typeid(::BXPUInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BXPUInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BXPUInfo) );
      instance.SetNew(&new_BXPUInfo);
      instance.SetNewArray(&newArray_BXPUInfo);
      instance.SetDelete(&delete_BXPUInfo);
      instance.SetDeleteArray(&deleteArray_BXPUInfo);
      instance.SetDestructor(&destruct_BXPUInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXPUInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::BXPUInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BXPUInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BXPUInfocLcLBXData_Dictionary();
   static void BXPUInfocLcLBXData_TClassManip(TClass*);
   static void *new_BXPUInfocLcLBXData(void *p = nullptr);
   static void *newArray_BXPUInfocLcLBXData(Long_t size, void *p);
   static void delete_BXPUInfocLcLBXData(void *p);
   static void deleteArray_BXPUInfocLcLBXData(void *p);
   static void destruct_BXPUInfocLcLBXData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXPUInfo::BXData*)
   {
      ::BXPUInfo::BXData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXPUInfo::BXData));
      static ::ROOT::TGenericClassInfo 
         instance("BXPUInfo::BXData", "EgRegresTrainerLegacy-140X/Utility/BXPUInfo.hh", 17,
                  typeid(::BXPUInfo::BXData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXPUInfocLcLBXData_Dictionary, isa_proxy, 4,
                  sizeof(::BXPUInfo::BXData) );
      instance.SetNew(&new_BXPUInfocLcLBXData);
      instance.SetNewArray(&newArray_BXPUInfocLcLBXData);
      instance.SetDelete(&delete_BXPUInfocLcLBXData);
      instance.SetDeleteArray(&deleteArray_BXPUInfocLcLBXData);
      instance.SetDestructor(&destruct_BXPUInfocLcLBXData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXPUInfo::BXData*)
   {
      return GenerateInitInstanceLocal(static_cast<::BXPUInfo::BXData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BXPUInfo::BXData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXPUInfocLcLBXData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::BXPUInfo::BXData*>(nullptr))->GetClass();
      BXPUInfocLcLBXData_TClassManip(theClass);
   return theClass;
   }

   static void BXPUInfocLcLBXData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXPUInfocLcLRunData_Dictionary();
   static void BXPUInfocLcLRunData_TClassManip(TClass*);
   static void *new_BXPUInfocLcLRunData(void *p = nullptr);
   static void *newArray_BXPUInfocLcLRunData(Long_t size, void *p);
   static void delete_BXPUInfocLcLRunData(void *p);
   static void deleteArray_BXPUInfocLcLRunData(void *p);
   static void destruct_BXPUInfocLcLRunData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXPUInfo::RunData*)
   {
      ::BXPUInfo::RunData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXPUInfo::RunData));
      static ::ROOT::TGenericClassInfo 
         instance("BXPUInfo::RunData", "EgRegresTrainerLegacy-140X/Utility/BXPUInfo.hh", 47,
                  typeid(::BXPUInfo::RunData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXPUInfocLcLRunData_Dictionary, isa_proxy, 4,
                  sizeof(::BXPUInfo::RunData) );
      instance.SetNew(&new_BXPUInfocLcLRunData);
      instance.SetNewArray(&newArray_BXPUInfocLcLRunData);
      instance.SetDelete(&delete_BXPUInfocLcLRunData);
      instance.SetDeleteArray(&deleteArray_BXPUInfocLcLRunData);
      instance.SetDestructor(&destruct_BXPUInfocLcLRunData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXPUInfo::RunData*)
   {
      return GenerateInitInstanceLocal(static_cast<::BXPUInfo::RunData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BXPUInfo::RunData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXPUInfocLcLRunData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::BXPUInfo::RunData*>(nullptr))->GetClass();
      BXPUInfocLcLRunData_TClassManip(theClass);
   return theClass;
   }

   static void BXPUInfocLcLRunData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BXPUInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BXPUInfo::Class_Name()
{
   return "BXPUInfo";
}

//______________________________________________________________________________
const char *BXPUInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BXPUInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BXPUInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BXPUInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BXPUInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BXPUInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BXPUInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BXPUInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BXPUInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BXPUInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BXPUInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BXPUInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXPUInfo(void *p) {
      return  p ? new(p) ::BXPUInfo : new ::BXPUInfo;
   }
   static void *newArray_BXPUInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BXPUInfo[nElements] : new ::BXPUInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXPUInfo(void *p) {
      delete (static_cast<::BXPUInfo*>(p));
   }
   static void deleteArray_BXPUInfo(void *p) {
      delete [] (static_cast<::BXPUInfo*>(p));
   }
   static void destruct_BXPUInfo(void *p) {
      typedef ::BXPUInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BXPUInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXPUInfocLcLBXData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::BXPUInfo::BXData : new ::BXPUInfo::BXData;
   }
   static void *newArray_BXPUInfocLcLBXData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::BXPUInfo::BXData[nElements] : new ::BXPUInfo::BXData[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXPUInfocLcLBXData(void *p) {
      delete (static_cast<::BXPUInfo::BXData*>(p));
   }
   static void deleteArray_BXPUInfocLcLBXData(void *p) {
      delete [] (static_cast<::BXPUInfo::BXData*>(p));
   }
   static void destruct_BXPUInfocLcLBXData(void *p) {
      typedef ::BXPUInfo::BXData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BXPUInfo::BXData

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXPUInfocLcLRunData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::BXPUInfo::RunData : new ::BXPUInfo::RunData;
   }
   static void *newArray_BXPUInfocLcLRunData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::BXPUInfo::RunData[nElements] : new ::BXPUInfo::RunData[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXPUInfocLcLRunData(void *p) {
      delete (static_cast<::BXPUInfo::RunData*>(p));
   }
   static void deleteArray_BXPUInfocLcLRunData(void *p) {
      delete [] (static_cast<::BXPUInfo::RunData*>(p));
   }
   static void destruct_BXPUInfocLcLRunData(void *p) {
      typedef ::BXPUInfo::RunData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::BXPUInfo::RunData

namespace ROOT {
   static TClass *unordered_maplEintcOarraylEcharcO3565gRsPgR_Dictionary();
   static void unordered_maplEintcOarraylEcharcO3565gRsPgR_TClassManip(TClass*);
   static void *new_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p = nullptr);
   static void *newArray_unordered_maplEintcOarraylEcharcO3565gRsPgR(Long_t size, void *p);
   static void delete_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p);
   static void deleteArray_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p);
   static void destruct_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<int,array<char,3565> >*)
   {
      unordered_map<int,array<char,3565> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<int,array<char,3565> >));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<int,array<char,3565> >", -2, "unordered_map", 102,
                  typeid(unordered_map<int,array<char,3565> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEintcOarraylEcharcO3565gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(unordered_map<int,array<char,3565> >) );
      instance.SetNew(&new_unordered_maplEintcOarraylEcharcO3565gRsPgR);
      instance.SetNewArray(&newArray_unordered_maplEintcOarraylEcharcO3565gRsPgR);
      instance.SetDelete(&delete_unordered_maplEintcOarraylEcharcO3565gRsPgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEintcOarraylEcharcO3565gRsPgR);
      instance.SetDestructor(&destruct_unordered_maplEintcOarraylEcharcO3565gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<int,array<char,3565> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<int,array<char,3565> >","std::unordered_map<int, std::array<char, 3565ul>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::array<char, 3565ul> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<int,array<char,3565> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEintcOarraylEcharcO3565gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<int,array<char,3565> >*>(nullptr))->GetClass();
      unordered_maplEintcOarraylEcharcO3565gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEintcOarraylEcharcO3565gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,array<char,3565> > : new unordered_map<int,array<char,3565> >;
   }
   static void *newArray_unordered_maplEintcOarraylEcharcO3565gRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,array<char,3565> >[nElements] : new unordered_map<int,array<char,3565> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p) {
      delete (static_cast<unordered_map<int,array<char,3565> >*>(p));
   }
   static void deleteArray_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p) {
      delete [] (static_cast<unordered_map<int,array<char,3565> >*>(p));
   }
   static void destruct_unordered_maplEintcOarraylEcharcO3565gRsPgR(void *p) {
      typedef unordered_map<int,array<char,3565> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<int,array<char,3565> >

namespace ROOT {
   static TClass *unordered_maplEintcOBXPUInfocLcLRunDatagR_Dictionary();
   static void unordered_maplEintcOBXPUInfocLcLRunDatagR_TClassManip(TClass*);
   static void *new_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p = nullptr);
   static void *newArray_unordered_maplEintcOBXPUInfocLcLRunDatagR(Long_t size, void *p);
   static void delete_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p);
   static void deleteArray_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p);
   static void destruct_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<int,BXPUInfo::RunData>*)
   {
      unordered_map<int,BXPUInfo::RunData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<int,BXPUInfo::RunData>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<int,BXPUInfo::RunData>", -2, "unordered_map", 102,
                  typeid(unordered_map<int,BXPUInfo::RunData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEintcOBXPUInfocLcLRunDatagR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<int,BXPUInfo::RunData>) );
      instance.SetNew(&new_unordered_maplEintcOBXPUInfocLcLRunDatagR);
      instance.SetNewArray(&newArray_unordered_maplEintcOBXPUInfocLcLRunDatagR);
      instance.SetDelete(&delete_unordered_maplEintcOBXPUInfocLcLRunDatagR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEintcOBXPUInfocLcLRunDatagR);
      instance.SetDestructor(&destruct_unordered_maplEintcOBXPUInfocLcLRunDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<int,BXPUInfo::RunData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<int,BXPUInfo::RunData>","std::unordered_map<int, BXPUInfo::RunData, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, BXPUInfo::RunData> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<int,BXPUInfo::RunData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEintcOBXPUInfocLcLRunDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<int,BXPUInfo::RunData>*>(nullptr))->GetClass();
      unordered_maplEintcOBXPUInfocLcLRunDatagR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEintcOBXPUInfocLcLRunDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,BXPUInfo::RunData> : new unordered_map<int,BXPUInfo::RunData>;
   }
   static void *newArray_unordered_maplEintcOBXPUInfocLcLRunDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,BXPUInfo::RunData>[nElements] : new unordered_map<int,BXPUInfo::RunData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p) {
      delete (static_cast<unordered_map<int,BXPUInfo::RunData>*>(p));
   }
   static void deleteArray_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p) {
      delete [] (static_cast<unordered_map<int,BXPUInfo::RunData>*>(p));
   }
   static void destruct_unordered_maplEintcOBXPUInfocLcLRunDatagR(void *p) {
      typedef unordered_map<int,BXPUInfo::RunData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<int,BXPUInfo::RunData>

namespace ROOT {
   static TClass *unordered_maplEintcOBXPUInfocLcLBXDatagR_Dictionary();
   static void unordered_maplEintcOBXPUInfocLcLBXDatagR_TClassManip(TClass*);
   static void *new_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p = nullptr);
   static void *newArray_unordered_maplEintcOBXPUInfocLcLBXDatagR(Long_t size, void *p);
   static void delete_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p);
   static void deleteArray_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p);
   static void destruct_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<int,BXPUInfo::BXData>*)
   {
      unordered_map<int,BXPUInfo::BXData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<int,BXPUInfo::BXData>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<int,BXPUInfo::BXData>", -2, "unordered_map", 102,
                  typeid(unordered_map<int,BXPUInfo::BXData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEintcOBXPUInfocLcLBXDatagR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<int,BXPUInfo::BXData>) );
      instance.SetNew(&new_unordered_maplEintcOBXPUInfocLcLBXDatagR);
      instance.SetNewArray(&newArray_unordered_maplEintcOBXPUInfocLcLBXDatagR);
      instance.SetDelete(&delete_unordered_maplEintcOBXPUInfocLcLBXDatagR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEintcOBXPUInfocLcLBXDatagR);
      instance.SetDestructor(&destruct_unordered_maplEintcOBXPUInfocLcLBXDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<int,BXPUInfo::BXData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<int,BXPUInfo::BXData>","std::unordered_map<int, BXPUInfo::BXData, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, BXPUInfo::BXData> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<int,BXPUInfo::BXData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEintcOBXPUInfocLcLBXDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<int,BXPUInfo::BXData>*>(nullptr))->GetClass();
      unordered_maplEintcOBXPUInfocLcLBXDatagR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEintcOBXPUInfocLcLBXDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,BXPUInfo::BXData> : new unordered_map<int,BXPUInfo::BXData>;
   }
   static void *newArray_unordered_maplEintcOBXPUInfocLcLBXDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<int,BXPUInfo::BXData>[nElements] : new unordered_map<int,BXPUInfo::BXData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p) {
      delete (static_cast<unordered_map<int,BXPUInfo::BXData>*>(p));
   }
   static void deleteArray_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p) {
      delete [] (static_cast<unordered_map<int,BXPUInfo::BXData>*>(p));
   }
   static void destruct_unordered_maplEintcOBXPUInfocLcLBXDatagR(void *p) {
      typedef unordered_map<int,BXPUInfo::BXData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<int,BXPUInfo::BXData>

namespace {
  void TriggerDictionaryInitialization_BXPUInfoDict_Impl() {
    static const char* headers[] = {
"Utility/BXPUInfo.hh",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "BXPUInfoDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Utility/BXPUInfo.hh")))  BXPUInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "BXPUInfoDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/BXPUInfo.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BXPUInfo", payloadCode, "@",
"BXPUInfo::BXData", payloadCode, "@",
"BXPUInfo::RunData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("BXPUInfoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_BXPUInfoDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_BXPUInfoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_BXPUInfoDict() {
  TriggerDictionaryInitialization_BXPUInfoDict_Impl();
}
