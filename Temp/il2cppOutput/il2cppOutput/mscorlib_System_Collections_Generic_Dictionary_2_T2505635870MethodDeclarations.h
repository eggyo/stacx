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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>
struct Transform_1_t2505635870;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2989531659_gshared (Transform_1_t2505635870 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2989531659(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2505635870 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2989531659_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::Invoke(TKey,TValue)
extern "C"  DateTime_t339033936  Transform_1_Invoke_m561206161_gshared (Transform_1_t2505635870 * __this, Object_t * ___key, DateTime_t339033936  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m561206161(__this, ___key, ___value, method) ((  DateTime_t339033936  (*) (Transform_1_t2505635870 *, Object_t *, DateTime_t339033936 , const MethodInfo*))Transform_1_Invoke_m561206161_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2158439920_gshared (Transform_1_t2505635870 * __this, Object_t * ___key, DateTime_t339033936  ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2158439920(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t2505635870 *, Object_t *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2158439920_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  DateTime_t339033936  Transform_1_EndInvoke_m2274629721_gshared (Transform_1_t2505635870 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2274629721(__this, ___result, method) ((  DateTime_t339033936  (*) (Transform_1_t2505635870 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2274629721_gshared)(__this, ___result, method)
