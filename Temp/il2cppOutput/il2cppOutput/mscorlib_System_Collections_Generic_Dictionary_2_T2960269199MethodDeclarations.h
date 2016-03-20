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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
struct Transform_1_t2960269199;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3763798696_gshared (Transform_1_t2960269199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3763798696(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2960269199 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3763798696_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::Invoke(TKey,TValue)
extern "C"  int64_t Transform_1_Invoke_m1217528528_gshared (Transform_1_t2960269199 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1217528528(__this, ___key, ___value, method) ((  int64_t (*) (Transform_1_t2960269199 *, int64_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1217528528_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2079209851_gshared (Transform_1_t2960269199 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2079209851(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t2960269199 *, int64_t, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2079209851_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Transform_1_EndInvoke_m3061431226_gshared (Transform_1_t2960269199 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3061431226(__this, ___result, method) ((  int64_t (*) (Transform_1_t2960269199 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3061431226_gshared)(__this, ___result, method)
