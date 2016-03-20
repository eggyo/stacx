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

// System.Func`2<System.Object,System.UInt32>
struct Func_2_t2284602258;
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

// System.Void System.Func`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m394927474_gshared (Func_2_t2284602258 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m394927474(__this, ___object, ___method, method) ((  void (*) (Func_2_t2284602258 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m394927474_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.UInt32>::Invoke(T)
extern "C"  uint32_t Func_2_Invoke_m542189104_gshared (Func_2_t2284602258 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m542189104(__this, ___arg1, method) ((  uint32_t (*) (Func_2_t2284602258 *, Object_t *, const MethodInfo*))Func_2_Invoke_m542189104_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3285192287_gshared (Func_2_t2284602258 * __this, Object_t * ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3285192287(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2284602258 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3285192287_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  uint32_t Func_2_EndInvoke_m1038736292_gshared (Func_2_t2284602258 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1038736292(__this, ___result, method) ((  uint32_t (*) (Func_2_t2284602258 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1038736292_gshared)(__this, ___result, method)
