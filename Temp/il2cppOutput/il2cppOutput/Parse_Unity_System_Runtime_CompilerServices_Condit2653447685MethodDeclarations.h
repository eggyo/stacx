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

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t2653447685;
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

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void CreateValueCallback__ctor_m1863546180_gshared (CreateValueCallback_t2653447685 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CreateValueCallback__ctor_m1863546180(__this, ___object, ___method, method) ((  void (*) (CreateValueCallback_t2653447685 *, Object_t *, IntPtr_t, const MethodInfo*))CreateValueCallback__ctor_m1863546180_gshared)(__this, ___object, ___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey)
extern "C"  Object_t * CreateValueCallback_Invoke_m1218105371_gshared (CreateValueCallback_t2653447685 * __this, Object_t * ___key, const MethodInfo* method);
#define CreateValueCallback_Invoke_m1218105371(__this, ___key, method) ((  Object_t * (*) (CreateValueCallback_t2653447685 *, Object_t *, const MethodInfo*))CreateValueCallback_Invoke_m1218105371_gshared)(__this, ___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C"  Object_t * CreateValueCallback_BeginInvoke_m1756940092_gshared (CreateValueCallback_t2653447685 * __this, Object_t * ___key, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CreateValueCallback_BeginInvoke_m1756940092(__this, ___key, ___callback, ___object, method) ((  Object_t * (*) (CreateValueCallback_t2653447685 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))CreateValueCallback_BeginInvoke_m1756940092_gshared)(__this, ___key, ___callback, ___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * CreateValueCallback_EndInvoke_m862962524_gshared (CreateValueCallback_t2653447685 * __this, Object_t * ___result, const MethodInfo* method);
#define CreateValueCallback_EndInvoke_m862962524(__this, ___result, method) ((  Object_t * (*) (CreateValueCallback_t2653447685 *, Object_t *, const MethodInfo*))CreateValueCallback_EndInvoke_m862962524_gshared)(__this, ___result, method)
