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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t1599261512;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297614.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3518693164_gshared (Predicate_1_t1599261512 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3518693164(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1599261512 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3518693164_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m4093280666_gshared (Predicate_1_t1599261512 * __this, KeyValuePair_2_t1028297614  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m4093280666(__this, ___obj, method) ((  bool (*) (Predicate_1_t1599261512 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Predicate_1_Invoke_m4093280666_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m3238220525_gshared (Predicate_1_t1599261512 * __this, KeyValuePair_2_t1028297614  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3238220525(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t1599261512 *, KeyValuePair_2_t1028297614 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m3238220525_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3130435194_gshared (Predicate_1_t1599261512 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3130435194(__this, ___result, method) ((  bool (*) (Predicate_1_t1599261512 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m3130435194_gshared)(__this, ___result, method)
