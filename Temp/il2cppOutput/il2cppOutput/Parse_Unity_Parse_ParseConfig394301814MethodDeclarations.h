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

// Parse.ParseConfig
struct ParseConfig_t394301814;
// Parse.Internal.IParseConfigController
struct IParseConfigController_t1096613456;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t2548124268;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "mscorlib_System_String968488902.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
extern "C"  ParseConfig_t394301814 * ParseConfig_get_CurrentConfig_m589740974 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
extern "C"  void ParseConfig_ClearCurrentConfig_m4188122189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
extern "C"  void ParseConfig_ClearCurrentConfigInMemory_m2912319859 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseConfigController Parse.ParseConfig::get_ConfigController()
extern "C"  Object_t * ParseConfig_get_ConfigController_m3015507057 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
extern "C"  void ParseConfig__ctor_m65561893 (ParseConfig_t394301814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParseConfig__ctor_m3748089751 (ParseConfig_t394301814 * __this, Object_t* ___fetchedConfig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
extern "C"  Task_1_t2548124268 * ParseConfig_GetAsync_m687926693 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2548124268 * ParseConfig_GetAsync_m1089148484 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
extern "C"  Object_t * ParseConfig_get_Item_m3597126780 (ParseConfig_t394301814 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseConfig::Parse.Internal.IJsonConvertible.ToJSON()
extern "C"  Object_t* ParseConfig_Parse_Internal_IJsonConvertible_ToJSON_m930177129 (ParseConfig_t394301814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
