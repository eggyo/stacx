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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t4005022947;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3747604295_gshared (Predicate_1_t4005022947 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3747604295(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t4005022947 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3747604295_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2985786715_gshared (Predicate_1_t4005022947 * __this, KeyValuePair_2_t3434059049  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2985786715(__this, ___obj, method) ((  bool (*) (Predicate_1_t4005022947 *, KeyValuePair_2_t3434059049 , const MethodInfo*))Predicate_1_Invoke_m2985786715_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m982204650_gshared (Predicate_1_t4005022947 * __this, KeyValuePair_2_t3434059049  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m982204650(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t4005022947 *, KeyValuePair_2_t3434059049 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m982204650_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1525038425_gshared (Predicate_1_t4005022947 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1525038425(__this, ___result, method) ((  bool (*) (Predicate_1_t4005022947 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1525038425_gshared)(__this, ___result, method)
