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

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t782787144;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t879015737;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t3381739440;
// System.Action`1<System.IAsyncResult>
struct Action_1_t686135974;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t115289497;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t263742202;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler879015737.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOpt3814616317.h"
#include "Parse_Unity_System_Threading_Tasks_TaskContinuatio3614420261.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C"  void TaskFactory__ctor_m754097807 (TaskFactory_t782787144 * __this, TaskScheduler_t879015737 * ___scheduler, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C"  void TaskFactory__ctor_m2853198486 (TaskFactory_t782787144 * __this, TaskScheduler_t879015737 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
extern "C"  void TaskFactory__ctor_m1530610390 (TaskFactory_t782787144 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C"  void TaskFactory__ctor_m4279230135 (TaskFactory_t782787144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C"  void TaskFactory__ctor_m1615762583 (TaskFactory_t782787144 * __this, CancellationToken_t2348806009  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t879015737 * ___scheduler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C"  TaskScheduler_t879015737 * TaskFactory_get_Scheduler_m137587187 (TaskFactory_t782787144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
extern "C"  Task_t2616336456 * TaskFactory_FromAsync_m1087295916 (TaskFactory_t782787144 * __this, Func_3_t3381739440 * ___beginMethod, Action_1_t686135974 * ___endMethod, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
extern "C"  Task_t2616336456 * TaskFactory_ContinueWhenAll_m512618644 (TaskFactory_t782787144 * __this, TaskU5BU5D_t115289497* ___tasks, Action_1_t263742202 * ___continuationAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
