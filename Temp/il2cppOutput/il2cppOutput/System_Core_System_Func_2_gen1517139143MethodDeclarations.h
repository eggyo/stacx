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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Func_2_t1517139143;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24178704223.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3674617417_gshared (Func_2_t1517139143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3674617417(__this, ___object, ___method, method) ((  void (*) (Func_2_t1517139143 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3674617417_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(T)
extern "C"  KeyValuePair_2_t4178704223  Func_2_Invoke_m3669147513_gshared (Func_2_t1517139143 * __this, KeyValuePair_2_t3312956448  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3669147513(__this, ___arg1, method) ((  KeyValuePair_2_t4178704223  (*) (Func_2_t1517139143 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Func_2_Invoke_m3669147513_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1672693928_gshared (Func_2_t1517139143 * __this, KeyValuePair_2_t3312956448  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1672693928(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1517139143 *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1672693928_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4178704223  Func_2_EndInvoke_m3268680187_gshared (Func_2_t1517139143 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3268680187(__this, ___result, method) ((  KeyValuePair_2_t4178704223  (*) (Func_2_t1517139143 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3268680187_gshared)(__this, ___result, method)
