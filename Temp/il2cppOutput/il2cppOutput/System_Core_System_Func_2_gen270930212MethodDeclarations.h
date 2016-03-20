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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Func_2_t270930212;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2556624950_gshared (Func_2_t270930212 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2556624950(__this, ___object, ___method, method) ((  void (*) (Func_2_t270930212 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2556624950_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C"  KeyValuePair_2_t3434059049  Func_2_Invoke_m2614955760_gshared (Func_2_t270930212 * __this, KeyValuePair_2_t2686855369  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2614955760(__this, ___arg1, method) ((  KeyValuePair_2_t3434059049  (*) (Func_2_t270930212 *, KeyValuePair_2_t2686855369 , const MethodInfo*))Func_2_Invoke_m2614955760_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1513972643_gshared (Func_2_t270930212 * __this, KeyValuePair_2_t2686855369  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1513972643(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t270930212 *, KeyValuePair_2_t2686855369 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1513972643_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3434059049  Func_2_EndInvoke_m212527844_gshared (Func_2_t270930212 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m212527844(__this, ___result, method) ((  KeyValuePair_2_t3434059049  (*) (Func_2_t270930212 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m212527844_gshared)(__this, ___result, method)
