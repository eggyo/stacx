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

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t4143049179;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t2688339068;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m2194984543_gshared (TaskCompletionSource_1_t4143049179 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m2194984543(__this, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, const MethodInfo*))TaskCompletionSource_1__ctor_m2194984543_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C"  Task_1_t2688339068 * TaskCompletionSource_1_get_Task_m3027339117_gshared (TaskCompletionSource_1_t4143049179 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3027339117(__this, method) ((  Task_1_t2688339068 * (*) (TaskCompletionSource_1_t4143049179 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3027339117_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m1809956172_gshared (TaskCompletionSource_1_t4143049179 * __this, Task_1_t2688339068 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m1809956172(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, Task_1_t2688339068 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m1809956172_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m215312073_gshared (TaskCompletionSource_1_t4143049179 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m215312073(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t4143049179 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m215312073_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3336693226_gshared (TaskCompletionSource_1_t4143049179 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3336693226(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t4143049179 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3336693226_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2862112137_gshared (TaskCompletionSource_1_t4143049179 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2862112137(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t4143049179 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2862112137_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m547051761_gshared (TaskCompletionSource_1_t4143049179 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m547051761(__this, method) ((  bool (*) (TaskCompletionSource_1_t4143049179 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m547051761_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m2242492418_gshared (TaskCompletionSource_1_t4143049179 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m2242492418(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m2242492418_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m728602897_gshared (TaskCompletionSource_1_t4143049179 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m728602897(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m728602897_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m3393860226_gshared (TaskCompletionSource_1_t4143049179 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m3393860226(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m3393860226_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m3260100312_gshared (TaskCompletionSource_1_t4143049179 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m3260100312(__this, method) ((  void (*) (TaskCompletionSource_1_t4143049179 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m3260100312_gshared)(__this, method)
