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

// System.Predicate`1<System.DateTime>
struct Predicate_1_t909997834;
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

// System.Void System.Predicate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1618560645_gshared (Predicate_1_t909997834 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1618560645(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t909997834 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1618560645_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.DateTime>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3409298849_gshared (Predicate_1_t909997834 * __this, DateTime_t339033936  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3409298849(__this, ___obj, method) ((  bool (*) (Predicate_1_t909997834 *, DateTime_t339033936 , const MethodInfo*))Predicate_1_Invoke_m3409298849_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m1827314036_gshared (Predicate_1_t909997834 * __this, DateTime_t339033936  ___obj, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1827314036(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t909997834 *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1827314036_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2037775571_gshared (Predicate_1_t909997834 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2037775571(__this, ___result, method) ((  bool (*) (Predicate_1_t909997834 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m2037775571_gshared)(__this, ___result, method)
