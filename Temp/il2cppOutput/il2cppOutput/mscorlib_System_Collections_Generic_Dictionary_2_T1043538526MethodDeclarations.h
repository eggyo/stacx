﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Transform_1_t1043538526;
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
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m383414734_gshared (Transform_1_t1043538526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m383414734(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1043538526 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m383414734_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4178704223  Transform_1_Invoke_m4120305258_gshared (Transform_1_t1043538526 * __this, Object_t * ___key, ParseGeoPoint_t1702854195  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4120305258(__this, ___key, ___value, method) ((  KeyValuePair_2_t4178704223  (*) (Transform_1_t1043538526 *, Object_t *, ParseGeoPoint_t1702854195 , const MethodInfo*))Transform_1_Invoke_m4120305258_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2309037333_gshared (Transform_1_t1043538526 * __this, Object_t * ___key, ParseGeoPoint_t1702854195  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2309037333(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1043538526 *, Object_t *, ParseGeoPoint_t1702854195 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2309037333_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4178704223  Transform_1_EndInvoke_m407600096_gshared (Transform_1_t1043538526 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m407600096(__this, ___result, method) ((  KeyValuePair_2_t4178704223  (*) (Transform_1_t1043538526 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m407600096_gshared)(__this, ___result, method)
