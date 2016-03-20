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

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t271774290;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t3112031475;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m448458262_gshared (TaskCompletionSource_1_t271774290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m448458262(__this, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, const MethodInfo*))TaskCompletionSource_1__ctor_m448458262_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C"  Task_1_t3112031475 * TaskCompletionSource_1_get_Task_m1496725590_gshared (TaskCompletionSource_1_t271774290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m1496725590(__this, method) ((  Task_1_t3112031475 * (*) (TaskCompletionSource_1_t271774290 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m1496725590_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m3678439989_gshared (TaskCompletionSource_1_t271774290 * __this, Task_1_t3112031475 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m3678439989(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, Task_1_t3112031475 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m3678439989_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2769805184_gshared (TaskCompletionSource_1_t271774290 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2769805184(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t271774290 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2769805184_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m910209747_gshared (TaskCompletionSource_1_t271774290 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m910209747(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t271774290 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m910209747_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m1492694656_gshared (TaskCompletionSource_1_t271774290 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m1492694656(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t271774290 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m1492694656_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2426926874_gshared (TaskCompletionSource_1_t271774290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2426926874(__this, method) ((  bool (*) (TaskCompletionSource_1_t271774290 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2426926874_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m201708203_gshared (TaskCompletionSource_1_t271774290 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m201708203(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m201708203_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m3226410184_gshared (TaskCompletionSource_1_t271774290 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m3226410184(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m3226410184_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m84825323_gshared (TaskCompletionSource_1_t271774290 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m84825323(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m84825323_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m125331791_gshared (TaskCompletionSource_1_t271774290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m125331791(__this, method) ((  void (*) (TaskCompletionSource_1_t271774290 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m125331791_gshared)(__this, method)
