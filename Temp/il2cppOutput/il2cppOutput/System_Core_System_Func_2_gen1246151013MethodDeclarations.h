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

// System.Func`2<System.Char,System.Object>
struct Func_2_t1246151013;
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

// System.Void System.Func`2<System.Char,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1922629525_gshared (Func_2_t1246151013 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1922629525(__this, ___object, ___method, method) ((  void (*) (Func_2_t1246151013 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1922629525_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m3692866093_gshared (Func_2_t1246151013 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3692866093(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t1246151013 *, uint16_t, const MethodInfo*))Func_2_Invoke_m3692866093_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m604885212_gshared (Func_2_t1246151013 * __this, uint16_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m604885212(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1246151013 *, uint16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m604885212_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m3215435719_gshared (Func_2_t1246151013 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3215435719(__this, ___result, method) ((  Object_t * (*) (Func_2_t1246151013 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3215435719_gshared)(__this, ___result, method)
