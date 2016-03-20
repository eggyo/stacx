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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
struct Transform_1_t1356716698;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22261603528.h"
#include "System_Core_System_TimeZoneInfo_TimeType2282261447.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3870935446_gshared (Transform_1_t1356716698 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3870935446(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1356716698 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3870935446_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2261603528  Transform_1_Invoke_m2991043490_gshared (Transform_1_t1356716698 * __this, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2991043490(__this, ___key, ___value, method) ((  KeyValuePair_2_t2261603528  (*) (Transform_1_t1356716698 *, int32_t, TimeType_t2282261447 , const MethodInfo*))Transform_1_Invoke_m2991043490_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m4143255117_gshared (Transform_1_t1356716698 * __this, int32_t ___key, TimeType_t2282261447  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4143255117(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1356716698 *, int32_t, TimeType_t2282261447 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m4143255117_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2261603528  Transform_1_EndInvoke_m185578408_gshared (Transform_1_t1356716698 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m185578408(__this, ___result, method) ((  KeyValuePair_2_t2261603528  (*) (Transform_1_t1356716698 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m185578408_gshared)(__this, ___result, method)
