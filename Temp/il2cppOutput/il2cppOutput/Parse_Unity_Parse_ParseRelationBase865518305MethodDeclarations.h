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

// Parse.ParseRelationBase
struct ParseRelationBase_t865518305;
// Parse.ParseObject
struct ParseObject_t725725555;
// System.String
struct String_t;
// Parse.Internal.IObjectSubclassingController
struct IObjectSubclassingController_t1167871654;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseObject725725555.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String)
extern "C"  void ParseRelationBase__ctor_m2359990813 (ParseRelationBase_t865518305 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::.ctor(Parse.ParseObject,System.String,System.String)
extern "C"  void ParseRelationBase__ctor_m1466518425 (ParseRelationBase_t865518305 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectSubclassingController Parse.ParseRelationBase::get_SubclassingController()
extern "C"  Object_t * ParseRelationBase_get_SubclassingController_m2941283668 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::EnsureParentAndKey(Parse.ParseObject,System.String)
extern "C"  void ParseRelationBase_EnsureParentAndKey_m3036406749 (ParseRelationBase_t865518305 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Add(Parse.ParseObject)
extern "C"  void ParseRelationBase_Add_m3365442 (ParseRelationBase_t865518305 * __this, ParseObject_t725725555 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::Remove(Parse.ParseObject)
extern "C"  void ParseRelationBase_Remove_m2519710861 (ParseRelationBase_t865518305 * __this, ParseObject_t725725555 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseRelationBase::Parse.Internal.IJsonConvertible.ToJSON()
extern "C"  Object_t* ParseRelationBase_Parse_Internal_IJsonConvertible_ToJSON_m1512747796 (ParseRelationBase_t865518305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRelationBase::get_TargetClassName()
extern "C"  String_t* ParseRelationBase_get_TargetClassName_m33042436 (ParseRelationBase_t865518305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRelationBase::set_TargetClassName(System.String)
extern "C"  void ParseRelationBase_set_TargetClassName_m43191797 (ParseRelationBase_t865518305 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelationBase Parse.ParseRelationBase::CreateRelation(Parse.ParseObject,System.String,System.String)
extern "C"  ParseRelationBase_t865518305 * ParseRelationBase_CreateRelation_m2554039071 (Object_t * __this /* static, unused */, ParseObject_t725725555 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
