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

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t879015737;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t216490034;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SynchronizationContext216490034.h"
#include "System_Core_System_Action437523947.h"

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C"  void TaskScheduler__ctor_m2752794440 (TaskScheduler_t879015737 * __this, SynchronizationContext_t216490034 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C"  void TaskScheduler_Post_m1819865023 (TaskScheduler_t879015737 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern "C"  TaskScheduler_t879015737 * TaskScheduler_FromCurrentSynchronizationContext_m1102225614 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C"  void TaskScheduler__cctor_m1956069831 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
