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

// System.Func`2<System.Double,System.SByte>
struct Func_2_t895812922;
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

// System.Void System.Func`2<System.Double,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1141653542_gshared (Func_2_t895812922 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1141653542(__this, ___object, ___method, method) ((  void (*) (Func_2_t895812922 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1141653542_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.SByte>::Invoke(T)
extern "C"  int8_t Func_2_Invoke_m3412262400_gshared (Func_2_t895812922 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3412262400(__this, ___arg1, method) ((  int8_t (*) (Func_2_t895812922 *, double, const MethodInfo*))Func_2_Invoke_m3412262400_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3463405491_gshared (Func_2_t895812922 * __this, double ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3463405491(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t895812922 *, double, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3463405491_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C"  int8_t Func_2_EndInvoke_m1943799252_gshared (Func_2_t895812922 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1943799252(__this, ___result, method) ((  int8_t (*) (Func_2_t895812922 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1943799252_gshared)(__this, ___result, method)
