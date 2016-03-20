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

// System.Func`3<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>
struct Func_3_t698853017;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`3<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m3649639326_gshared (Func_3_t698853017 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m3649639326(__this, ___object, ___method, method) ((  void (*) (Func_3_t698853017 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m3649639326_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>::Invoke(T1,T2)
extern "C"  Object_t * Func_3_Invoke_m1601313647_gshared (Func_3_t698853017 * __this, KeyValuePair_2_t3312956448  ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m1601313647(__this, ___arg1, ___arg2, method) ((  Object_t * (*) (Func_3_t698853017 *, KeyValuePair_2_t3312956448 , Object_t *, const MethodInfo*))Func_3_Invoke_m1601313647_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_3_BeginInvoke_m3113524596_gshared (Func_3_t698853017 * __this, KeyValuePair_2_t3312956448  ___arg1, Object_t * ___arg2, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m3113524596(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Object_t * (*) (Func_3_t698853017 *, KeyValuePair_2_t3312956448 , Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m3113524596_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_3_EndInvoke_m159770444_gshared (Func_3_t698853017 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m159770444(__this, ___result, method) ((  Object_t * (*) (Func_3_t698853017 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m159770444_gshared)(__this, ___result, method)
