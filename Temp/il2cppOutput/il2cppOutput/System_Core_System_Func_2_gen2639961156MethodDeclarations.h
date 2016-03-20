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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Func_2_t2639961156;
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
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m406436912_gshared (Func_2_t2639961156 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m406436912(__this, ___object, ___method, method) ((  void (*) (Func_2_t2639961156 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m406436912_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C"  KeyValuePair_2_t959576553  Func_2_Invoke_m1265764658_gshared (Func_2_t2639961156 * __this, KeyValuePair_2_t959576553  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1265764658(__this, ___arg1, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t2639961156 *, KeyValuePair_2_t959576553 , const MethodInfo*))Func_2_Invoke_m1265764658_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1162257121_gshared (Func_2_t2639961156 * __this, KeyValuePair_2_t959576553  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1162257121(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2639961156 *, KeyValuePair_2_t959576553 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1162257121_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t959576553  Func_2_EndInvoke_m3897576930_gshared (Func_2_t2639961156 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3897576930(__this, ___result, method) ((  KeyValuePair_2_t959576553  (*) (Func_2_t2639961156 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3897576930_gshared)(__this, ___result, method)
