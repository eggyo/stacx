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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Func_2_t1836967438;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775296.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23010366642.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3565086494_gshared (Func_2_t1836967438 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3565086494(__this, ___object, ___method, method) ((  void (*) (Func_2_t1836967438 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3565086494_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(T)
extern "C"  KeyValuePair_2_t3461775296  Func_2_Invoke_m2553175940_gshared (Func_2_t1836967438 * __this, KeyValuePair_2_t3010366642  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2553175940(__this, ___arg1, method) ((  KeyValuePair_2_t3461775296  (*) (Func_2_t1836967438 *, KeyValuePair_2_t3010366642 , const MethodInfo*))Func_2_Invoke_m2553175940_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3757645875_gshared (Func_2_t1836967438 * __this, KeyValuePair_2_t3010366642  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3757645875(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1836967438 *, KeyValuePair_2_t3010366642 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3757645875_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3461775296  Func_2_EndInvoke_m748388048_gshared (Func_2_t1836967438 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m748388048(__this, ___result, method) ((  KeyValuePair_2_t3461775296  (*) (Func_2_t1836967438 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m748388048_gshared)(__this, ___result, method)
