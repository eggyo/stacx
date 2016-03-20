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

// Parse.Internal.ParsePushController
struct ParsePushController_t1394972049;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// Parse.Internal.IPushState
struct IPushState_t2870390038;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.Tasks.Task Parse.Internal.ParsePushController::SendPushNotificationAsync(Parse.Internal.IPushState,System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePushController_SendPushNotificationAsync_m1679266563 (ParsePushController_t1394972049 * __this, Object_t * ___state, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParsePushController::.ctor()
extern "C"  void ParsePushController__ctor_m1796619380 (ParsePushController_t1394972049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
