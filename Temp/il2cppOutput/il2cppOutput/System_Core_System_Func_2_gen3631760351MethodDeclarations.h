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

// System.Func`2<System.UInt32,System.Boolean>
struct Func_2_t3631760351;
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

// System.Void System.Func`2<System.UInt32,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3861971585_gshared (Func_2_t3631760351 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3861971585(__this, ___object, ___method, method) ((  void (*) (Func_2_t3631760351 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3861971585_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2674500293_gshared (Func_2_t3631760351 * __this, uint32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2674500293(__this, ___arg1, method) ((  bool (*) (Func_2_t3631760351 *, uint32_t, const MethodInfo*))Func_2_Invoke_m2674500293_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m2912021240_gshared (Func_2_t3631760351 * __this, uint32_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2912021240(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3631760351 *, uint32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m2912021240_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m2953608751_gshared (Func_2_t3631760351 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2953608751(__this, ___result, method) ((  bool (*) (Func_2_t3631760351 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2953608751_gshared)(__this, ___result, method)
