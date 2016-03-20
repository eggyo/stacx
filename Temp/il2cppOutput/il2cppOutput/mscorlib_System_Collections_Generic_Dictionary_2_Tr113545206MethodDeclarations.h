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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Transform_1_t113545206;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3757893742_gshared (Transform_1_t113545206 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3757893742(__this, ___object, ___method, method) ((  void (*) (Transform_1_t113545206 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3757893742_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3434059049  Transform_1_Invoke_m4133218506_gshared (Transform_1_t113545206 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4133218506(__this, ___key, ___value, method) ((  KeyValuePair_2_t3434059049  (*) (Transform_1_t113545206 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m4133218506_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m3465937013_gshared (Transform_1_t113545206 * __this, Object_t * ___key, float ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3465937013(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t113545206 *, Object_t *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m3465937013_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3434059049  Transform_1_EndInvoke_m762983808_gshared (Transform_1_t113545206 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m762983808(__this, ___result, method) ((  KeyValuePair_2_t3434059049  (*) (Transform_1_t113545206 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m762983808_gshared)(__this, ___result, method)
