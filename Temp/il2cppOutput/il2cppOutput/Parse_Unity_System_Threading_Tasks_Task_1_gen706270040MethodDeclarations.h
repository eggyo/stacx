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

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t706270040;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t854722745;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C"  void Task_1__ctor_m2541036832_gshared (Task_1_t706270040 * __this, const MethodInfo* method);
#define Task_1__ctor_m2541036832(__this, method) ((  void (*) (Task_1_t706270040 *, const MethodInfo*))Task_1__ctor_m2541036832_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C"  int64_t Task_1_get_Result_m1177500139_gshared (Task_1_t706270040 * __this, const MethodInfo* method);
#define Task_1_get_Result_m1177500139(__this, method) ((  int64_t (*) (Task_1_t706270040 *, const MethodInfo*))Task_1_get_Result_m1177500139_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m3011172557_gshared (Task_1_t706270040 * __this, Action_1_t854722745 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m3011172557(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t706270040 *, Action_1_t854722745 *, const MethodInfo*))Task_1_ContinueWith_m3011172557_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m2212788149_gshared (Task_1_t706270040 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m2212788149(__this, method) ((  void (*) (Task_1_t706270040 *, const MethodInfo*))Task_1_RunContinuations_m2212788149_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m2877925922_gshared (Task_1_t706270040 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m2877925922(__this, ___result, method) ((  bool (*) (Task_1_t706270040 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m2877925922_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m1483702456_gshared (Task_1_t706270040 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m1483702456(__this, method) ((  bool (*) (Task_1_t706270040 *, const MethodInfo*))Task_1_TrySetCanceled_m1483702456_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m88560369_gshared (Task_1_t706270040 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m88560369(__this, ___exception, method) ((  bool (*) (Task_1_t706270040 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m88560369_gshared)(__this, ___exception, method)
