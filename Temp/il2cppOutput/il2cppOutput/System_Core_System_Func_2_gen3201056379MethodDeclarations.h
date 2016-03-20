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

// System.Func`2<System.UInt64,System.Object>
struct Func_2_t3201056379;
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

// System.Void System.Func`2<System.UInt64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2445065267_gshared (Func_2_t3201056379 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2445065267(__this, ___object, ___method, method) ((  void (*) (Func_2_t3201056379 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2445065267_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m1585174607_gshared (Func_2_t3201056379 * __this, uint64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1585174607(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t3201056379 *, uint64_t, const MethodInfo*))Func_2_Invoke_m1585174607_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1967519102_gshared (Func_2_t3201056379 * __this, uint64_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1967519102(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3201056379 *, uint64_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1967519102_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m2750677733_gshared (Func_2_t3201056379 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2750677733(__this, ___result, method) ((  Object_t * (*) (Func_2_t3201056379 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2750677733_gshared)(__this, ___result, method)
