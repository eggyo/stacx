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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Func_2_t420089551;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959576553.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775354.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1038058047_gshared (Func_2_t420089551 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1038058047(__this, ___object, ___method, method) ((  void (*) (Func_2_t420089551 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1038058047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C"  KeyValuePair_2_t959576553  Func_2_Invoke_m3374995651_gshared (Func_2_t420089551 * __this, KeyValuePair_2_t3461775354  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3374995651(__this, ___arg1, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t420089551 *, KeyValuePair_2_t3461775354 , const MethodInfo*))Func_2_Invoke_m3374995651_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1725861362_gshared (Func_2_t420089551 * __this, KeyValuePair_2_t3461775354  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1725861362(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t420089551 *, KeyValuePair_2_t3461775354 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1725861362_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t959576553  Func_2_EndInvoke_m602804977_gshared (Func_2_t420089551 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m602804977(__this, ___result, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t420089551 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m602804977_gshared)(__this, ___result, method)
