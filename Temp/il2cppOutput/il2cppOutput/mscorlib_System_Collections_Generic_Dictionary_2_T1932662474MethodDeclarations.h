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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>
struct Transform_1_t1932662474;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3911383985_gshared (Transform_1_t1932662474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3911383985(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1932662474 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3911383985_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::Invoke(TKey,TValue)
extern "C"  float Transform_1_Invoke_m3990877099_gshared (Transform_1_t1932662474 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3990877099(__this, ___key, ___value, method) ((  float (*) (Transform_1_t1932662474 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m3990877099_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1281538314_gshared (Transform_1_t1932662474 * __this, Object_t * ___key, float ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1281538314(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1932662474 *, Object_t *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1281538314_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Transform_1_EndInvoke_m3473818623_gshared (Transform_1_t1932662474 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3473818623(__this, ___result, method) ((  float (*) (Transform_1_t1932662474 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3473818623_gshared)(__this, ___result, method)
