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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>
struct Transform_1_t1241340878;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23428509667.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m529264266_gshared (Transform_1_t1241340878 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m529264266(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1241340878 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m529264266_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3428509667  Transform_1_Invoke_m922545710_gshared (Transform_1_t1241340878 * __this, int64_t ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m922545710(__this, ___key, ___value, method) ((  KeyValuePair_2_t3428509667  (*) (Transform_1_t1241340878 *, int64_t, bool, const MethodInfo*))Transform_1_Invoke_m922545710_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m698274265_gshared (Transform_1_t1241340878 * __this, int64_t ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m698274265(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1241340878 *, int64_t, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m698274265_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3428509667  Transform_1_EndInvoke_m1742252444_gshared (Transform_1_t1241340878 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1742252444(__this, ___result, method) ((  KeyValuePair_2_t3428509667  (*) (Transform_1_t1241340878 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1742252444_gshared)(__this, ___result, method)
