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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
struct Transform_1_t1377374617;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m317638214_gshared (Transform_1_t1377374617 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m317638214(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1377374617 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m317638214_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::Invoke(TKey,TValue)
extern "C"  TimeType_t2282261447  Transform_1_Invoke_m2929901298_gshared (Transform_1_t1377374617 * __this, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2929901298(__this, ___key, ___value, method) ((  TimeType_t2282261447  (*) (Transform_1_t1377374617 *, int32_t, TimeType_t2282261447 , const MethodInfo*))Transform_1_Invoke_m2929901298_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m633213853_gshared (Transform_1_t1377374617 * __this, int32_t ___key, TimeType_t2282261447  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m633213853(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1377374617 *, int32_t, TimeType_t2282261447 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m633213853_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::EndInvoke(System.IAsyncResult)
extern "C"  TimeType_t2282261447  Transform_1_EndInvoke_m1634956888_gshared (Transform_1_t1377374617 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1634956888(__this, ___result, method) ((  TimeType_t2282261447  (*) (Transform_1_t1377374617 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1634956888_gshared)(__this, ___result, method)
