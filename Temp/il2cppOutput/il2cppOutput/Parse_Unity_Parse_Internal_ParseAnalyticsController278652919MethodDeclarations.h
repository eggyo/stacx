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

// Parse.Internal.ParseAnalyticsController
struct ParseAnalyticsController_t278652919;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseAnalyticsController::.ctor(Parse.Internal.IParseCommandRunner)
extern "C"  void ParseAnalyticsController__ctor_m1225673087 (ParseAnalyticsController_t278652919 * __this, Object_t * ___commandRunner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseAnalyticsController::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseAnalyticsController_TrackEventAsync_m3505826909 (ParseAnalyticsController_t278652919 * __this, String_t* ___name, Object_t* ___dimensions, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseAnalyticsController::TrackAppOpenedAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseAnalyticsController_TrackAppOpenedAsync_m1400437429 (ParseAnalyticsController_t278652919 * __this, String_t* ___pushHash, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
