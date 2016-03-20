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

// System.Threading.Tasks.TaskCompletionSource`1<System.Char>
struct TaskCompletionSource_1_t2092271968;
// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t637561857;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m1231086052_gshared (TaskCompletionSource_1_t2092271968 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m1231086052(__this, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, const MethodInfo*))TaskCompletionSource_1__ctor_m1231086052_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Char>::get_Task()
extern "C"  Task_1_t637561857 * TaskCompletionSource_1_get_Task_m3349448776_gshared (TaskCompletionSource_1_t2092271968 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3349448776(__this, method) ((  Task_1_t637561857 * (*) (TaskCompletionSource_1_t2092271968 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3349448776_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m3487372199_gshared (TaskCompletionSource_1_t2092271968 * __this, Task_1_t637561857 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m3487372199(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, Task_1_t637561857 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m3487372199_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2450854478_gshared (TaskCompletionSource_1_t2092271968 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2450854478(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2092271968 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2450854478_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2932354885_gshared (TaskCompletionSource_1_t2092271968 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2932354885(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2092271968 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2932354885_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2800226766_gshared (TaskCompletionSource_1_t2092271968 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2800226766(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2092271968 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2800226766_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Char>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m1129389580_gshared (TaskCompletionSource_1_t2092271968 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m1129389580(__this, method) ((  bool (*) (TaskCompletionSource_1_t2092271968 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m1129389580_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m1168510877_gshared (TaskCompletionSource_1_t2092271968 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m1168510877(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m1168510877_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m637687958_gshared (TaskCompletionSource_1_t2092271968 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m637687958(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m637687958_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m1890056541_gshared (TaskCompletionSource_1_t2092271968 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1890056541(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1890056541_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Char>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m31443613_gshared (TaskCompletionSource_1_t2092271968 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m31443613(__this, method) ((  void (*) (TaskCompletionSource_1_t2092271968 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m31443613_gshared)(__this, method)
