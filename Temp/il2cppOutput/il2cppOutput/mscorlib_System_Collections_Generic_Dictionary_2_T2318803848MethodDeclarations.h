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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>
struct Transform_1_t2318803848;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2331300647_gshared (Transform_1_t2318803848 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2331300647(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2318803848 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2331300647_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C"  bool Transform_1_Invoke_m2155861297_gshared (Transform_1_t2318803848 * __this, int64_t ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2155861297(__this, ___key, ___value, method) ((  bool (*) (Transform_1_t2318803848 *, int64_t, bool, const MethodInfo*))Transform_1_Invoke_m2155861297_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2770977756_gshared (Transform_1_t2318803848 * __this, int64_t ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2770977756(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t2318803848 *, int64_t, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2770977756_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Transform_1_EndInvoke_m3697562297_gshared (Transform_1_t2318803848 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3697562297(__this, ___result, method) ((  bool (*) (Transform_1_t2318803848 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m3697562297_gshared)(__this, ___result, method)
