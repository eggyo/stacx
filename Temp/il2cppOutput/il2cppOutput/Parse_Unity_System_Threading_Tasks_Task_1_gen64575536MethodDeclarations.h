﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen2990928874MethodDeclarations.h"

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::.ctor()
#define Task_1__ctor_m1460198887(__this, method) ((  void (*) (Task_1_t64575536 *, const MethodInfo*))Task_1__ctor_m3537797078_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::get_Result()
#define Task_1_get_Result_m1236161890(__this, method) ((  Task_1_t2205720378 * (*) (Task_1_t64575536 *, const MethodInfo*))Task_1_get_Result_m645153875_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m530690754(__this, ___continuation, method) ((  Task_t2616336456 * (*) (Task_1_t64575536 *, Action_1_t213028241 *, const MethodInfo*))Task_1_ContinueWith_m1606853425_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::RunContinuations()
#define Task_1_RunContinuations_m73747598(__this, method) ((  void (*) (Task_1_t64575536 *, const MethodInfo*))Task_1_RunContinuations_m692743999_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetResult(T)
#define Task_1_TrySetResult_m2747984977(__this, ___result, method) ((  bool (*) (Task_1_t64575536 *, Task_1_t2205720378 *, const MethodInfo*))Task_1_TrySetResult_m717232448_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m1750500457(__this, method) ((  bool (*) (Task_1_t64575536 *, const MethodInfo*))Task_1_TrySetCanceled_m3221681498_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m112012130(__this, ___exception, method) ((  bool (*) (Task_1_t64575536 *, AggregateException_t1848402181 *, const MethodInfo*))Task_1_TrySetException_m2399297811_gshared)(__this, ___exception, method)