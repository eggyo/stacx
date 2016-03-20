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

// System.Comparison`1<System.DateTime>
struct Comparison_1_t3042708812;
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

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m2850136343_gshared (Comparison_1_t3042708812 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2850136343(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3042708812 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2850136343_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1886131465_gshared (Comparison_1_t3042708812 * __this, DateTime_t339033936  ___x, DateTime_t339033936  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1886131465(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3042708812 *, DateTime_t339033936 , DateTime_t339033936 , const MethodInfo*))Comparison_1_Invoke_m1886131465_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m2860043138_gshared (Comparison_1_t3042708812 * __this, DateTime_t339033936  ___x, DateTime_t339033936  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2860043138(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t3042708812 *, DateTime_t339033936 , DateTime_t339033936 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m2860043138_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m3682698435_gshared (Comparison_1_t3042708812 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m3682698435(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3042708812 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m3682698435_gshared)(__this, ___result, method)
