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

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t2092259090;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t637548979;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m1086896406_gshared (TaskCompletionSource_1_t2092259090 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m1086896406(__this, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, const MethodInfo*))TaskCompletionSource_1__ctor_m1086896406_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C"  Task_1_t637548979 * TaskCompletionSource_1_get_Task_m2763000790_gshared (TaskCompletionSource_1_t2092259090 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m2763000790(__this, method) ((  Task_1_t637548979 * (*) (TaskCompletionSource_1_t2092259090 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m2763000790_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m4089896757_gshared (TaskCompletionSource_1_t2092259090 * __this, Task_1_t637548979 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m4089896757(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, Task_1_t637548979 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m4089896757_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2702415744_gshared (TaskCompletionSource_1_t2092259090 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2702415744(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2092259090 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2702415744_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3534879443_gshared (TaskCompletionSource_1_t2092259090 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3534879443(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2092259090 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3534879443_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3799412352_gshared (TaskCompletionSource_1_t2092259090 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3799412352(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2092259090 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3799412352_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m337854234_gshared (TaskCompletionSource_1_t2092259090 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m337854234(__this, method) ((  bool (*) (TaskCompletionSource_1_t2092259090 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m337854234_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m232712107_gshared (TaskCompletionSource_1_t2092259090 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m232712107(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m232712107_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m2221991880_gshared (TaskCompletionSource_1_t2092259090 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m2221991880(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m2221991880_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m2628528619_gshared (TaskCompletionSource_1_t2092259090 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m2628528619(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m2628528619_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m1086452815_gshared (TaskCompletionSource_1_t2092259090 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m1086452815(__this, method) ((  void (*) (TaskCompletionSource_1_t2092259090 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m1086452815_gshared)(__this, method)
