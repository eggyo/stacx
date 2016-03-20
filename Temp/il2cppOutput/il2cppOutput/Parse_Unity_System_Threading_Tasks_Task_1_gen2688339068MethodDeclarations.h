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

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t2688339068;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t2836791773;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C"  void Task_1__ctor_m647317992_gshared (Task_1_t2688339068 * __this, const MethodInfo* method);
#define Task_1__ctor_m647317992(__this, method) ((  void (*) (Task_1_t2688339068 *, const MethodInfo*))Task_1__ctor_m647317992_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C"  double Task_1_get_Result_m2250438017_gshared (Task_1_t2688339068 * __this, const MethodInfo* method);
#define Task_1_get_Result_m2250438017(__this, method) ((  double (*) (Task_1_t2688339068 *, const MethodInfo*))Task_1_get_Result_m2250438017_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m2365591363_gshared (Task_1_t2688339068 * __this, Action_1_t2836791773 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m2365591363(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t2688339068 *, Action_1_t2836791773 *, const MethodInfo*))Task_1_ContinueWith_m2365591363_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m1053754861_gshared (Task_1_t2688339068 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m1053754861(__this, method) ((  void (*) (Task_1_t2688339068 *, const MethodInfo*))Task_1_RunContinuations_m1053754861_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3571233106_gshared (Task_1_t2688339068 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m3571233106(__this, ___result, method) ((  bool (*) (Task_1_t2688339068 *, double, const MethodInfo*))Task_1_TrySetResult_m3571233106_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m1501388680_gshared (Task_1_t2688339068 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m1501388680(__this, method) ((  bool (*) (Task_1_t2688339068 *, const MethodInfo*))Task_1_TrySetCanceled_m1501388680_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m2121878977_gshared (Task_1_t2688339068 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m2121878977(__this, ___exception, method) ((  bool (*) (Task_1_t2688339068 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m2121878977_gshared)(__this, ___exception, method)
