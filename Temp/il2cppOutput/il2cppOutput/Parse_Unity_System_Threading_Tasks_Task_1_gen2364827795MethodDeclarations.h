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

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t2364827795;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t2513280500;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
extern "C"  void Task_1__ctor_m2820194587_gshared (Task_1_t2364827795 * __this, const MethodInfo* method);
#define Task_1__ctor_m2820194587(__this, method) ((  void (*) (Task_1_t2364827795 *, const MethodInfo*))Task_1__ctor_m2820194587_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
extern "C"  bool Task_1_get_Result_m963202704_gshared (Task_1_t2364827795 * __this, const MethodInfo* method);
#define Task_1_get_Result_m963202704(__this, method) ((  bool (*) (Task_1_t2364827795 *, const MethodInfo*))Task_1_get_Result_m963202704_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m2818014600_gshared (Task_1_t2364827795 * __this, Action_1_t2513280500 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m2818014600(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t2364827795 *, Action_1_t2513280500 *, const MethodInfo*))Task_1_ContinueWith_m2818014600_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m3652133082_gshared (Task_1_t2364827795 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m3652133082(__this, method) ((  void (*) (Task_1_t2364827795 *, const MethodInfo*))Task_1_RunContinuations_m3652133082_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3682625565_gshared (Task_1_t2364827795 * __this, bool ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m3682625565(__this, ___result, method) ((  bool (*) (Task_1_t2364827795 *, bool, const MethodInfo*))Task_1_TrySetResult_m3682625565_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m659587613_gshared (Task_1_t2364827795 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m659587613(__this, method) ((  bool (*) (Task_1_t2364827795 *, const MethodInfo*))Task_1_TrySetCanceled_m659587613_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m4210339862_gshared (Task_1_t2364827795 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m4210339862(__this, ___exception, method) ((  bool (*) (Task_1_t2364827795 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m4210339862_gshared)(__this, ___exception, method)
