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

// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t714201222;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Action`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Action_1_t862653927;
// System.AggregateException
struct AggregateException_t1848402181;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_AggregateException1848402181.h"

// System.Void System.Threading.Tasks.Task`1<System.SByte>::.ctor()
extern "C"  void Task_1__ctor_m1296304334_gshared (Task_1_t714201222 * __this, const MethodInfo* method);
#define Task_1__ctor_m1296304334(__this, method) ((  void (*) (Task_1_t714201222 *, const MethodInfo*))Task_1__ctor_m1296304334_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.SByte>::get_Result()
extern "C"  int8_t Task_1_get_Result_m2250339069_gshared (Task_1_t714201222 * __this, const MethodInfo* method);
#define Task_1_get_Result_m2250339069(__this, method) ((  int8_t (*) (Task_1_t714201222 *, const MethodInfo*))Task_1_get_Result_m2250339069_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.SByte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t2616336456 * Task_1_ContinueWith_m1977801339_gshared (Task_1_t714201222 * __this, Action_1_t862653927 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m1977801339(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t714201222 *, Action_1_t862653927 *, const MethodInfo*))Task_1_ContinueWith_m1977801339_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.SByte>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m2176326471_gshared (Task_1_t714201222 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m2176326471(__this, method) ((  void (*) (Task_1_t714201222 *, const MethodInfo*))Task_1_RunContinuations_m2176326471_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m675872720_gshared (Task_1_t714201222 * __this, int8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m675872720(__this, ___result, method) ((  bool (*) (Task_1_t714201222 *, int8_t, const MethodInfo*))Task_1_TrySetResult_m675872720_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m1939529930_gshared (Task_1_t714201222 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m1939529930(__this, method) ((  bool (*) (Task_1_t714201222 *, const MethodInfo*))Task_1_TrySetCanceled_m1939529930_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.SByte>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m2662195331_gshared (Task_1_t714201222 * __this, AggregateException_t1848402181 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m2662195331(__this, ___exception, method) ((  bool (*) (Task_1_t714201222 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m2662195331_gshared)(__this, ___exception, method)
