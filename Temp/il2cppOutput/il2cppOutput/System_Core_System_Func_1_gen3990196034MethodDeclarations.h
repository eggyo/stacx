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

// System.Func`1<System.Int32>
struct Func_1_t3990196034;
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

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m1378894858_gshared (Func_1_t3990196034 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m1378894858(__this, ___object, ___method, method) ((  void (*) (Func_1_t3990196034 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m1378894858_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Int32>::Invoke()
extern "C"  int32_t Func_1_Invoke_m870959430_gshared (Func_1_t3990196034 * __this, const MethodInfo* method);
#define Func_1_Invoke_m870959430(__this, method) ((  int32_t (*) (Func_1_t3990196034 *, const MethodInfo*))Func_1_Invoke_m870959430_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_1_BeginInvoke_m945481443_gshared (Func_1_t3990196034 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m945481443(__this, ___callback, ___object, method) ((  Object_t * (*) (Func_1_t3990196034 *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m945481443_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_1_EndInvoke_m3936409084_gshared (Func_1_t3990196034 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m3936409084(__this, ___result, method) ((  int32_t (*) (Func_1_t3990196034 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m3936409084_gshared)(__this, ___result, method)
