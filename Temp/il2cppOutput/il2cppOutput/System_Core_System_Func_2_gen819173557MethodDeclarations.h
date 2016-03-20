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

// System.Func`2<System.Double,System.Char>
struct Func_2_t819173557;
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

// System.Void System.Func`2<System.Double,System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1966888067_gshared (Func_2_t819173557 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1966888067(__this, ___object, ___method, method) ((  void (*) (Func_2_t819173557 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1966888067_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Char>::Invoke(T)
extern "C"  uint16_t Func_2_Invoke_m1954305407_gshared (Func_2_t819173557 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1954305407(__this, ___arg1, method) ((  uint16_t (*) (Func_2_t819173557 *, double, const MethodInfo*))Func_2_Invoke_m1954305407_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3111404078_gshared (Func_2_t819173557 * __this, double ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3111404078(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t819173557 *, double, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3111404078_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t Func_2_EndInvoke_m3542524853_gshared (Func_2_t819173557 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3542524853(__this, ___result, method) ((  uint16_t (*) (Func_2_t819173557 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3542524853_gshared)(__this, ___result, method)
