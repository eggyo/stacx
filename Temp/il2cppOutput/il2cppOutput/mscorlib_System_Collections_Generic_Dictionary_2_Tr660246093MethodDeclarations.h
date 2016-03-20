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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Int64>
struct Transform_1_t660246093;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3274658818_gshared (Transform_1_t660246093 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3274658818(__this, ___object, ___method, method) ((  void (*) (Transform_1_t660246093 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3274658818_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Int64>::Invoke(TKey,TValue)
extern "C"  int64_t Transform_1_Invoke_m2826096950_gshared (Transform_1_t660246093 * __this, int64_t ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2826096950(__this, ___key, ___value, method) ((  int64_t (*) (Transform_1_t660246093 *, int64_t, bool, const MethodInfo*))Transform_1_Invoke_m2826096950_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m3293163617_gshared (Transform_1_t660246093 * __this, int64_t ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3293163617(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t660246093 *, int64_t, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m3293163617_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Transform_1_EndInvoke_m2926842260_gshared (Transform_1_t660246093 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2926842260(__this, ___result, method) ((  int64_t (*) (Transform_1_t660246093 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2926842260_gshared)(__this, ___result, method)
