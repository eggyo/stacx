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

// System.Func`2<System.UInt16,System.Int32>
struct Func_2_t3839084711;
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

// System.Void System.Func`2<System.UInt16,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m928429345_gshared (Func_2_t3839084711 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m928429345(__this, ___object, ___method, method) ((  void (*) (Func_2_t3839084711 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m928429345_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Int32>::Invoke(T)
extern "C"  int32_t Func_2_Invoke_m1440799909_gshared (Func_2_t3839084711 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1440799909(__this, ___arg1, method) ((  int32_t (*) (Func_2_t3839084711 *, uint16_t, const MethodInfo*))Func_2_Invoke_m1440799909_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3765630296_gshared (Func_2_t3839084711 * __this, uint16_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3765630296(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3839084711 *, uint16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3765630296_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_2_EndInvoke_m4119212111_gshared (Func_2_t3839084711 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4119212111(__this, ___result, method) ((  int32_t (*) (Func_2_t3839084711 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m4119212111_gshared)(__this, ___result, method)
