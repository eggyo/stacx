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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Func_2_t2470879640;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775354.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3602165832_gshared (Func_2_t2470879640 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3602165832(__this, ___object, ___method, method) ((  void (*) (Func_2_t2470879640 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3602165832_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(T)
extern "C"  KeyValuePair_2_t3010366642  Func_2_Invoke_m3003755290_gshared (Func_2_t2470879640 * __this, KeyValuePair_2_t3461775354  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3003755290(__this, ___arg1, method) ((  KeyValuePair_2_t3010366642  (*) (Func_2_t2470879640 *, KeyValuePair_2_t3461775354 , const MethodInfo*))Func_2_Invoke_m3003755290_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m373726665_gshared (Func_2_t2470879640 * __this, KeyValuePair_2_t3461775354  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m373726665(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2470879640 *, KeyValuePair_2_t3461775354 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m373726665_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3010366642  Func_2_EndInvoke_m4171787514_gshared (Func_2_t2470879640 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4171787514(__this, ___result, method) ((  KeyValuePair_2_t3010366642  (*) (Func_2_t2470879640 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m4171787514_gshared)(__this, ___result, method)
