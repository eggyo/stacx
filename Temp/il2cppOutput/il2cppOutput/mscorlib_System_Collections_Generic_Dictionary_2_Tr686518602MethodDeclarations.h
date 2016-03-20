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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Transform_1_t686518602;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22814883964.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1954397076_gshared (Transform_1_t686518602 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1954397076(__this, ___object, ___method, method) ((  void (*) (Transform_1_t686518602 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1954397076_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2814883964  Transform_1_Invoke_m2671058788_gshared (Transform_1_t686518602 * __this, Object_t * ___key, DateTime_t339033936  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2671058788(__this, ___key, ___value, method) ((  KeyValuePair_2_t2814883964  (*) (Transform_1_t686518602 *, Object_t *, DateTime_t339033936 , const MethodInfo*))Transform_1_Invoke_m2671058788_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1661534735_gshared (Transform_1_t686518602 * __this, Object_t * ___key, DateTime_t339033936  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1661534735(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t686518602 *, Object_t *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1661534735_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2814883964  Transform_1_EndInvoke_m3435182758_gshared (Transform_1_t686518602 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3435182758(__this, ___result, method) ((  KeyValuePair_2_t2814883964  (*) (Transform_1_t686518602 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3435182758_gshared)(__this, ___result, method)
