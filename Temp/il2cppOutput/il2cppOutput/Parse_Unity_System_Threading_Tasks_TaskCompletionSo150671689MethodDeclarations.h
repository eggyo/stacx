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

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t150671689;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t2990928874;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_AggregateException1848402181.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m790496333_gshared (TaskCompletionSource_1_t150671689 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m790496333(__this, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, const MethodInfo*))TaskCompletionSource_1__ctor_m790496333_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C"  Task_1_t2990928874 * TaskCompletionSource_1_get_Task_m3490472639_gshared (TaskCompletionSource_1_t150671689 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3490472639(__this, method) ((  Task_1_t2990928874 * (*) (TaskCompletionSource_1_t150671689 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3490472639_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m2087375006_gshared (TaskCompletionSource_1_t150671689 * __this, Task_1_t2990928874 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m2087375006(__this, ___value, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, Task_1_t2990928874 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m2087375006_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m1656278711_gshared (TaskCompletionSource_1_t150671689 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m1656278711(__this, ___result, method) ((  bool (*) (TaskCompletionSource_1_t150671689 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m1656278711_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C"  bool TaskCompletionSource_1_TrySetException_m3614112060_gshared (TaskCompletionSource_1_t150671689 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3614112060(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t150671689 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3614112060_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m796321271_gshared (TaskCompletionSource_1_t150671689 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m796321271(__this, ___exception, method) ((  bool (*) (TaskCompletionSource_1_t150671689 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m796321271_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2267344579_gshared (TaskCompletionSource_1_t150671689 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2267344579(__this, method) ((  bool (*) (TaskCompletionSource_1_t150671689 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2267344579_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m637208276_gshared (TaskCompletionSource_1_t150671689 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m637208276(__this, ___result, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m637208276_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C"  void TaskCompletionSource_1_SetException_m473143039_gshared (TaskCompletionSource_1_t150671689 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m473143039(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, AggregateException_t1848402181 *, const MethodInfo*))TaskCompletionSource_1_SetException_m473143039_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m4159189204_gshared (TaskCompletionSource_1_t150671689 * __this, Exception_t1967233988 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m4159189204(__this, ___exception, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, Exception_t1967233988 *, const MethodInfo*))TaskCompletionSource_1_SetException_m4159189204_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m740932166_gshared (TaskCompletionSource_1_t150671689 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m740932166(__this, method) ((  void (*) (TaskCompletionSource_1_t150671689 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m740932166_gshared)(__this, method)
