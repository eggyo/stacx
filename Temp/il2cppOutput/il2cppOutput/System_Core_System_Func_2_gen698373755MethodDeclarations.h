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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t698373755;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959576553.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1254512359_gshared (Func_2_t698373755 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1254512359(__this, ___object, ___method, method) ((  void (*) (Func_2_t698373755 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1254512359_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  KeyValuePair_2_t3312956448  Func_2_Invoke_m3720468251_gshared (Func_2_t698373755 * __this, KeyValuePair_2_t959576553  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3720468251(__this, ___arg1, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t698373755 *, KeyValuePair_2_t959576553 , const MethodInfo*))Func_2_Invoke_m3720468251_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m78566474_gshared (Func_2_t698373755 * __this, KeyValuePair_2_t959576553  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m78566474(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t698373755 *, KeyValuePair_2_t959576553 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m78566474_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Func_2_EndInvoke_m3012131737_gshared (Func_2_t698373755 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3012131737(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t698373755 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3012131737_gshared)(__this, ___result, method)
