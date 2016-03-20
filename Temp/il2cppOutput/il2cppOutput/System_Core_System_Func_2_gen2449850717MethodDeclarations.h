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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t2449850717;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4152745479_gshared (Func_2_t2449850717 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4152745479(__this, ___object, ___method, method) ((  void (*) (Func_2_t2449850717 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4152745479_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  KeyValuePair_2_t3312956448  Func_2_Invoke_m2313138303_gshared (Func_2_t2449850717 * __this, KeyValuePair_2_t1028297519  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2313138303(__this, ___arg1, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t2449850717 *, KeyValuePair_2_t1028297519 , const MethodInfo*))Func_2_Invoke_m2313138303_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m345184946_gshared (Func_2_t2449850717 * __this, KeyValuePair_2_t1028297519  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m345184946(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t2449850717 *, KeyValuePair_2_t1028297519 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m345184946_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3312956448  Func_2_EndInvoke_m2465867957_gshared (Func_2_t2449850717 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2465867957(__this, ___result, method) ((  KeyValuePair_2_t3312956448  (*) (Func_2_t2449850717 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2465867957_gshared)(__this, ___result, method)
