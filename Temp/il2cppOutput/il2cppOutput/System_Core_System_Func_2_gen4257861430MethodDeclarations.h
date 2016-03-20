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

// System.Func`2<System.UInt32,System.Object>
struct Func_2_t4257861430;
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

// System.Void System.Func`2<System.UInt32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2388357874_gshared (Func_2_t4257861430 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2388357874(__this, ___object, ___method, method) ((  void (*) (Func_2_t4257861430 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2388357874_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m426156208_gshared (Func_2_t4257861430 * __this, uint32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m426156208(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t4257861430 *, uint32_t, const MethodInfo*))Func_2_Invoke_m426156208_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3900246239_gshared (Func_2_t4257861430 * __this, uint32_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3900246239(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t4257861430 *, uint32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3900246239_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m834793764_gshared (Func_2_t4257861430 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m834793764(__this, ___result, method) ((  Object_t * (*) (Func_2_t4257861430 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m834793764_gshared)(__this, ___result, method)
