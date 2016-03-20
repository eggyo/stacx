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

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t2160979998;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t706269887;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m14213232_gshared (TaskCompletionSource_1_t2160979998 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m14213232(__this, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, const MethodInfo*))TaskCompletionSource_1__ctor_m14213232_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C"  Task_1_t706269887 * TaskCompletionSource_1_get_Task_m86012488_gshared (TaskCompletionSource_1_t2160979998 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m86012488(__this, method) ((  Task_1_t706269887 * (*) (TaskCompletionSource_1_t2160979998 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m86012488_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m965159323_gshared (TaskCompletionSource_1_t2160979998 * __this, Task_1_t706269887 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m965159323(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, Task_1_t706269887 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m965159323_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m1185185138_gshared (TaskCompletionSource_1_t2160979998 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m1185185138(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2160979998 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m1185185138_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3562204577_gshared (TaskCompletionSource_1_t2160979998 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3562204577(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160979998 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3562204577_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m411597810_gshared (TaskCompletionSource_1_t2160979998 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m411597810(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160979998 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m411597810_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m548345704_gshared (TaskCompletionSource_1_t2160979998 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m548345704(__this, method) ((  bool (*) (TaskCompletionSource_1_t2160979998 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m548345704_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m4267919505_gshared (TaskCompletionSource_1_t2160979998 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m4267919505(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m4267919505_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m536684322_gshared (TaskCompletionSource_1_t2160979998 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m536684322(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m536684322_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m2683067729_gshared (TaskCompletionSource_1_t2160979998 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m2683067729(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m2683067729_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m1623830569_gshared (TaskCompletionSource_1_t2160979998 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m1623830569(__this, method) ((  void (*) (TaskCompletionSource_1_t2160979998 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m1623830569_gshared)(__this, method)
