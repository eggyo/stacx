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

// Parse.Internal.IParseAnalyticsController
struct IParseAnalyticsController_t3261193536;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// Parse.ParseAnalytics
struct ParseAnalytics_t2959685620;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// Parse.Internal.IParseAnalyticsController Parse.ParseAnalytics::get_AnalyticsController()
extern "C"  Object_t * ParseAnalytics_get_AnalyticsController_m4007416317 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedAsync()
extern "C"  Task_t2616336456 * ParseAnalytics_TrackAppOpenedAsync_m378183163 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String)
extern "C"  Task_t2616336456 * ParseAnalytics_TrackEventAsync_m1973130647 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  Task_t2616336456 * ParseAnalytics_TrackEventAsync_m2319749503 (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedWithPushHashAsync(System.String)
extern "C"  Task_t2616336456 * ParseAnalytics_TrackAppOpenedWithPushHashAsync_m2860516661 (Object_t * __this /* static, unused */, String_t* ___pushHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseAnalytics::.ctor()
extern "C"  void ParseAnalytics__ctor_m383196057 (ParseAnalytics_t2959685620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
