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

// System.Func`2<System.Double,System.Single>
struct Func_2_t3293643175;
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

// System.Void System.Func`2<System.Double,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m602348497_gshared (Func_2_t3293643175 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m602348497(__this, ___object, ___method, method) ((  void (*) (Func_2_t3293643175 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m602348497_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m3348452081_gshared (Func_2_t3293643175 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3348452081(__this, ___arg1, method) ((  float (*) (Func_2_t3293643175 *, double, const MethodInfo*))Func_2_Invoke_m3348452081_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1664656928_gshared (Func_2_t3293643175 * __this, double ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1664656928(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3293643175 *, double, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1664656928_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m4027244931_gshared (Func_2_t3293643175 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4027244931(__this, ___result, method) ((  float (*) (Func_2_t3293643175 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m4027244931_gshared)(__this, ___result, method)
