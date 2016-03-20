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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t216490034;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t692973875;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SendOrPostCallback692973875.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C"  void SynchronizationContext__ctor_m2910701872 (SynchronizationContext_t216490034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C"  SynchronizationContext_t216490034 * SynchronizationContext_get_Current_m4276635309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void SynchronizationContext_Post_m2052728231 (SynchronizationContext_t216490034 * __this, SendOrPostCallback_t692973875 * ___d, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
