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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Func_2_t2039005275;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297461.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1078452855_gshared (Func_2_t2039005275 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1078452855(__this, ___object, ___method, method) ((  void (*) (Func_2_t2039005275 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1078452855_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C"  KeyValuePair_2_t1036228796  Func_2_Invoke_m1233971595_gshared (Func_2_t2039005275 * __this, KeyValuePair_2_t1028297461  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1233971595(__this, ___arg1, method) ((  KeyValuePair_2_t1036228796  (*) (Func_2_t2039005275 *, KeyValuePair_2_t1028297461 , const MethodInfo*))Func_2_Invoke_m1233971595_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1385346746_gshared (Func_2_t2039005275 * __this, KeyValuePair_2_t1028297461  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1385346746(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2039005275 *, KeyValuePair_2_t1028297461 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1385346746_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1036228796  Func_2_EndInvoke_m1715425065_gshared (Func_2_t2039005275 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1715425065(__this, ___result, method) ((  KeyValuePair_2_t1036228796  (*) (Func_2_t2039005275 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1715425065_gshared)(__this, ___result, method)
