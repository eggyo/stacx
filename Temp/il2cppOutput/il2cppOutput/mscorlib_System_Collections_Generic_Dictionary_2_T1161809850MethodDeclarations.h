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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>
struct Transform_1_t1161809850;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4236838411_gshared (Transform_1_t1161809850 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4236838411(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1161809850 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4236838411_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::Invoke(TKey,TValue)
extern "C"  int64_t Transform_1_Invoke_m1212881169_gshared (Transform_1_t1161809850 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1212881169(__this, ___key, ___value, method) ((  int64_t (*) (Transform_1_t1161809850 *, int64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1212881169_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1777645296_gshared (Transform_1_t1161809850 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1777645296(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1161809850 *, int64_t, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1777645296_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Transform_1_EndInvoke_m292676313_gshared (Transform_1_t1161809850 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m292676313(__this, ___result, method) ((  int64_t (*) (Transform_1_t1161809850 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m292676313_gshared)(__this, ___result, method)
