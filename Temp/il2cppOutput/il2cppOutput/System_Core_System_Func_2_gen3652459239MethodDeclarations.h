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

// System.Func`2<System.Boolean,System.SByte>
struct Func_2_t3652459239;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Boolean,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1515567101_gshared (Func_2_t3652459239 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1515567101(__this, ___object, ___method, method) ((  void (*) (Func_2_t3652459239 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1515567101_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.SByte>::Invoke(T)
extern "C"  int8_t Func_2_Invoke_m1523662149_gshared (Func_2_t3652459239 * __this, bool ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1523662149(__this, ___arg1, method) ((  int8_t (*) (Func_2_t3652459239 *, bool, const MethodInfo*))Func_2_Invoke_m1523662149_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1800449140_gshared (Func_2_t3652459239 * __this, bool ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1800449140(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3652459239 *, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1800449140_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C"  int8_t Func_2_EndInvoke_m2686874543_gshared (Func_2_t3652459239 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2686874543(__this, ___result, method) ((  int8_t (*) (Func_2_t3652459239 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2686874543_gshared)(__this, ___result, method)
