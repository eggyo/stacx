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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Func_2_t3658251796;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775449.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1801983104_gshared (Func_2_t3658251796 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1801983104(__this, ___object, ___method, method) ((  void (*) (Func_2_t3658251796 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1801983104_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C"  KeyValuePair_2_t959576553  Func_2_Invoke_m4028639074_gshared (Func_2_t3658251796 * __this, KeyValuePair_2_t3461775449  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4028639074(__this, ___arg1, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t3658251796 *, KeyValuePair_2_t3461775449 , const MethodInfo*))Func_2_Invoke_m4028639074_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m4008251793_gshared (Func_2_t3658251796 * __this, KeyValuePair_2_t3461775449  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4008251793(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3658251796 *, KeyValuePair_2_t3461775449 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m4008251793_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t959576553  Func_2_EndInvoke_m2169761202_gshared (Func_2_t3658251796 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2169761202(__this, ___result, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t3658251796 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2169761202_gshared)(__this, ___result, method)
