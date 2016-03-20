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

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t2160980151;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t706270040;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m4253529545_gshared (TaskCompletionSource_1_t2160980151 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m4253529545(__this, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, const MethodInfo*))TaskCompletionSource_1__ctor_m4253529545_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C"  Task_1_t706270040 * TaskCompletionSource_1_get_Task_m44954191_gshared (TaskCompletionSource_1_t2160980151 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m44954191(__this, method) ((  Task_1_t706270040 * (*) (TaskCompletionSource_1_t2160980151 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m44954191_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m301649314_gshared (TaskCompletionSource_1_t2160980151 * __this, Task_1_t706270040 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m301649314(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, Task_1_t706270040 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m301649314_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m830007755_gshared (TaskCompletionSource_1_t2160980151 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m830007755(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t2160980151 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m830007755_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2898694568_gshared (TaskCompletionSource_1_t2160980151 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2898694568(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160980151 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2898694568_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3621118987_gshared (TaskCompletionSource_1_t2160980151 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3621118987(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t2160980151 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3621118987_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2422748719_gshared (TaskCompletionSource_1_t2160980151 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2422748719(__this, method) ((  bool (*) (TaskCompletionSource_1_t2160980151 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2422748719_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m3465601752_gshared (TaskCompletionSource_1_t2160980151 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m3465601752(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m3465601752_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m605575291_gshared (TaskCompletionSource_1_t2160980151 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m605575291(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m605575291_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m669553624_gshared (TaskCompletionSource_1_t2160980151 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m669553624(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m669553624_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m2521784002_gshared (TaskCompletionSource_1_t2160980151 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m2521784002(__this, method) ((  void (*) (TaskCompletionSource_1_t2160980151 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m2521784002_gshared)(__this, method)
