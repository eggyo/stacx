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

// System.Func`2<System.Byte,System.Int32>
struct Func_2_t4193074106;
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

// System.Void System.Func`2<System.Byte,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3422913290_gshared (Func_2_t4193074106 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3422913290(__this, ___object, ___method, method) ((  void (*) (Func_2_t4193074106 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3422913290_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.Int32>::Invoke(T)
extern "C"  int32_t Func_2_Invoke_m4135494428_gshared (Func_2_t4193074106 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4135494428(__this, ___arg1, method) ((  int32_t (*) (Func_2_t4193074106 *, uint8_t, const MethodInfo*))Func_2_Invoke_m4135494428_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m755632463_gshared (Func_2_t4193074106 * __this, uint8_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m755632463(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t4193074106 *, uint8_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m755632463_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_2_EndInvoke_m3213486648_gshared (Func_2_t4193074106 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3213486648(__this, ___result, method) ((  int32_t (*) (Func_2_t4193074106 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3213486648_gshared)(__this, ___result, method)
