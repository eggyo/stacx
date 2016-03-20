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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t1870483029;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775449.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m325228453_gshared (Comparison_1_t1870483029 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m325228453(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1870483029 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m325228453_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1746355955_gshared (Comparison_1_t1870483029 * __this, KeyValuePair_2_t3461775449  ___x, KeyValuePair_2_t3461775449  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1746355955(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1870483029 *, KeyValuePair_2_t3461775449 , KeyValuePair_2_t3461775449 , const MethodInfo*))Comparison_1_Invoke_m1746355955_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m2584800060_gshared (Comparison_1_t1870483029 * __this, KeyValuePair_2_t3461775449  ___x, KeyValuePair_2_t3461775449  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2584800060(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1870483029 *, KeyValuePair_2_t3461775449 , KeyValuePair_2_t3461775449 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m2584800060_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1777116825_gshared (Comparison_1_t1870483029 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1777116825(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1870483029 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1777116825_gshared)(__this, ___result, method)
