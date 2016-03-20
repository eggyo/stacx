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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t454700825;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24178704223.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3107133943_gshared (Predicate_1_t454700825 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3107133943(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t454700825 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3107133943_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m686489131_gshared (Predicate_1_t454700825 * __this, KeyValuePair_2_t4178704223  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m686489131(__this, ___obj, method) ((  bool (*) (Predicate_1_t454700825 *, KeyValuePair_2_t4178704223 , const MethodInfo*))Predicate_1_Invoke_m686489131_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m114125626_gshared (Predicate_1_t454700825 * __this, KeyValuePair_2_t4178704223  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m114125626(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t454700825 *, KeyValuePair_2_t4178704223 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m114125626_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m4090125961_gshared (Predicate_1_t454700825 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m4090125961(__this, ___result, method) ((  bool (*) (Predicate_1_t454700825 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m4090125961_gshared)(__this, ___result, method)
