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

// System.Func`2<System.Boolean,System.Object>
struct Func_2_t1634219595;
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

// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3490995779_gshared (Func_2_t1634219595 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3490995779(__this, ___object, ___method, method) ((  void (*) (Func_2_t1634219595 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3490995779_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m2917490883_gshared (Func_2_t1634219595 * __this, bool ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2917490883(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t1634219595 *, bool, const MethodInfo*))Func_2_Invoke_m2917490883_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m733434614_gshared (Func_2_t1634219595 * __this, bool ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m733434614(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1634219595 *, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m733434614_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m1072171761_gshared (Func_2_t1634219595 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1072171761(__this, ___result, method) ((  Object_t * (*) (Func_2_t1634219595 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1072171761_gshared)(__this, ___result, method)
