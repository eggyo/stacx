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

// System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_6_t211573732;
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

// System.Void System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_6__ctor_m3666860548_gshared (Func_6_t211573732 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_6__ctor_m3666860548(__this, ___object, ___method, method) ((  void (*) (Func_6_t211573732 *, Object_t *, IntPtr_t, const MethodInfo*))Func_6__ctor_m3666860548_gshared)(__this, ___object, ___method, method)
// TResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
extern "C"  Object_t * Func_6_Invoke_m3255199149_gshared (Func_6_t211573732 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
#define Func_6_Invoke_m3255199149(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method) ((  Object_t * (*) (Func_6_t211573732 *, Object_t *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))Func_6_Invoke_m3255199149_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method)
// System.IAsyncResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_6_BeginInvoke_m2965815646_gshared (Func_6_t211573732 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_6_BeginInvoke_m2965815646(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method) ((  Object_t * (*) (Func_6_t211573732 *, Object_t *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_6_BeginInvoke_m2965815646_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method)
// TResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_6_EndInvoke_m1319675190_gshared (Func_6_t211573732 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_6_EndInvoke_m1319675190(__this, ___result, method) ((  Object_t * (*) (Func_6_t211573732 *, Object_t *, const MethodInfo*))Func_6_EndInvoke_m1319675190_gshared)(__this, ___result, method)
