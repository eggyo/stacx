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

// System.Func`2<System.Int64,System.Byte>
struct Func_2_t524057755;
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

// System.Void System.Func`2<System.Int64,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2912287541_gshared (Func_2_t524057755 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2912287541(__this, ___object, ___method, method) ((  void (*) (Func_2_t524057755 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2912287541_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Byte>::Invoke(T)
extern "C"  uint8_t Func_2_Invoke_m419743889_gshared (Func_2_t524057755 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m419743889(__this, ___arg1, method) ((  uint8_t (*) (Func_2_t524057755 *, int64_t, const MethodInfo*))Func_2_Invoke_m419743889_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1023071684_gshared (Func_2_t524057755 * __this, int64_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1023071684(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t524057755 *, int64_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1023071684_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Func_2_EndInvoke_m1541091299_gshared (Func_2_t524057755 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1541091299(__this, ___result, method) ((  uint8_t (*) (Func_2_t524057755 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1541091299_gshared)(__this, ___result, method)
