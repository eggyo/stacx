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

// System.Func`2<System.Single,System.Int64>
struct Func_2_t1059032025;
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

// System.Void System.Func`2<System.Single,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1217912139_gshared (Func_2_t1059032025 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1217912139(__this, ___object, ___method, method) ((  void (*) (Func_2_t1059032025 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1217912139_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Int64>::Invoke(T)
extern "C"  int64_t Func_2_Invoke_m373025083_gshared (Func_2_t1059032025 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m373025083(__this, ___arg1, method) ((  int64_t (*) (Func_2_t1059032025 *, float, const MethodInfo*))Func_2_Invoke_m373025083_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3517658094_gshared (Func_2_t1059032025 * __this, float ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3517658094(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1059032025 *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3517658094_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Func_2_EndInvoke_m2737175929_gshared (Func_2_t1059032025 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2737175929(__this, ___result, method) ((  int64_t (*) (Func_2_t1059032025 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2737175929_gshared)(__this, ___result, method)