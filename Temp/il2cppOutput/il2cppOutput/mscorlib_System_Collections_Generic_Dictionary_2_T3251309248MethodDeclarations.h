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

// System.Collections.Generic.Dictionary`2/Transform`1<System.TimeSpan,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3251309248;
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
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.TimeSpan,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3364179981_gshared (Transform_1_t3251309248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3364179981(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3251309248 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3364179981_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.TimeSpan,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m1843840651_gshared (Transform_1_t3251309248 * __this, TimeSpan_t763862892  ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1843840651(__this, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t3251309248 *, TimeSpan_t763862892 , Object_t *, const MethodInfo*))Transform_1_Invoke_m1843840651_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.TimeSpan,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2871687862_gshared (Transform_1_t3251309248 * __this, TimeSpan_t763862892  ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2871687862(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t3251309248 *, TimeSpan_t763862892 , Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2871687862_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.TimeSpan,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m2757813535_gshared (Transform_1_t3251309248 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2757813535(__this, ___result, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t3251309248 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2757813535_gshared)(__this, ___result, method)