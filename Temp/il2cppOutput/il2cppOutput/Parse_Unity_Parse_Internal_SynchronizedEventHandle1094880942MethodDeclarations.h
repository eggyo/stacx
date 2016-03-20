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

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t1094880942;
// System.Delegate
struct Delegate_t3660574010;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C"  void SynchronizedEventHandler_1_Add_m4275936633_gshared (SynchronizedEventHandler_1_t1094880942 * __this, Delegate_t3660574010 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m4275936633(__this, ___del, method) ((  void (*) (SynchronizedEventHandler_1_t1094880942 *, Delegate_t3660574010 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m4275936633_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C"  void SynchronizedEventHandler_1_Remove_m1935422908_gshared (SynchronizedEventHandler_1_t1094880942 * __this, Delegate_t3660574010 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m1935422908(__this, ___del, method) ((  void (*) (SynchronizedEventHandler_1_t1094880942 *, Delegate_t3660574010 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m1935422908_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C"  Task_t2616336456 * SynchronizedEventHandler_1_Invoke_m2563509709_gshared (SynchronizedEventHandler_1_t1094880942 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m2563509709(__this, ___sender, ___args, method) ((  Task_t2616336456 * (*) (SynchronizedEventHandler_1_t1094880942 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m2563509709_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C"  void SynchronizedEventHandler_1__ctor_m688340278_gshared (SynchronizedEventHandler_1_t1094880942 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m688340278(__this, method) ((  void (*) (SynchronizedEventHandler_1_t1094880942 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m688340278_gshared)(__this, method)
