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

// System.Func`2<System.Object,System.Int64>
struct Func_2_t4146091814;
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

// System.Void System.Func`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4162203778_gshared (Func_2_t4146091814 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4162203778(__this, ___object, ___method, method) ((  void (*) (Func_2_t4146091814 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4162203778_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Int64>::Invoke(T)
extern "C"  int64_t Func_2_Invoke_m1323351588_gshared (Func_2_t4146091814 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1323351588(__this, ___arg1, method) ((  int64_t (*) (Func_2_t4146091814 *, Object_t *, const MethodInfo*))Func_2_Invoke_m1323351588_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m934489047_gshared (Func_2_t4146091814 * __this, Object_t * ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m934489047(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t4146091814 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m934489047_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Func_2_EndInvoke_m658801712_gshared (Func_2_t4146091814 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m658801712(__this, ___result, method) ((  int64_t (*) (Func_2_t4146091814 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m658801712_gshared)(__this, ___result, method)
