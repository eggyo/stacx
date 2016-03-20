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

// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t3139747722;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Action_1_t3288200427;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.UInt16>::.ctor()
extern "C"  void Task_1__ctor_m1189823350_gshared (Task_1_t3139747722 * __this, const MethodInfo* method);
#define Task_1__ctor_m1189823350(__this, method) ((  void (*) (Task_1_t3139747722 *, const MethodInfo*))Task_1__ctor_m1189823350_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt16>::get_Result()
extern "C"  uint16_t Task_1_get_Result_m737199283_gshared (Task_1_t3139747722 * __this, const MethodInfo* method);
#define Task_1_get_Result_m737199283(__this, method) ((  uint16_t (*) (Task_1_t3139747722 *, const MethodInfo*))Task_1_get_Result_m737199283_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m2134116049_gshared (Task_1_t3139747722 * __this, Action_1_t3288200427 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m2134116049(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t3139747722 *, Action_1_t3288200427 *, const MethodInfo*))Task_1_ContinueWith_m2134116049_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt16>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m364717983_gshared (Task_1_t3139747722 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m364717983(__this, method) ((  void (*) (Task_1_t3139747722 *, const MethodInfo*))Task_1_RunContinuations_m364717983_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m2652847328_gshared (Task_1_t3139747722 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m2652847328(__this, ___result, method) ((  bool (*) (Task_1_t3139747722 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m2652847328_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m3096200634_gshared (Task_1_t3139747722 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m3096200634(__this, method) ((  bool (*) (Task_1_t3139747722 *, const MethodInfo*))Task_1_TrySetCanceled_m3096200634_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m250214771_gshared (Task_1_t3139747722 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m250214771(__this, ___exception, method) ((  bool (*) (Task_1_t3139747722 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m250214771_gshared)(__this, ___exception, method)
