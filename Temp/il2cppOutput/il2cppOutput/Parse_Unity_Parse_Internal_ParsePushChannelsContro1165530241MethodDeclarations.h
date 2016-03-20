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

// Parse.Internal.ParsePushChannelsController
struct ParsePushChannelsController_t1165530241;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.Tasks.Task Parse.Internal.ParsePushChannelsController::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePushChannelsController_SubscribeAsync_m1721341301 (ParsePushChannelsController_t1165530241 * __this, Object_t* ___channels, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParsePushChannelsController::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePushChannelsController_UnsubscribeAsync_m3636354766 (ParsePushChannelsController_t1165530241 * __this, Object_t* ___channels, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParsePushChannelsController::.ctor()
extern "C"  void ParsePushChannelsController__ctor_m3605320068 (ParsePushChannelsController_t1165530241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
