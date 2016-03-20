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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t3920316623;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t2653447685;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C"  void ConditionalWeakTable_2__ctor_m2839266515_gshared (ConditionalWeakTable_2_t3920316623 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2__ctor_m2839266515(__this, method) ((  void (*) (ConditionalWeakTable_2_t3920316623 *, const MethodInfo*))ConditionalWeakTable_2__ctor_m2839266515_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
extern "C"  void ConditionalWeakTable_2_CleanUp_m3898695605_gshared (ConditionalWeakTable_2_t3920316623 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2_CleanUp_m3898695605(__this, method) ((  void (*) (ConditionalWeakTable_2_t3920316623 *, const MethodInfo*))ConditionalWeakTable_2_CleanUp_m3898695605_gshared)(__this, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
extern "C"  Object_t * ConditionalWeakTable_2_GetValue_m1856714722_gshared (ConditionalWeakTable_2_t3920316623 * __this, Object_t * ___key, CreateValueCallback_t2653447685 * ___createValueCallback, const MethodInfo* method);
#define ConditionalWeakTable_2_GetValue_m1856714722(__this, ___key, ___createValueCallback, method) ((  Object_t * (*) (ConditionalWeakTable_2_t3920316623 *, Object_t *, CreateValueCallback_t2653447685 *, const MethodInfo*))ConditionalWeakTable_2_GetValue_m1856714722_gshared)(__this, ___key, ___createValueCallback, method)
