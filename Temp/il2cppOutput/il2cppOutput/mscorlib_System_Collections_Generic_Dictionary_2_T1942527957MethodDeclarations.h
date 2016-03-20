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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
struct Transform_1_t1942527957;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_Core_System_TimeZoneInfo_TimeType2282261447.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2400739207_gshared (Transform_1_t1942527957 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2400739207(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1942527957 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2400739207_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3588499409_gshared (Transform_1_t1942527957 * __this, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3588499409(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t1942527957 *, int32_t, TimeType_t2282261447 , const MethodInfo*))Transform_1_Invoke_m3588499409_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m863911292_gshared (Transform_1_t1942527957 * __this, int32_t ___key, TimeType_t2282261447  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m863911292(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1942527957 *, int32_t, TimeType_t2282261447 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m863911292_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3061849113_gshared (Transform_1_t1942527957 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3061849113(__this, ___result, method) ((  int32_t (*) (Transform_1_t1942527957 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3061849113_gshared)(__this, ___result, method)
