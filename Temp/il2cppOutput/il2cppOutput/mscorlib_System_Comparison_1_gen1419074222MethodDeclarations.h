﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t1419074222;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23010366642.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1399298366_gshared (Comparison_1_t1419074222 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1399298366(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1419074222 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1399298366_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m4061912442_gshared (Comparison_1_t1419074222 * __this, KeyValuePair_2_t3010366642  ___x, KeyValuePair_2_t3010366642  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m4061912442(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1419074222 *, KeyValuePair_2_t3010366642 , KeyValuePair_2_t3010366642 , const MethodInfo*))Comparison_1_Invoke_m4061912442_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m3518901955_gshared (Comparison_1_t1419074222 * __this, KeyValuePair_2_t3010366642  ___x, KeyValuePair_2_t3010366642  ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m3518901955(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1419074222 *, KeyValuePair_2_t3010366642 , KeyValuePair_2_t3010366642 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m3518901955_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m4082916530_gshared (Comparison_1_t1419074222 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m4082916530(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1419074222 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m4082916530_gshared)(__this, ___result, method)
