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

// Parse.ParseRole
struct ParseRole_t38342506;
// System.String
struct String_t;
// Parse.ParseACL
struct ParseACL_t1119934136;
// Parse.ParseRelation`1<Parse.ParseUser>
struct ParseRelation_1_t4120273437;
// Parse.ParseRelation`1<Parse.ParseRole>
struct ParseRelation_1_t4120180424;
// System.Object
struct Object_t;
// Parse.ParseQuery`1<Parse.ParseRole>
struct ParseQuery_1_t2473850782;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_Parse_ParseACL1119934136.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Parse.ParseRole::.ctor()
extern "C"  void ParseRole__ctor_m2374703985 (ParseRole_t38342506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.ctor(System.String,Parse.ParseACL)
extern "C"  void ParseRole__ctor_m1189227203 (ParseRole_t38342506 * __this, String_t* ___name, ParseACL_t1119934136 * ___acl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseRole::get_Name()
extern "C"  String_t* ParseRole_get_Name_m527882372 (ParseRole_t38342506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::set_Name(System.String)
extern "C"  void ParseRole_set_Name_m2157778407 (ParseRole_t38342506 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseUser> Parse.ParseRole::get_Users()
extern "C"  ParseRelation_1_t4120273437 * ParseRole_get_Users_m3500621457 (ParseRole_t38342506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseRelation`1<Parse.ParseRole> Parse.ParseRole::get_Roles()
extern "C"  ParseRelation_1_t4120180424 * ParseRole_get_Roles_m641678705 (ParseRole_t38342506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::OnSettingValue(System.String&,System.Object&)
extern "C"  void ParseRole_OnSettingValue_m2485641121 (ParseRole_t38342506 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseRole> Parse.ParseRole::get_Query()
extern "C"  ParseQuery_1_t2473850782 * ParseRole_get_Query_m977107990 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseRole::.cctor()
extern "C"  void ParseRole__cctor_m119283292 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
