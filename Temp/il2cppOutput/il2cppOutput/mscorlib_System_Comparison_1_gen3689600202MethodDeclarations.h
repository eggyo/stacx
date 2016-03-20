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

// System.Comparison`1<System.UInt32>
struct Comparison_1_t3689600202;
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

// System.Void System.Comparison`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1232603545_gshared (Comparison_1_t3689600202 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1232603545(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3689600202 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1232603545_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt32>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m520167367_gshared (Comparison_1_t3689600202 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m520167367(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3689600202 *, uint32_t, uint32_t, const MethodInfo*))Comparison_1_Invoke_m520167367_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m3308619328_gshared (Comparison_1_t3689600202 * __this, uint32_t ___x, uint32_t ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m3308619328(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t3689600202 *, uint32_t, uint32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m3308619328_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1867076933_gshared (Comparison_1_t3689600202 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1867076933(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3689600202 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1867076933_gshared)(__this, ___result, method)
