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

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t3112031475;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t3260484180;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C"  void Task_1__ctor_m3195759007_gshared (Task_1_t3112031475 * __this, const MethodInfo* method);
#define Task_1__ctor_m3195759007(__this, method) ((  void (*) (Task_1_t3112031475 *, const MethodInfo*))Task_1__ctor_m3195759007_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C"  float Task_1_get_Result_m209653802_gshared (Task_1_t3112031475 * __this, const MethodInfo* method);
#define Task_1_get_Result_m209653802(__this, method) ((  float (*) (Task_1_t3112031475 *, const MethodInfo*))Task_1_get_Result_m209653802_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m80715258_gshared (Task_1_t3112031475 * __this, Action_1_t3260484180 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m80715258(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t3112031475 *, Action_1_t3260484180 *, const MethodInfo*))Task_1_ContinueWith_m80715258_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m3727474134_gshared (Task_1_t3112031475 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m3727474134(__this, method) ((  void (*) (Task_1_t3112031475 *, const MethodInfo*))Task_1_RunContinuations_m3727474134_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m1830758921_gshared (Task_1_t3112031475 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m1830758921(__this, ___result, method) ((  bool (*) (Task_1_t3112031475 *, float, const MethodInfo*))Task_1_TrySetResult_m1830758921_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m3381263793_gshared (Task_1_t3112031475 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m3381263793(__this, method) ((  bool (*) (Task_1_t3112031475 *, const MethodInfo*))Task_1_TrySetCanceled_m3381263793_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m3990362794_gshared (Task_1_t3112031475 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m3990362794(__this, ___exception, method) ((  bool (*) (Task_1_t3112031475 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m3990362794_gshared)(__this, ___exception, method)
