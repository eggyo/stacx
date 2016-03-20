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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t1870482934;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775354.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m2080822918_gshared (Comparison_1_t1870482934 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2080822918(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1870482934 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2080822918_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3002462514_gshared (Comparison_1_t1870482934 * __this, KeyValuePair_2_t3461775354  ___x, KeyValuePair_2_t3461775354  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m3002462514(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1870482934 *, KeyValuePair_2_t3461775354 , KeyValuePair_2_t3461775354 , const MethodInfo*))Comparison_1_Invoke_m3002462514_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m652749435_gshared (Comparison_1_t1870482934 * __this, KeyValuePair_2_t3461775354  ___x, KeyValuePair_2_t3461775354  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m652749435(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1870482934 *, KeyValuePair_2_t3461775354 , KeyValuePair_2_t3461775354 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m652749435_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1065188858_gshared (Comparison_1_t1870482934 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1065188858(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1870482934 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1065188858_gshared)(__this, ___result, method)
