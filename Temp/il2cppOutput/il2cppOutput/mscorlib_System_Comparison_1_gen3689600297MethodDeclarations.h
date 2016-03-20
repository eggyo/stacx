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

// System.Comparison`1<System.UInt64>
struct Comparison_1_t3689600297;
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

// System.Void System.Comparison`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1730160794_gshared (Comparison_1_t3689600297 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1730160794(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3689600297 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1730160794_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt64>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2003668454_gshared (Comparison_1_t3689600297 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m2003668454(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3689600297 *, uint64_t, uint64_t, const MethodInfo*))Comparison_1_Invoke_m2003668454_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m461449567_gshared (Comparison_1_t3689600297 * __this, uint64_t ___x, uint64_t ___y, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m461449567(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t3689600297 *, uint64_t, uint64_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m461449567_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m504569030_gshared (Comparison_1_t3689600297 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m504569030(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3689600297 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m504569030_gshared)(__this, ___result, method)
