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

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1701062555;
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

// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
extern "C"  void AndroidJavaRunnable__ctor_m1140889495 (AndroidJavaRunnable_t1701062555 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::Invoke()
extern "C"  void AndroidJavaRunnable_Invoke_m3101692593 (AndroidJavaRunnable_t1701062555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AndroidJavaRunnable_t1701062555(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.AndroidJavaRunnable::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * AndroidJavaRunnable_BeginInvoke_m364328122 (AndroidJavaRunnable_t1701062555 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaRunnable::EndInvoke(System.IAsyncResult)
extern "C"  void AndroidJavaRunnable_EndInvoke_m3666177319 (AndroidJavaRunnable_t1701062555 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
