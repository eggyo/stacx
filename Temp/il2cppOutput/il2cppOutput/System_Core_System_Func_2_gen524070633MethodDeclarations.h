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

// System.Func`2<System.Int64,System.Char>
struct Func_2_t524070633;
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

// System.Void System.Func`2<System.Int64,System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2002305447_gshared (Func_2_t524070633 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2002305447(__this, ___object, ___method, method) ((  void (*) (Func_2_t524070633 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2002305447_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Char>::Invoke(T)
extern "C"  uint16_t Func_2_Invoke_m1547040223_gshared (Func_2_t524070633 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1547040223(__this, ___arg1, method) ((  uint16_t (*) (Func_2_t524070633 *, int64_t, const MethodInfo*))Func_2_Invoke_m1547040223_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3146259730_gshared (Func_2_t524070633 * __this, int64_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3146259730(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t524070633 *, int64_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3146259730_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t Func_2_EndInvoke_m802619221_gshared (Func_2_t524070633 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m802619221(__this, ___result, method) ((  uint16_t (*) (Func_2_t524070633 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m802619221_gshared)(__this, ___result, method)
