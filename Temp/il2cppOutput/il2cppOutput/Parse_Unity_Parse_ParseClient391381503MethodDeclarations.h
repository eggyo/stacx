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

// System.Type
struct Type_t;
// System.String
struct String_t;
// Parse.Internal.IPlatformHooks
struct IPlatformHooks_t1876302588;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Version
struct Version_t497901645;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_Parse_ParseClient_Configuration2731713750.h"
#include "mscorlib_System_Nullable_1_gen1369909202.h"

// System.Void Parse.ParseClient::.cctor()
extern "C"  void ParseClient__cctor_m2903712881 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetParseType(System.String)
extern "C"  Type_t * ParseClient_GetParseType_m3611643613 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IPlatformHooks Parse.ParseClient::get_PlatformHooks()
extern "C"  Object_t * ParseClient_get_PlatformHooks_m390435191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseCommandRunner Parse.ParseClient::get_ParseCommandRunner()
extern "C"  Object_t * ParseClient_get_ParseCommandRunner_m1578200959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseClient/Configuration Parse.ParseClient::get_CurrentConfiguration()
extern "C"  Configuration_t2731713750  ParseClient_get_CurrentConfiguration_m146869701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_CurrentConfiguration(Parse.ParseClient/Configuration)
extern "C"  void ParseClient_set_CurrentConfiguration_m2935396998 (Object_t * __this /* static, unused */, Configuration_t2731713750  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_MasterKey()
extern "C"  String_t* ParseClient_get_MasterKey_m2480867633 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_MasterKey(System.String)
extern "C"  void ParseClient_set_MasterKey_m3693648232 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseClient::get_Version()
extern "C"  Version_t497901645 * ParseClient_get_Version_m950762789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_VersionString()
extern "C"  String_t* ParseClient_get_VersionString_m2946210589 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(System.String,System.String)
extern "C"  void ParseClient_Initialize_m342628198 (Object_t * __this /* static, unused */, String_t* ___applicationId, String_t* ___dotnetKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(Parse.ParseClient/Configuration)
extern "C"  void ParseClient_Initialize_m972547376 (Object_t * __this /* static, unused */, Configuration_t2731713750  ___configuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Guid> Parse.ParseClient::get_InstallationId()
extern "C"  Nullable_1_t1369909202  ParseClient_get_InstallationId_m1153466354 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_InstallationId(System.Nullable`1<System.Guid>)
extern "C"  void ParseClient_set_InstallationId_m1309405433 (Object_t * __this /* static, unused */, Nullable_1_t1369909202  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::BuildQueryString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ParseClient_BuildQueryString_m4076810604 (Object_t * __this /* static, unused */, Object_t* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseClient::DecodeQueryString(System.String)
extern "C"  Object_t* ParseClient_DecodeQueryString_m3914476782 (Object_t * __this /* static, unused */, String_t* ___queryString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::DeserializeJsonString(System.String)
extern "C"  Object_t* ParseClient_DeserializeJsonString_m2170480147 (Object_t * __this /* static, unused */, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::SerializeJsonString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ParseClient_SerializeJsonString_m2565172550 (Object_t * __this /* static, unused */, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::get_ApplicationSettings()
extern "C"  Object_t* ParseClient_get_ApplicationSettings_m93100673 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
