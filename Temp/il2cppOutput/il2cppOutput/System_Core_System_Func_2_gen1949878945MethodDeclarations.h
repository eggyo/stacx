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

// System.Func`2<System.UInt16,System.Single>
struct Func_2_t1949878945;
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

// System.Void System.Func`2<System.UInt16,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m838908419_gshared (Func_2_t1949878945 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m838908419(__this, ___object, ___method, method) ((  void (*) (Func_2_t1949878945 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m838908419_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m2501013631_gshared (Func_2_t1949878945 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2501013631(__this, ___arg1, method) ((  float (*) (Func_2_t1949878945 *, uint16_t, const MethodInfo*))Func_2_Invoke_m2501013631_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1433181614_gshared (Func_2_t1949878945 * __this, uint16_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1433181614(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1949878945 *, uint16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1433181614_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m654272693_gshared (Func_2_t1949878945 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m654272693(__this, ___result, method) ((  float (*) (Func_2_t1949878945 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m654272693_gshared)(__this, ___result, method)
