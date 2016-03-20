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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Func_2_t1772067491;
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
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959589431.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3923206513_gshared (Func_2_t1772067491 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3923206513(__this, ___object, ___method, method) ((  void (*) (Func_2_t1772067491 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3923206513_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C"  KeyValuePair_2_t1028297614  Func_2_Invoke_m618977877_gshared (Func_2_t1772067491 * __this, KeyValuePair_2_t959589431  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m618977877(__this, ___arg1, method) ((  KeyValuePair_2_t1028297614  (*) (Func_2_t1772067491 *, KeyValuePair_2_t959589431 , const MethodInfo*))Func_2_Invoke_m618977877_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1727620872_gshared (Func_2_t1772067491 * __this, KeyValuePair_2_t959589431  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1727620872(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1772067491 *, KeyValuePair_2_t959589431 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1727620872_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1028297614  Func_2_EndInvoke_m1539481759_gshared (Func_2_t1772067491 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1539481759(__this, ___result, method) ((  KeyValuePair_2_t1028297614  (*) (Func_2_t1772067491 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1539481759_gshared)(__this, ___result, method)
