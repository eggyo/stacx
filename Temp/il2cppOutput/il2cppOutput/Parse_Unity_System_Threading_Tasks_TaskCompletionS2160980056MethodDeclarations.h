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

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t2160980056;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t706269945;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m3165216810_gshared (TaskCompletionSource_1_t2160980056 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m3165216810(__this, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, const MethodInfo*))TaskCompletionSource_1__ctor_m3165216810_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C"  Task_1_t706269945 * TaskCompletionSource_1_get_Task_m828383310_gshared (TaskCompletionSource_1_t2160980056 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m828383310(__this, method) ((  Task_1_t706269945 * (*) (TaskCompletionSource_1_t2160980056 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m828383310_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m1050492833_gshared (TaskCompletionSource_1_t2160980056 * __this, Task_1_t706269945 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m1050492833(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, Task_1_t706269945 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m1050492833_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m3745424172_gshared (TaskCompletionSource_1_t2160980056 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m3745424172(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2160980056 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m3745424172_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3647538087_gshared (TaskCompletionSource_1_t2160980056 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3647538087(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160980056 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3647538087_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2358142764_gshared (TaskCompletionSource_1_t2160980056 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2358142764(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160980056 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2358142764_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2606344430_gshared (TaskCompletionSource_1_t2160980056 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2606344430(__this, method) ((  bool (*) (TaskCompletionSource_1_t2160980056 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2606344430_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m426741015_gshared (TaskCompletionSource_1_t2160980056 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m426741015(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m426741015_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m282083036_gshared (TaskCompletionSource_1_t2160980056 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m282083036(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m282083036_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m2032061527_gshared (TaskCompletionSource_1_t2160980056 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m2032061527(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m2032061527_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m2806381667_gshared (TaskCompletionSource_1_t2160980056 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m2806381667(__this, method) ((  void (*) (TaskCompletionSource_1_t2160980056 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m2806381667_gshared)(__this, method)
