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

// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t2218550762;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t879015737;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t2990928874;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t3381739440;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t850390275;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler879015737.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C"  void TaskFactory_1__ctor_m604499682_gshared (TaskFactory_1_t2218550762 * __this, TaskScheduler_t879015737 * ___scheduler, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m604499682(__this, ___scheduler, ___cancellationToken, method) ((  void (*) (TaskFactory_1_t2218550762 *, TaskScheduler_t879015737 *, CancellationToken_t2348806009 , const MethodInfo*))TaskFactory_1__ctor_m604499682_gshared)(__this, ___scheduler, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C"  void TaskFactory_1__ctor_m3122894627_gshared (TaskFactory_1_t2218550762 * __this, TaskScheduler_t879015737 * ___scheduler, const MethodInfo* method);
#define TaskFactory_1__ctor_m3122894627(__this, ___scheduler, method) ((  void (*) (TaskFactory_1_t2218550762 *, TaskScheduler_t879015737 *, const MethodInfo*))TaskFactory_1__ctor_m3122894627_gshared)(__this, ___scheduler, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken)
extern "C"  void TaskFactory_1__ctor_m404635299_gshared (TaskFactory_1_t2218550762 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define TaskFactory_1__ctor_m404635299(__this, ___cancellationToken, method) ((  void (*) (TaskFactory_1_t2218550762 *, CancellationToken_t2348806009 , const MethodInfo*))TaskFactory_1__ctor_m404635299_gshared)(__this, ___cancellationToken, method)
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
extern "C"  void TaskFactory_1__ctor_m3555777988_gshared (TaskFactory_1_t2218550762 * __this, const MethodInfo* method);
#define TaskFactory_1__ctor_m3555777988(__this, method) ((  void (*) (TaskFactory_1_t2218550762 *, const MethodInfo*))TaskFactory_1__ctor_m3555777988_gshared)(__this, method)
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1<System.Object>::get_Scheduler()
extern "C"  TaskScheduler_t879015737 * TaskFactory_1_get_Scheduler_m2128098920_gshared (TaskFactory_1_t2218550762 * __this, const MethodInfo* method);
#define TaskFactory_1_get_Scheduler_m2128098920(__this, method) ((  TaskScheduler_t879015737 * (*) (TaskFactory_1_t2218550762 *, const MethodInfo*))TaskFactory_1_get_Scheduler_m2128098920_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,T>,System.Object)
extern "C"  Task_1_t2990928874 * TaskFactory_1_FromAsync_m1357451171_gshared (TaskFactory_1_t2218550762 * __this, Func_3_t3381739440 * ___beginMethod, Func_2_t850390275 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_1_FromAsync_m1357451171(__this, ___beginMethod, ___endMethod, ___state, method) ((  Task_1_t2990928874 * (*) (TaskFactory_1_t2218550762 *, Func_3_t3381739440 *, Func_2_t850390275 *, Object_t *, const MethodInfo*))TaskFactory_1_FromAsync_m1357451171_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)
