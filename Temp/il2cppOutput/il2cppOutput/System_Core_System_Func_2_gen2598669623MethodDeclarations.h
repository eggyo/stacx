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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Func_2_t2598669623;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775354.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1489434209_gshared (Func_2_t2598669623 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1489434209(__this, ___object, ___method, method) ((  void (*) (Func_2_t2598669623 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1489434209_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T)
extern "C"  KeyValuePair_2_t3461775354  Func_2_Invoke_m2407560933_gshared (Func_2_t2598669623 * __this, KeyValuePair_2_t1028297519  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2407560933(__this, ___arg1, method) ((  KeyValuePair_2_t3461775354  (*) (Func_2_t2598669623 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Func_2_Invoke_m2407560933_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3813081880_gshared (Func_2_t2598669623 * __this, KeyValuePair_2_t1028297519  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3813081880(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2598669623 *, KeyValuePair_2_t1028297519 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3813081880_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3461775354  Func_2_EndInvoke_m1492745743_gshared (Func_2_t2598669623 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1492745743(__this, ___result, method) ((  KeyValuePair_2_t3461775354  (*) (Func_2_t2598669623 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1492745743_gshared)(__this, ___result, method)
