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

// System.Threading.Tasks.Task`1<System.Char>
struct Task_1_t637561857;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.Char>>
struct Action_1_t786014562;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.Char>::.ctor()
extern "C"  void Task_1__ctor_m2699865005_gshared (Task_1_t637561857 * __this, const MethodInfo* method);
#define Task_1__ctor_m2699865005(__this, method) ((  void (*) (Task_1_t637561857 *, const MethodInfo*))Task_1__ctor_m2699865005_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Char>::get_Result()
extern "C"  uint16_t Task_1_get_Result_m2131479196_gshared (Task_1_t637561857 * __this, const MethodInfo* method);
#define Task_1_get_Result_m2131479196(__this, method) ((  uint16_t (*) (Task_1_t637561857 *, const MethodInfo*))Task_1_get_Result_m2131479196_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Char>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m734677960_gshared (Task_1_t637561857 * __this, Action_1_t786014562 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m734677960(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t637561857 *, Action_1_t786014562 *, const MethodInfo*))Task_1_ContinueWith_m734677960_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Char>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m4084549384_gshared (Task_1_t637561857 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m4084549384(__this, method) ((  void (*) (Task_1_t637561857 *, const MethodInfo*))Task_1_RunContinuations_m4084549384_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3209653015_gshared (Task_1_t637561857 * __this, uint16_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m3209653015(__this, ___result, method) ((  bool (*) (Task_1_t637561857 *, uint16_t, const MethodInfo*))Task_1_TrySetResult_m3209653015_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m3177307747_gshared (Task_1_t637561857 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m3177307747(__this, method) ((  bool (*) (Task_1_t637561857 *, const MethodInfo*))Task_1_TrySetCanceled_m3177307747_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Char>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m4227178716_gshared (Task_1_t637561857 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m4227178716(__this, ___exception, method) ((  bool (*) (Task_1_t637561857 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m4227178716_gshared)(__this, ___exception, method)
