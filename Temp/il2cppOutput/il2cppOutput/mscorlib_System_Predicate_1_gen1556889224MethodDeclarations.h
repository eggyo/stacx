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

// System.Predicate`1<System.UInt32>
struct Predicate_1_t1556889224;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1727410823_gshared (Predicate_1_t1556889224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1727410823(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1556889224 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1727410823_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.UInt32>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2723750879_gshared (Predicate_1_t1556889224 * __this, uint32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2723750879(__this, ___obj, method) ((  bool (*) (Predicate_1_t1556889224 *, uint32_t, const MethodInfo*))Predicate_1_Invoke_m2723750879_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m1041562162_gshared (Predicate_1_t1556889224 * __this, uint32_t ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1041562162(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t1556889224 *, uint32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1041562162_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m891064661_gshared (Predicate_1_t1556889224 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m891064661(__this, ___result, method) ((  bool (*) (Predicate_1_t1556889224 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m891064661_gshared)(__this, ___result, method)
