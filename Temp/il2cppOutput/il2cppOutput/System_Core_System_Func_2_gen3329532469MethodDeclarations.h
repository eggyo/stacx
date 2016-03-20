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

// System.Func`2<System.SByte,System.Single>
struct Func_2_t3329532469;
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

// System.Void System.Func`2<System.SByte,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2138269703_gshared (Func_2_t3329532469 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2138269703(__this, ___object, ___method, method) ((  void (*) (Func_2_t3329532469 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2138269703_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.SByte,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m1954947839_gshared (Func_2_t3329532469 * __this, int8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1954947839(__this, ___arg1, method) ((  float (*) (Func_2_t3329532469 *, int8_t, const MethodInfo*))Func_2_Invoke_m1954947839_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.SByte,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m4062796210_gshared (Func_2_t3329532469 * __this, int8_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4062796210(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3329532469 *, int8_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m4062796210_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.SByte,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m3154921013_gshared (Func_2_t3329532469 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3154921013(__this, ___result, method) ((  float (*) (Func_2_t3329532469 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3154921013_gshared)(__this, ___result, method)
