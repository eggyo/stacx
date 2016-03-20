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

// Parse.ParseACL
struct ParseACL_t1119934136;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// Parse.ParseUser
struct ParseUser_t38435519;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t38342506;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseUser38435519.h"
#include "Parse_Unity_Parse_ParseACL_AccessKind851177272.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_Parse_ParseRole38342506.h"

// System.Void Parse.ParseACL::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParseACL__ctor_m2349059751 (ParseACL_t1119934136 * __this, Object_t* ___jsonObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor()
extern "C"  void ParseACL__ctor_m407649301 (ParseACL_t1119934136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor(Parse.ParseUser)
extern "C"  void ParseACL__ctor_m2686889914 (ParseACL_t1119934136 * __this, ParseUser_t38435519 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseACL::Parse.Internal.IJsonConvertible.ToJSON()
extern "C"  Object_t* ParseACL_Parse_Internal_IJsonConvertible_ToJSON_m3802225171 (ParseACL_t1119934136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetAccess(Parse.ParseACL/AccessKind,System.String,System.Boolean)
extern "C"  void ParseACL_SetAccess_m4085329885 (ParseACL_t1119934136 * __this, int32_t ___kind, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetAccess(Parse.ParseACL/AccessKind,System.String)
extern "C"  bool ParseACL_GetAccess_m1049522360 (ParseACL_t1119934136 * __this, int32_t ___kind, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicReadAccess()
extern "C"  bool ParseACL_get_PublicReadAccess_m3110626247 (ParseACL_t1119934136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicReadAccess(System.Boolean)
extern "C"  void ParseACL_set_PublicReadAccess_m2204607974 (ParseACL_t1119934136 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicWriteAccess()
extern "C"  bool ParseACL_get_PublicWriteAccess_m1971259704 (ParseACL_t1119934136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicWriteAccess(System.Boolean)
extern "C"  void ParseACL_set_PublicWriteAccess_m1622516935 (ParseACL_t1119934136 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(System.String,System.Boolean)
extern "C"  void ParseACL_SetReadAccess_m3867075722 (ParseACL_t1119934136 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(Parse.ParseUser,System.Boolean)
extern "C"  void ParseACL_SetReadAccess_m1832373181 (ParseACL_t1119934136 * __this, ParseUser_t38435519 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(System.String,System.Boolean)
extern "C"  void ParseACL_SetWriteAccess_m2516477291 (ParseACL_t1119934136 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(Parse.ParseUser,System.Boolean)
extern "C"  void ParseACL_SetWriteAccess_m987404382 (ParseACL_t1119934136 * __this, ParseUser_t38435519 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(System.String)
extern "C"  bool ParseACL_GetReadAccess_m984316331 (ParseACL_t1119934136 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(Parse.ParseUser)
extern "C"  bool ParseACL_GetReadAccess_m2721647832 (ParseACL_t1119934136 * __this, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(System.String)
extern "C"  bool ParseACL_GetWriteAccess_m163581882 (ParseACL_t1119934136 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(Parse.ParseUser)
extern "C"  bool ParseACL_GetWriteAccess_m4269824807 (ParseACL_t1119934136 * __this, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(System.String,System.Boolean)
extern "C"  void ParseACL_SetRoleReadAccess_m147464480 (ParseACL_t1119934136 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(Parse.ParseRole,System.Boolean)
extern "C"  void ParseACL_SetRoleReadAccess_m2205423998 (ParseACL_t1119934136 * __this, ParseRole_t38342506 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(System.String)
extern "C"  bool ParseACL_GetRoleReadAccess_m3429242837 (ParseACL_t1119934136 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(Parse.ParseRole)
extern "C"  bool ParseACL_GetRoleReadAccess_m2946025783 (ParseACL_t1119934136 * __this, ParseRole_t38342506 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(System.String,System.Boolean)
extern "C"  void ParseACL_SetRoleWriteAccess_m3172645781 (ParseACL_t1119934136 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(Parse.ParseRole,System.Boolean)
extern "C"  void ParseACL_SetRoleWriteAccess_m1711794867 (ParseACL_t1119934136 * __this, ParseRole_t38342506 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(System.String)
extern "C"  bool ParseACL_GetRoleWriteAccess_m2941859536 (ParseACL_t1119934136 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(Parse.ParseRole)
extern "C"  bool ParseACL_GetRoleWriteAccess_m2722108786 (ParseACL_t1119934136 * __this, ParseRole_t38342506 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
