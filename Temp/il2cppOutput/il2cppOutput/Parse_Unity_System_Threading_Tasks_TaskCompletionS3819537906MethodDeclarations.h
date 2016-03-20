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

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t3819537906;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t2364827795;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m3553217412_gshared (TaskCompletionSource_1_t3819537906 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m3553217412(__this, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, const MethodInfo*))TaskCompletionSource_1__ctor_m3553217412_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
extern "C"  Task_1_t2364827795 * TaskCompletionSource_1_get_Task_m3615255860_gshared (TaskCompletionSource_1_t3819537906 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3615255860(__this, method) ((  Task_1_t2364827795 * (*) (TaskCompletionSource_1_t3819537906 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3615255860_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m507954695_gshared (TaskCompletionSource_1_t3819537906 * __this, Task_1_t2364827795 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m507954695(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, Task_1_t2364827795 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m507954695_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2728288646_gshared (TaskCompletionSource_1_t3819537906 * __this, bool ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2728288646(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t3819537906 *, bool, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2728288646_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3214875917_gshared (TaskCompletionSource_1_t3819537906 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3214875917(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t3819537906 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3214875917_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m2560688902_gshared (TaskCompletionSource_1_t3819537906 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m2560688902(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t3819537906 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m2560688902_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m1139914196_gshared (TaskCompletionSource_1_t3819537906 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m1139914196(__this, method) ((  bool (*) (TaskCompletionSource_1_t3819537906 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m1139914196_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m2792237565_gshared (TaskCompletionSource_1_t3819537906 * __this, bool ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m2792237565(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, bool, const MethodInfo*))TaskCompletionSource_1_SetResult_m2792237565_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m291291702_gshared (TaskCompletionSource_1_t3819537906 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m291291702(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m291291702_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m2638363581_gshared (TaskCompletionSource_1_t3819537906 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m2638363581(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m2638363581_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m3122330685_gshared (TaskCompletionSource_1_t3819537906 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m3122330685(__this, method) ((  void (*) (TaskCompletionSource_1_t3819537906 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m3122330685_gshared)(__this, method)
