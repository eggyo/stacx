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

// System.Func`2<System.Single,System.Double>
struct Func_2_t3041101053;
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

// System.Void System.Func`2<System.Single,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2480803857_gshared (Func_2_t3041101053 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2480803857(__this, ___object, ___method, method) ((  void (*) (Func_2_t3041101053 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2480803857_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Double>::Invoke(T)
extern "C"  double Func_2_Invoke_m3622704817_gshared (Func_2_t3041101053 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3622704817(__this, ___arg1, method) ((  double (*) (Func_2_t3041101053 *, float, const MethodInfo*))Func_2_Invoke_m3622704817_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3027413472_gshared (Func_2_t3041101053 * __this, float ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3027413472(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3041101053 *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3027413472_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  double Func_2_EndInvoke_m3357930947_gshared (Func_2_t3041101053 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3357930947(__this, ___result, method) ((  double (*) (Func_2_t3041101053 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3357930947_gshared)(__this, ___result, method)