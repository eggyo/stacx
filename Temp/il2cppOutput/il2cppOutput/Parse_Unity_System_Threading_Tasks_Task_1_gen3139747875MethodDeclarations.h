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

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t3139747875;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t3288200580;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C"  void Task_1__ctor_m1134172367_gshared (Task_1_t3139747875 * __this, const MethodInfo* method);
#define Task_1__ctor_m1134172367(__this, method) ((  void (*) (Task_1_t3139747875 *, const MethodInfo*))Task_1__ctor_m1134172367_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C"  uint64_t Task_1_get_Result_m4229848826_gshared (Task_1_t3139747875 * __this, const MethodInfo* method);
#define Task_1_get_Result_m4229848826(__this, method) ((  uint64_t (*) (Task_1_t3139747875 *, const MethodInfo*))Task_1_get_Result_m4229848826_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m3587636522_gshared (Task_1_t3139747875 * __this, Action_1_t3288200580 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m3587636522(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t3139747875 *, Action_1_t3288200580 *, const MethodInfo*))Task_1_ContinueWith_m3587636522_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m2074718374_gshared (Task_1_t3139747875 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m2074718374(__this, method) ((  void (*) (Task_1_t3139747875 *, const MethodInfo*))Task_1_RunContinuations_m2074718374_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m2297669945_gshared (Task_1_t3139747875 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m2297669945(__this, ___result, method) ((  bool (*) (Task_1_t3139747875 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m2297669945_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m675636353_gshared (Task_1_t3139747875 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m675636353(__this, method) ((  bool (*) (Task_1_t3139747875 *, const MethodInfo*))Task_1_TrySetCanceled_m675636353_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m3881672058_gshared (Task_1_t3139747875 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m3881672058(__this, ___exception, method) ((  bool (*) (Task_1_t3139747875 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m3881672058_gshared)(__this, ___exception, method)
