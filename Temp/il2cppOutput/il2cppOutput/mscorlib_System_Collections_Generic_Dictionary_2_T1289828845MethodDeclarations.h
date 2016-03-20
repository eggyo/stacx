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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>
struct Transform_1_t1289828845;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3838636878_gshared (Transform_1_t1289828845 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3838636878(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1289828845 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3838636878_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m2281740906_gshared (Transform_1_t1289828845 * __this, Object_t * ___key, ParseGeoPoint_t1702854195  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2281740906(__this, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1289828845 *, Object_t *, ParseGeoPoint_t1702854195 , const MethodInfo*))Transform_1_Invoke_m2281740906_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2801004693_gshared (Transform_1_t1289828845 * __this, Object_t * ___key, ParseGeoPoint_t1702854195  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2801004693(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1289828845 *, Object_t *, ParseGeoPoint_t1702854195 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2801004693_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m2410954720_gshared (Transform_1_t1289828845 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2410954720(__this, ___result, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1289828845 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2410954720_gshared)(__this, ___result, method)
