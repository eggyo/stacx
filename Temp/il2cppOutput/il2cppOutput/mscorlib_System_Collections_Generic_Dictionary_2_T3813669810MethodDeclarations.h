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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Transform_1_t3813669810;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23010366642.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3591026496_gshared (Transform_1_t3813669810 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3591026496(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3813669810 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3591026496_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3010366642  Transform_1_Invoke_m2167967800_gshared (Transform_1_t3813669810 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2167967800(__this, ___key, ___value, method) ((  KeyValuePair_2_t3010366642  (*) (Transform_1_t3813669810 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m2167967800_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m911352291_gshared (Transform_1_t3813669810 * __this, Object_t * ___key, double ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m911352291(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t3813669810 *, Object_t *, double, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m911352291_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3010366642  Transform_1_EndInvoke_m2991865170_gshared (Transform_1_t3813669810 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2991865170(__this, ___result, method) ((  KeyValuePair_2_t3010366642  (*) (Transform_1_t3813669810 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2991865170_gshared)(__this, ___result, method)
