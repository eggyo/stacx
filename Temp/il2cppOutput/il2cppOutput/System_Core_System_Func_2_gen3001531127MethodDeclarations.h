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

// System.Func`2<System.Object,Parse.ParseGeoPoint>
struct Func_2_t3001531127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m480401011_gshared (Func_2_t3001531127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m480401011(__this, ___object, ___method, method) ((  void (*) (Func_2_t3001531127 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m480401011_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::Invoke(T)
extern "C"  ParseGeoPoint_t1702854195  Func_2_Invoke_m1159432079_gshared (Func_2_t3001531127 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1159432079(__this, ___arg1, method) ((  ParseGeoPoint_t1702854195  (*) (Func_2_t3001531127 *, Object_t *, const MethodInfo*))Func_2_Invoke_m1159432079_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3341575742_gshared (Func_2_t3001531127 * __this, Object_t * ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3341575742(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t3001531127 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3341575742_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C"  ParseGeoPoint_t1702854195  Func_2_EndInvoke_m1924553637_gshared (Func_2_t3001531127 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m1924553637(__this, ___result, method) ((  ParseGeoPoint_t1702854195  (*) (Func_2_t3001531127 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m1924553637_gshared)(__this, ___result, method)
