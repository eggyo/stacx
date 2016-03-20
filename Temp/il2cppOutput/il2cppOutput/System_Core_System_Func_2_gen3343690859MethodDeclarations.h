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

// System.Func`2<System.Single,System.Object>
struct Func_2_t3343690859;
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

// System.Void System.Func`2<System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2865796451_gshared (Func_2_t3343690859 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2865796451(__this, ___object, ___method, method) ((  void (*) (Func_2_t3343690859 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2865796451_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m2529265951_gshared (Func_2_t3343690859 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2529265951(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t3343690859 *, float, const MethodInfo*))Func_2_Invoke_m2529265951_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m2755565134_gshared (Func_2_t3343690859 * __this, float ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2755565134(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3343690859 *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m2755565134_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m4123259925_gshared (Func_2_t3343690859 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4123259925(__this, ___result, method) ((  Object_t * (*) (Func_2_t3343690859 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m4123259925_gshared)(__this, ___result, method)
