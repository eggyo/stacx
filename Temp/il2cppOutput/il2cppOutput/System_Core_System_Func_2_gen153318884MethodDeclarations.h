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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Func_2_t153318884;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22814883964.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m157594028_gshared (Func_2_t153318884 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m157594028(__this, ___object, ___method, method) ((  void (*) (Func_2_t153318884 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m157594028_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(T)
extern "C"  KeyValuePair_2_t2814883964  Func_2_Invoke_m4129157558_gshared (Func_2_t153318884 * __this, KeyValuePair_2_t3312956448  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4129157558(__this, ___arg1, method) ((  KeyValuePair_2_t2814883964  (*) (Func_2_t153318884 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Func_2_Invoke_m4129157558_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m2793740517_gshared (Func_2_t153318884 * __this, KeyValuePair_2_t3312956448  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2793740517(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t153318884 *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m2793740517_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2814883964  Func_2_EndInvoke_m3029966814_gshared (Func_2_t153318884 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3029966814(__this, ___result, method) ((  KeyValuePair_2_t2814883964  (*) (Func_2_t153318884 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3029966814_gshared)(__this, ___result, method)
