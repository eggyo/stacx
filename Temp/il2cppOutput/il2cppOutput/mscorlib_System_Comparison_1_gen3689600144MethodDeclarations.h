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

// System.Comparison`1<System.UInt16>
struct Comparison_1_t3689600144;
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

// System.Void System.Comparison`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1019252115_gshared (Comparison_1_t3689600144 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1019252115(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3689600144 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1019252115_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt16>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3276475661_gshared (Comparison_1_t3689600144 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m3276475661(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3689600144 *, uint16_t, uint16_t, const MethodInfo*))Comparison_1_Invoke_m3276475661_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m1746548102_gshared (Comparison_1_t3689600144 * __this, uint16_t ___x, uint16_t ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1746548102(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t3689600144 *, uint16_t, uint16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1746548102_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2518083135_gshared (Comparison_1_t3689600144 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2518083135(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3689600144 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m2518083135_gshared)(__this, ___result, method)
