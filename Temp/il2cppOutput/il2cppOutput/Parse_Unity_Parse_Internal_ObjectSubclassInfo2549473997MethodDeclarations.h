#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Parse.Internal.ObjectSubclassInfo
struct ObjectSubclassInfo_t2549473997;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// Parse.ParseObject
struct ParseObject_t725725555;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.Internal.ObjectSubclassInfo::.ctor(System.Type,System.Reflection.ConstructorInfo)
extern "C"  void ObjectSubclassInfo__ctor_m2789577821 (ObjectSubclassInfo_t2549473997 * __this, Type_t * ___type, ConstructorInfo_t3542137334 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.Internal.ObjectSubclassInfo::get_TypeInfo()
extern "C"  Type_t * ObjectSubclassInfo_get_TypeInfo_m2182362935 (ObjectSubclassInfo_t2549473997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassInfo::set_TypeInfo(System.Type)
extern "C"  void ObjectSubclassInfo_set_TypeInfo_m6178772 (ObjectSubclassInfo_t2549473997 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ObjectSubclassInfo::get_ClassName()
extern "C"  String_t* ObjectSubclassInfo_get_ClassName_m967391935 (ObjectSubclassInfo_t2549473997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassInfo::set_ClassName(System.String)
extern "C"  void ObjectSubclassInfo_set_ClassName_m48396442 (ObjectSubclassInfo_t2549473997 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.Internal.ObjectSubclassInfo::get_PropertyMappings()
extern "C"  Object_t* ObjectSubclassInfo_get_PropertyMappings_m149126836 (ObjectSubclassInfo_t2549473997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassInfo::set_PropertyMappings(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void ObjectSubclassInfo_set_PropertyMappings_m1625188087 (ObjectSubclassInfo_t2549473997 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ObjectSubclassInfo::get_Constructor()
extern "C"  ConstructorInfo_t3542137334 * ObjectSubclassInfo_get_Constructor_m2604656322 (ObjectSubclassInfo_t2549473997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassInfo::set_Constructor(System.Reflection.ConstructorInfo)
extern "C"  void ObjectSubclassInfo_set_Constructor_m3346803727 (ObjectSubclassInfo_t2549473997 * __this, ConstructorInfo_t3542137334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.Internal.ObjectSubclassInfo::Instantiate()
extern "C"  ParseObject_t725725555 * ObjectSubclassInfo_Instantiate_m373895016 (ObjectSubclassInfo_t2549473997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ObjectSubclassInfo::GetClassName(System.Type)
extern "C"  String_t* ObjectSubclassInfo_GetClassName_m642945103 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
