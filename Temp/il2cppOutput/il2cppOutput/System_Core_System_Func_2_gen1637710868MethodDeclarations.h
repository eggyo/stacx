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

// System.Func`2<System.Object,System.DateTime>
struct Func_2_t1637710868;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Object,System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1002316464_gshared (Func_2_t1637710868 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1002316464(__this, ___object, ___method, method) ((  void (*) (Func_2_t1637710868 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1002316464_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.DateTime>::Invoke(T)
extern "C"  DateTime_t339033936  Func_2_Invoke_m2872473522_gshared (Func_2_t1637710868 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2872473522(__this, ___arg1, method) ((  DateTime_t339033936  (*) (Func_2_t1637710868 *, Object_t *, const MethodInfo*))Func_2_Invoke_m2872473522_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1882281569_gshared (Func_2_t1637710868 * __this, Object_t * ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1882281569(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1637710868 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1882281569_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  DateTime_t339033936  Func_2_EndInvoke_m2216292194_gshared (Func_2_t1637710868 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2216292194(__this, ___result, method) ((  DateTime_t339033936  (*) (Func_2_t1637710868 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m2216292194_gshared)(__this, ___result, method)
