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

// System.Func`2<System.Int32,System.Char>
struct Func_2_t1580875684;
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

// System.Void System.Func`2<System.Int32,System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3378781222_gshared (Func_2_t1580875684 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3378781222(__this, ___object, ___method, method) ((  void (*) (Func_2_t1580875684 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3378781222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Char>::Invoke(T)
extern "C"  uint16_t Func_2_Invoke_m1313432192_gshared (Func_2_t1580875684 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1313432192(__this, ___arg1, method) ((  uint16_t (*) (Func_2_t1580875684 *, int32_t, const MethodInfo*))Func_2_Invoke_m1313432192_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3782907059_gshared (Func_2_t1580875684 * __this, int32_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3782907059(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1580875684 *, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3782907059_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t Func_2_EndInvoke_m1551462740_gshared (Func_2_t1580875684 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1551462740(__this, ___result, method) ((  uint16_t (*) (Func_2_t1580875684 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1551462740_gshared)(__this, ___result, method)
