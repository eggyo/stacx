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

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t299490690;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t3139747875;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m2681838918_gshared (TaskCompletionSource_1_t299490690 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m2681838918(__this, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, const MethodInfo*))TaskCompletionSource_1__ctor_m2681838918_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C"  Task_1_t3139747875 * TaskCompletionSource_1_get_Task_m2801466150_gshared (TaskCompletionSource_1_t299490690 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m2801466150(__this, method) ((  Task_1_t3139747875 * (*) (TaskCompletionSource_1_t299490690 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m2801466150_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m3569749253_gshared (TaskCompletionSource_1_t299490690 * __this, Task_1_t3139747875 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m3569749253(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, Task_1_t3139747875 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m3569749253_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m3236716208_gshared (TaskCompletionSource_1_t299490690 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m3236716208(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t299490690 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m3236716208_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m801519011_gshared (TaskCompletionSource_1_t299490690 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m801519011(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490690 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m801519011_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3191720368_gshared (TaskCompletionSource_1_t299490690 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3191720368(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490690 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3191720368_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m4016266730_gshared (TaskCompletionSource_1_t299490690 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m4016266730(__this, method) ((  bool (*) (TaskCompletionSource_1_t299490690 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m4016266730_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m4221903227_gshared (TaskCompletionSource_1_t299490690 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m4221903227(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m4221903227_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m1600457720_gshared (TaskCompletionSource_1_t299490690 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1600457720(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1600457720_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m4012216251_gshared (TaskCompletionSource_1_t299490690 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m4012216251(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m4012216251_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m197325951_gshared (TaskCompletionSource_1_t299490690 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m197325951(__this, method) ((  void (*) (TaskCompletionSource_1_t299490690 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m197325951_gshared)(__this, method)
