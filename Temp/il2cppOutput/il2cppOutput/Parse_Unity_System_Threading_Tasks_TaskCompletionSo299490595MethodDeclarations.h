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

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t299490595;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t3139747780;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m1593526183_gshared (TaskCompletionSource_1_t299490595 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m1593526183(__this, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, const MethodInfo*))TaskCompletionSource_1__ctor_m1593526183_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C"  Task_1_t3139747780 * TaskCompletionSource_1_get_Task_m3584895269_gshared (TaskCompletionSource_1_t299490595 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3584895269(__this, method) ((  Task_1_t3139747780 * (*) (TaskCompletionSource_1_t299490595 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3584895269_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m23625476_gshared (TaskCompletionSource_1_t299490595 * __this, Task_1_t3139747780 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m23625476(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, Task_1_t3139747780 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m23625476_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m1857165329_gshared (TaskCompletionSource_1_t299490595 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m1857165329(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t299490595 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m1857165329_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m1550362530_gshared (TaskCompletionSource_1_t299490595 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m1550362530(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490595 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m1550362530_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m1928744145_gshared (TaskCompletionSource_1_t299490595 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m1928744145(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t299490595 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m1928744145_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m4199862441_gshared (TaskCompletionSource_1_t299490595 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m4199862441(__this, method) ((  bool (*) (TaskCompletionSource_1_t299490595 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m4199862441_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m1183042490_gshared (TaskCompletionSource_1_t299490595 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m1183042490(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m1183042490_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m1276965465_gshared (TaskCompletionSource_1_t299490595 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1276965465(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1276965465_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m1079756858_gshared (TaskCompletionSource_1_t299490595 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1079756858(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1079756858_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m481923616_gshared (TaskCompletionSource_1_t299490595 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m481923616(__this, method) ((  void (*) (TaskCompletionSource_1_t299490595 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m481923616_gshared)(__this, method)
