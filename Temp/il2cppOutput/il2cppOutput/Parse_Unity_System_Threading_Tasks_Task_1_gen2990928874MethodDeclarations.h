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

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t2990928874;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t3139381579;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C"  void Task_1__ctor_m3537797078_gshared (Task_1_t2990928874 * __this, const MethodInfo* method);
#define Task_1__ctor_m3537797078(__this, method) ((  void (*) (Task_1_t2990928874 *, const MethodInfo*))Task_1__ctor_m3537797078_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C"  Object_t * Task_1_get_Result_m645153875_gshared (Task_1_t2990928874 * __this, const MethodInfo* method);
#define Task_1_get_Result_m645153875(__this, method) ((  Object_t * (*) (Task_1_t2990928874 *, const MethodInfo*))Task_1_get_Result_m645153875_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m1606853425_gshared (Task_1_t2990928874 * __this, Action_1_t3139381579 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m1606853425(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t2990928874 *, Action_1_t3139381579 *, const MethodInfo*))Task_1_ContinueWith_m1606853425_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m692743999_gshared (Task_1_t2990928874 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m692743999(__this, method) ((  void (*) (Task_1_t2990928874 *, const MethodInfo*))Task_1_RunContinuations_m692743999_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m717232448_gshared (Task_1_t2990928874 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m717232448(__this, ___result, method) ((  bool (*) (Task_1_t2990928874 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m717232448_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m3221681498_gshared (Task_1_t2990928874 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m3221681498(__this, method) ((  bool (*) (Task_1_t2990928874 *, const MethodInfo*))Task_1_TrySetCanceled_m3221681498_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m2399297811_gshared (Task_1_t2990928874 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m2399297811(__this, ___exception, method) ((  bool (*) (Task_1_t2990928874 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m2399297811_gshared)(__this, ___exception, method)
