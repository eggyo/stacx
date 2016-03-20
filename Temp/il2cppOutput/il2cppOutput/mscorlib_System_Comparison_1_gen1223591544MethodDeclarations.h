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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t1223591544;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m133345800_gshared (Comparison_1_t1223591544 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m133345800(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1223591544 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m133345800_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3350907120_gshared (Comparison_1_t1223591544 * __this, KeyValuePair_2_t2814883964  ___x, KeyValuePair_2_t2814883964  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m3350907120(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1223591544 *, KeyValuePair_2_t2814883964 , KeyValuePair_2_t2814883964 , const MethodInfo*))Comparison_1_Invoke_m3350907120_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m490795577_gshared (Comparison_1_t1223591544 * __this, KeyValuePair_2_t2814883964  ___x, KeyValuePair_2_t2814883964  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m490795577(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1223591544 *, KeyValuePair_2_t2814883964 , KeyValuePair_2_t2814883964 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m490795577_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2707448188_gshared (Comparison_1_t1223591544 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2707448188(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1223591544 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m2707448188_gshared)(__this, ___result, method)
