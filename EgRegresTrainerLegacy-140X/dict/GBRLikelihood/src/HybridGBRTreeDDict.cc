// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dictdIGBRLikelihooddIsrcdIHybridGBRTreeDDict
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
#include "GBRLikelihood/HybridGBRTreeD.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_HybridGBRTreeD(void *p = nullptr);
   static void *newArray_HybridGBRTreeD(Long_t size, void *p);
   static void delete_HybridGBRTreeD(void *p);
   static void deleteArray_HybridGBRTreeD(void *p);
   static void destruct_HybridGBRTreeD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HybridGBRTreeD*)
   {
      ::HybridGBRTreeD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HybridGBRTreeD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("HybridGBRTreeD", ::HybridGBRTreeD::Class_Version(), "GBRLikelihood/HybridGBRTreeD.h", 32,
                  typeid(::HybridGBRTreeD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HybridGBRTreeD::Dictionary, isa_proxy, 4,
                  sizeof(::HybridGBRTreeD) );
      instance.SetNew(&new_HybridGBRTreeD);
      instance.SetNewArray(&newArray_HybridGBRTreeD);
      instance.SetDelete(&delete_HybridGBRTreeD);
      instance.SetDeleteArray(&deleteArray_HybridGBRTreeD);
      instance.SetDestructor(&destruct_HybridGBRTreeD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HybridGBRTreeD*)
   {
      return GenerateInitInstanceLocal(static_cast<::HybridGBRTreeD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HybridGBRTreeD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr HybridGBRTreeD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridGBRTreeD::Class_Name()
{
   return "HybridGBRTreeD";
}

//______________________________________________________________________________
const char *HybridGBRTreeD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRTreeD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridGBRTreeD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRTreeD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridGBRTreeD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRTreeD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridGBRTreeD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HybridGBRTreeD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void HybridGBRTreeD::Streamer(TBuffer &R__b)
{
   // Stream an object of class HybridGBRTreeD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HybridGBRTreeD::Class(),this);
   } else {
      R__b.WriteClassBuffer(HybridGBRTreeD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_HybridGBRTreeD(void *p) {
      return  p ? new(p) ::HybridGBRTreeD : new ::HybridGBRTreeD;
   }
   static void *newArray_HybridGBRTreeD(Long_t nElements, void *p) {
      return p ? new(p) ::HybridGBRTreeD[nElements] : new ::HybridGBRTreeD[nElements];
   }
   // Wrapper around operator delete
   static void delete_HybridGBRTreeD(void *p) {
      delete (static_cast<::HybridGBRTreeD*>(p));
   }
   static void deleteArray_HybridGBRTreeD(void *p) {
      delete [] (static_cast<::HybridGBRTreeD*>(p));
   }
   static void destruct_HybridGBRTreeD(void *p) {
      typedef ::HybridGBRTreeD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HybridGBRTreeD

namespace ROOT {
   static TClass *vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<pair<float,float> > >*)
   {
      vector<vector<pair<float,float> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<pair<float,float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<pair<float,float> > >", -2, "vector", 423,
                  typeid(vector<vector<pair<float,float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<pair<float,float> > >) );
      instance.SetNew(&new_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<pair<float,float> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<pair<float,float> > >","std::vector<std::vector<std::pair<float, float>, std::allocator<std::pair<float, float> > >, std::allocator<std::vector<std::pair<float, float>, std::allocator<std::pair<float, float> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<pair<float,float> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<pair<float,float> > >*>(nullptr))->GetClass();
      vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<float,float> > > : new vector<vector<pair<float,float> > >;
   }
   static void *newArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<pair<float,float> > >[nElements] : new vector<vector<pair<float,float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p) {
      delete (static_cast<vector<vector<pair<float,float> > >*>(p));
   }
   static void deleteArray_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<pair<float,float> > >*>(p));
   }
   static void destruct_vectorlEvectorlEpairlEfloatcOfloatgRsPgRsPgR(void *p) {
      typedef vector<vector<pair<float,float> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<pair<float,float> > >

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 423,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<float,float> >*)
   {
      vector<pair<float,float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<float,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<float,float> >", -2, "vector", 423,
                  typeid(vector<pair<float,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEfloatcOfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<float,float> >) );
      instance.SetNew(&new_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<float,float> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<float,float> >","std::vector<std::pair<float, float>, std::allocator<std::pair<float, float> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<float,float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<float,float> >*>(nullptr))->GetClass();
      vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<float,float> > : new vector<pair<float,float> >;
   }
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<float,float> >[nElements] : new vector<pair<float,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete (static_cast<vector<pair<float,float> >*>(p));
   }
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<float,float> >*>(p));
   }
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      typedef vector<pair<float,float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<float,float> >

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
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 423,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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
  void TriggerDictionaryInitialization_HybridGBRTreeDDict_Impl() {
    static const char* headers[] = {
"GBRLikelihood/HybridGBRTreeD.h",
nullptr
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a//include",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.30.03-0363700c0edf4e03cbaf7f654edc991a/",
"/afs/cern.ch/work/r/rgargiul/EgRegresTrainerLegacy-140X/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HybridGBRTreeDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$GBRLikelihood/HybridGBRTreeD.h")))  HybridGBRTreeD;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HybridGBRTreeDDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "GBRLikelihood/HybridGBRTreeD.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HybridGBRTreeD", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HybridGBRTreeDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HybridGBRTreeDDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HybridGBRTreeDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HybridGBRTreeDDict() {
  TriggerDictionaryInitialization_HybridGBRTreeDDict_Impl();
}
