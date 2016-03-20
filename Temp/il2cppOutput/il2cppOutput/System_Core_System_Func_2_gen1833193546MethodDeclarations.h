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

// System.Func`2<System.Object,System.Double>
struct Func_2_t1833193546;
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

// System.Void System.Func`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3559531450_gshared (Func_2_t1833193546 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3559531450(__this, ___object, ___method, method) ((  void (*) (Func_2_t1833193546 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3559531450_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Double>::Invoke(T)
extern "C"  double Func_2_Invoke_m3018055400_gshared (Func_2_t1833193546 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m3018055400(__this, ___arg1, method) ((  double (*) (Func_2_t1833193546 *, Object_t *, const MethodInfo*))Func_2_Invoke_m3018055400_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m258584343_gshared (Func_2_t1833193546 * __this, Object_t * ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m258584343(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1833193546 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m258584343_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  double Func_2_EndInvoke_m3352839660_gshared (Func_2_t1833193546 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3352839660(__this, ___result, method) ((  double (*) (Func_2_t1833193546 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3352839660_gshared)(__this, ___result, method)
