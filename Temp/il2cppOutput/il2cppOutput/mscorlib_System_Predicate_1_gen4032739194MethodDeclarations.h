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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t4032739194;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775296.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3860408478_gshared (Predicate_1_t4032739194 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3860408478(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t4032739194 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3860408478_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m36618276_gshared (Predicate_1_t4032739194 * __this, KeyValuePair_2_t3461775296  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m36618276(__this, ___obj, method) ((  bool (*) (Predicate_1_t4032739194 *, KeyValuePair_2_t3461775296 , const MethodInfo*))Predicate_1_Invoke_m36618276_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m2090485427_gshared (Predicate_1_t4032739194 * __this, KeyValuePair_2_t3461775296  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2090485427(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t4032739194 *, KeyValuePair_2_t3461775296 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m2090485427_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1009500720_gshared (Predicate_1_t4032739194 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1009500720(__this, ___result, method) ((  bool (*) (Predicate_1_t4032739194 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1009500720_gshared)(__this, ___result, method)
