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

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t299490537;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t3139747722;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m2737489901_gshared (TaskCompletionSource_1_t299490537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m2737489901(__this, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, const MethodInfo*))TaskCompletionSource_1__ctor_m2737489901_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C"  Task_1_t3139747722 * TaskCompletionSource_1_get_Task_m2842524447_gshared (TaskCompletionSource_1_t299490537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m2842524447(__this, method) ((  Task_1_t3139747722 * (*) (TaskCompletionSource_1_t299490537 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m2842524447_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m4233259262_gshared (TaskCompletionSource_1_t299490537 * __this, Task_1_t3139747722 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m4233259262(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, Task_1_t3139747722 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m4233259262_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m3591893591_gshared (TaskCompletionSource_1_t299490537 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m3591893591(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t299490537 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m3591893591_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m1465029020_gshared (TaskCompletionSource_1_t299490537 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m1465029020(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490537 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m1465029020_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m4277166487_gshared (TaskCompletionSource_1_t299490537 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m4277166487(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490537 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m4277166487_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2141863715_gshared (TaskCompletionSource_1_t299490537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2141863715(__this, method) ((  bool (*) (TaskCompletionSource_1_t299490537 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2141863715_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m729253684_gshared (TaskCompletionSource_1_t299490537 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m729253684(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m729253684_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m1531566751_gshared (TaskCompletionSource_1_t299490537 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1531566751(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1531566751_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m1730763060_gshared (TaskCompletionSource_1_t299490537 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1730763060(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1730763060_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m3594339814_gshared (TaskCompletionSource_1_t299490537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m3594339814(__this, method) ((  void (*) (TaskCompletionSource_1_t299490537 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m3594339814_gshared)(__this, method)
