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

// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_5_t875099911;
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

// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_5__ctor_m2081941779_gshared (Func_5_t875099911 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_5__ctor_m2081941779(__this, ___object, ___method, method) ((  void (*) (Func_5_t875099911 *, Object_t *, IntPtr_t, const MethodInfo*))Func_5__ctor_m2081941779_gshared)(__this, ___object, ___method, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  Object_t * Func_5_Invoke_m3831797397_gshared (Func_5_t875099911 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
#define Func_5_Invoke_m3831797397(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) ((  Object_t * (*) (Func_5_t875099911 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))Func_5_Invoke_m3831797397_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_5_BeginInvoke_m149906808_gshared (Func_5_t875099911 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_5_BeginInvoke_m149906808(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) ((  Object_t * (*) (Func_5_t875099911 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_5_BeginInvoke_m149906808_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_5_EndInvoke_m217421125_gshared (Func_5_t875099911 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_5_EndInvoke_m217421125(__this, ___result, method) ((  Object_t * (*) (Func_5_t875099911 *, Object_t *, const MethodInfo*))Func_5_EndInvoke_m217421125_gshared)(__this, ___result, method)
