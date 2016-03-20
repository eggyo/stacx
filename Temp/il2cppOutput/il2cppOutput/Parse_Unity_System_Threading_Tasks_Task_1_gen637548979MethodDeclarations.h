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

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t637548979;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t786001684;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C"  void Task_1__ctor_m2555675359_gshared (Task_1_t637548979 * __this, const MethodInfo* method);
#define Task_1__ctor_m2555675359(__this, method) ((  void (*) (Task_1_t637548979 *, const MethodInfo*))Task_1__ctor_m2555675359_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C"  uint8_t Task_1_get_Result_m1195680426_gshared (Task_1_t637548979 * __this, const MethodInfo* method);
#define Task_1_get_Result_m1195680426(__this, method) ((  uint8_t (*) (Task_1_t637548979 *, const MethodInfo*))Task_1_get_Result_m1195680426_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m1823139066_gshared (Task_1_t637548979 * __this, Action_1_t786001684 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m1823139066(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t637548979 *, Action_1_t786001684 *, const MethodInfo*))Task_1_ContinueWith_m1823139066_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m3628293270_gshared (Task_1_t637548979 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m3628293270(__this, method) ((  void (*) (Task_1_t637548979 *, const MethodInfo*))Task_1_RunContinuations_m3628293270_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3461214281_gshared (Task_1_t637548979 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m3461214281(__this, ___result, method) ((  bool (*) (Task_1_t637548979 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m3461214281_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m2385772401_gshared (Task_1_t637548979 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m2385772401(__this, method) ((  bool (*) (Task_1_t637548979 *, const MethodInfo*))Task_1_TrySetCanceled_m2385772401_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m534735978_gshared (Task_1_t637548979 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m534735978(__this, ___exception, method) ((  bool (*) (Task_1_t637548979 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m534735978_gshared)(__this, ___exception, method)
