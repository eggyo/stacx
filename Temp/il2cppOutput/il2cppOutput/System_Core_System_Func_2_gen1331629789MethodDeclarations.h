﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Func`2<System.Boolean,System.Double>
struct Func_2_t1331629789;
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

// System.Void System.Func`2<System.Boolean,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3106003185_gshared (Func_2_t1331629789 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3106003185(__this, ___object, ___method, method) ((  void (*) (Func_2_t1331629789 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3106003185_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Double>::Invoke(T)
extern "C"  double Func_2_Invoke_m4010929749_gshared (Func_2_t1331629789 * __this, bool ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4010929749(__this, ___arg1, method) ((  double (*) (Func_2_t1331629789 *, bool, const MethodInfo*))Func_2_Invoke_m4010929749_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m1005282952_gshared (Func_2_t1331629789 * __this, bool ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m1005282952(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t1331629789 *, bool, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m1005282952_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  double Func_2_EndInvoke_m306842783_gshared (Func_2_t1331629789 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m306842783(__this, ___result, method) ((  double (*) (Func_2_t1331629789 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m306842783_gshared)(__this, ___result, method)
