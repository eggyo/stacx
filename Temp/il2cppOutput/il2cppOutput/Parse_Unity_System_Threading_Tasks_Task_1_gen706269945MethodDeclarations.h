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

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t706269945;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t854722650;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C"  void Task_1__ctor_m1452724097_gshared (Task_1_t706269945 * __this, const MethodInfo* method);
#define Task_1__ctor_m1452724097(__this, method) ((  void (*) (Task_1_t706269945 *, const MethodInfo*))Task_1__ctor_m1452724097_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C"  int32_t Task_1_get_Result_m2433606698_gshared (Task_1_t706269945 * __this, const MethodInfo* method);
#define Task_1_get_Result_m2433606698(__this, method) ((  int32_t (*) (Task_1_t706269945 *, const MethodInfo*))Task_1_get_Result_m2433606698_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m648932398_gshared (Task_1_t706269945 * __this, Action_1_t854722650 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m648932398(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t706269945 *, Action_1_t854722650 *, const MethodInfo*))Task_1_ContinueWith_m648932398_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m2554607284_gshared (Task_1_t706269945 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m2554607284(__this, method) ((  void (*) (Task_1_t706269945 *, const MethodInfo*))Task_1_RunContinuations_m2554607284_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m1498375043_gshared (Task_1_t706269945 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m1498375043(__this, ___result, method) ((  bool (*) (Task_1_t706269945 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m1498375043_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m1667298167_gshared (Task_1_t706269945 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m1667298167(__this, method) ((  bool (*) (Task_1_t706269945 *, const MethodInfo*))Task_1_TrySetCanceled_m1667298167_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m837403888_gshared (Task_1_t706269945 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m837403888(__this, ___exception, method) ((  bool (*) (Task_1_t706269945 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m837403888_gshared)(__this, ___exception, method)
