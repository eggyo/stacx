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

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t3139747780;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t3288200485;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C"  void Task_1__ctor_m45859632_gshared (Task_1_t3139747780 * __this, const MethodInfo* method);
#define Task_1__ctor_m45859632(__this, method) ((  void (*) (Task_1_t3139747780 *, const MethodInfo*))Task_1__ctor_m45859632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C"  uint32_t Task_1_get_Result_m1190988089_gshared (Task_1_t3139747780 * __this, const MethodInfo* method);
#define Task_1_get_Result_m1190988089(__this, method) ((  uint32_t (*) (Task_1_t3139747780 *, const MethodInfo*))Task_1_get_Result_m1190988089_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m1225396363_gshared (Task_1_t3139747780 * __this, Action_1_t3288200485 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m1225396363(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t3139747780 *, Action_1_t3288200485 *, const MethodInfo*))Task_1_ContinueWith_m1225396363_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m2416537509_gshared (Task_1_t3139747780 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m2416537509(__this, method) ((  void (*) (Task_1_t3139747780 *, const MethodInfo*))Task_1_RunContinuations_m2416537509_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m918119066_gshared (Task_1_t3139747780 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m918119066(__this, ___result, method) ((  bool (*) (Task_1_t3139747780 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m918119066_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m859232064_gshared (Task_1_t3139747780 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m859232064(__this, method) ((  bool (*) (Task_1_t3139747780 *, const MethodInfo*))Task_1_TrySetCanceled_m859232064_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m335548281_gshared (Task_1_t3139747780 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m335548281(__this, ___exception, method) ((  bool (*) (Task_1_t3139747780 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m335548281_gshared)(__this, ___exception, method)
