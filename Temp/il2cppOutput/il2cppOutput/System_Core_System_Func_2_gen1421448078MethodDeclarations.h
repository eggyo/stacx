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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Func_2_t1421448078;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1401273516_gshared (Func_2_t1421448078 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1401273516(__this, ___object, ___method, method) ((  void (*) (Func_2_t1421448078 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1401273516_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(T)
extern "C"  KeyValuePair_2_t3010366642  Func_2_Invoke_m463055418_gshared (Func_2_t1421448078 * __this, KeyValuePair_2_t1036228796  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m463055418(__this, ___arg1, method) ((  KeyValuePair_2_t3010366642  (*) (Func_2_t1421448078 *, KeyValuePair_2_t1036228796 , const MethodInfo*))Func_2_Invoke_m463055418_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1008696685_gshared (Func_2_t1421448078 * __this, KeyValuePair_2_t1036228796  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1008696685(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1421448078 *, KeyValuePair_2_t1036228796 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1008696685_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3010366642  Func_2_EndInvoke_m3574931930_gshared (Func_2_t1421448078 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3574931930(__this, ___result, method) ((  KeyValuePair_2_t3010366642  (*) (Func_2_t1421448078 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3574931930_gshared)(__this, ___result, method)