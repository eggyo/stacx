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

// System.Comparison`1<System.Int16>
struct Comparison_1_t1256122309;
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

// System.Void System.Comparison`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3755411572_gshared (Comparison_1_t1256122309 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3755411572(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1256122309 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3755411572_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int16>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m845229572_gshared (Comparison_1_t1256122309 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m845229572(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1256122309 *, int16_t, int16_t, const MethodInfo*))Comparison_1_Invoke_m845229572_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m3976888141_gshared (Comparison_1_t1256122309 * __this, int16_t ___x, int16_t ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m3976888141(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1256122309 *, int16_t, int16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m3976888141_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m3945962472_gshared (Comparison_1_t1256122309 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m3945962472(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1256122309 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m3945962472_gshared)(__this, ___result, method)
