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

// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t2273818093;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1691191240_gshared (Predicate_1_t2273818093 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1691191240(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t2273818093 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1691191240_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2547271166_gshared (Predicate_1_t2273818093 * __this, ParseGeoPoint_t1702854195  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2547271166(__this, ___obj, method) ((  bool (*) (Predicate_1_t2273818093 *, ParseGeoPoint_t1702854195 , const MethodInfo*))Predicate_1_Invoke_m2547271166_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m1889003473_gshared (Predicate_1_t2273818093 * __this, ParseGeoPoint_t1702854195  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1889003473(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t2273818093 *, ParseGeoPoint_t1702854195 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1889003473_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m394021014_gshared (Predicate_1_t2273818093 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m394021014(__this, ___result, method) ((  bool (*) (Predicate_1_t2273818093 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m394021014_gshared)(__this, ___result, method)
