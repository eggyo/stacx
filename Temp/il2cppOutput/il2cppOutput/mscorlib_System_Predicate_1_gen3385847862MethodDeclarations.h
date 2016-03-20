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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t3385847862;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22814883964.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m318938202_gshared (Predicate_1_t3385847862 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m318938202(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3385847862 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m318938202_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2727696744_gshared (Predicate_1_t3385847862 * __this, KeyValuePair_2_t2814883964  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2727696744(__this, ___obj, method) ((  bool (*) (Predicate_1_t3385847862 *, KeyValuePair_2_t2814883964 , const MethodInfo*))Predicate_1_Invoke_m2727696744_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m3307951223_gshared (Predicate_1_t3385847862 * __this, KeyValuePair_2_t2814883964  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3307951223(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t3385847862 *, KeyValuePair_2_t2814883964 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m3307951223_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2677300076_gshared (Predicate_1_t3385847862 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2677300076(__this, ___result, method) ((  bool (*) (Predicate_1_t3385847862 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m2677300076_gshared)(__this, ___result, method)
