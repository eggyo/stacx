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

// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t706269887;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Action_1_t854722592;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Int16>::.ctor()
extern "C"  void Task_1__ctor_m2596687815_gshared (Task_1_t706269887 * __this, const MethodInfo* method);
#define Task_1__ctor_m2596687815(__this, method) ((  void (*) (Task_1_t706269887 *, const MethodInfo*))Task_1__ctor_m2596687815_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int16>::get_Result()
extern "C"  int16_t Task_1_get_Result_m1979817892_gshared (Task_1_t706269887 * __this, const MethodInfo* method);
#define Task_1_get_Result_m1979817892(__this, method) ((  int16_t (*) (Task_1_t706269887 *, const MethodInfo*))Task_1_get_Result_m1979817892_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int16>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m1557652084_gshared (Task_1_t706269887 * __this, Action_1_t854722592 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m1557652084(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t706269887 *, Action_1_t854722592 *, const MethodInfo*))Task_1_ContinueWith_m1557652084_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int16>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m502787758_gshared (Task_1_t706269887 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m502787758(__this, method) ((  void (*) (Task_1_t706269887 *, const MethodInfo*))Task_1_RunContinuations_m502787758_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3233103305_gshared (Task_1_t706269887 * __this, int16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m3233103305(__this, ___result, method) ((  bool (*) (Task_1_t706269887 *, int16_t, const MethodInfo*))Task_1_TrySetResult_m3233103305_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m3904266737_gshared (Task_1_t706269887 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m3904266737(__this, method) ((  bool (*) (Task_1_t706269887 *, const MethodInfo*))Task_1_TrySetCanceled_m3904266737_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int16>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m752070378_gshared (Task_1_t706269887 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m752070378(__this, ___exception, method) ((  bool (*) (Task_1_t706269887 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m752070378_gshared)(__this, ___exception, method)
