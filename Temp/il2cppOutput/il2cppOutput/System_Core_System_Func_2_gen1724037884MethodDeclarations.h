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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t1724037884;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m451142042_gshared (Func_2_t1724037884 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m451142042(__this, ___object, ___method, method) ((  void (*) (Func_2_t1724037884 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m451142042_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  KeyValuePair_2_t3312956448  Func_2_Invoke_m926188940_gshared (Func_2_t1724037884 * __this, KeyValuePair_2_t1036228796  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m926188940(__this, ___arg1, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t1724037884 *, KeyValuePair_2_t1036228796 , const MethodInfo*))Func_2_Invoke_m926188940_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1171332799_gshared (Func_2_t1724037884 * __this, KeyValuePair_2_t1036228796  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1171332799(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1724037884 *, KeyValuePair_2_t1036228796 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1171332799_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Func_2_EndInvoke_m1530326472_gshared (Func_2_t1724037884 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1530326472(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t1724037884 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1530326472_gshared)(__this, ___result, method)