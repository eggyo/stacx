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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Func_2_t3403354128;
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

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3218941666_gshared (Func_2_t3403354128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3218941666(__this, ___object, ___method, method) ((  void (*) (Func_2_t3403354128 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3218941666_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C"  KeyValuePair_2_t1028297614  Func_2_Invoke_m440072896_gshared (Func_2_t3403354128 * __this, KeyValuePair_2_t1028297614  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m440072896(__this, ___arg1, method) ((  KeyValuePair_2_t1028297614  (*) (Func_2_t3403354128 *, KeyValuePair_2_t1028297614 , const MethodInfo*))Func_2_Invoke_m440072896_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m491040495_gshared (Func_2_t3403354128 * __this, KeyValuePair_2_t1028297614  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m491040495(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3403354128 *, KeyValuePair_2_t1028297614 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m491040495_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1028297614  Func_2_EndInvoke_m694518036_gshared (Func_2_t3403354128 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m694518036(__this, ___result, method) ((  KeyValuePair_2_t1028297614  (*) (Func_2_t3403354128 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m694518036_gshared)(__this, ___result, method)