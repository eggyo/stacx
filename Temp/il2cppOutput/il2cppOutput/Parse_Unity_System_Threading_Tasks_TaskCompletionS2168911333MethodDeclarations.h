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

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t2168911333;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t714201222;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m3008797047_gshared (TaskCompletionSource_1_t2168911333 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m3008797047(__this, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, const MethodInfo*))TaskCompletionSource_1__ctor_m3008797047_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C"  Task_1_t714201222 * TaskCompletionSource_1_get_Task_m966739937_gshared (TaskCompletionSource_1_t2168911333 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m966739937(__this, method) ((  Task_1_t714201222 * (*) (TaskCompletionSource_1_t2168911333 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m966739937_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m2875284276_gshared (TaskCompletionSource_1_t2168911333 * __this, Task_1_t714201222 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m2875284276(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, Task_1_t714201222 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m2875284276_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2922921849_gshared (TaskCompletionSource_1_t2168911333 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2922921849(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2168911333 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2922921849_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m1177362234_gshared (TaskCompletionSource_1_t2168911333 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m1177362234(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2168911333 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m1177362234_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2669177401_gshared (TaskCompletionSource_1_t2168911333 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2669177401(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2168911333 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2669177401_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2878576193_gshared (TaskCompletionSource_1_t2168911333 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2878576193(__this, method) ((  bool (*) (TaskCompletionSource_1_t2168911333 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2878576193_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m243473386_gshared (TaskCompletionSource_1_t2168911333 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m243473386(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m243473386_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m4131193897_gshared (TaskCompletionSource_1_t2168911333 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m4131193897(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m4131193897_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m1964600426_gshared (TaskCompletionSource_1_t2168911333 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1964600426(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1964600426_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m1420052464_gshared (TaskCompletionSource_1_t2168911333 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m1420052464(__this, method) ((  void (*) (TaskCompletionSource_1_t2168911333 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m1420052464_gshared)(__this, method)
