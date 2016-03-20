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

// System.Func`2<System.DateTime,System.Object>
struct Func_2_t240872044;
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

// System.Void System.Func`2<System.DateTime,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4054167344_gshared (Func_2_t240872044 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4054167344(__this, ___object, ___method, method) ((  void (*) (Func_2_t240872044 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4054167344_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.DateTime,System.Object>::Invoke(T)
extern "C"  Object_t * Func_2_Invoke_m1795021618_gshared (Func_2_t240872044 * __this, DateTime_t339033936  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1795021618(__this, ___arg1, method) ((  Object_t * (*) (Func_2_t240872044 *, DateTime_t339033936 , const MethodInfo*))Func_2_Invoke_m1795021618_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.DateTime,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3719248353_gshared (Func_2_t240872044 * __this, DateTime_t339033936  ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3719248353(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t240872044 *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3719248353_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.DateTime,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_2_EndInvoke_m817609698_gshared (Func_2_t240872044 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m817609698(__this, ___result, method) ((  Object_t * (*) (Func_2_t240872044 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m817609698_gshared)(__this, ___result, method)
