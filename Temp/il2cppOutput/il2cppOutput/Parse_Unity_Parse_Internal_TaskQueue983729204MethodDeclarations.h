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

// Parse.Internal.TaskQueue
struct TaskQueue_t983729204;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.Tasks.Task Parse.Internal.TaskQueue::GetTaskToAwait(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * TaskQueue_GetTaskToAwait_m982931435 (TaskQueue_t983729204 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.TaskQueue::get_Mutex()
extern "C"  Object_t * TaskQueue_get_Mutex_m3624156944 (TaskQueue_t983729204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.TaskQueue::.ctor()
extern "C"  void TaskQueue__ctor_m4252659121 (TaskQueue_t983729204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
