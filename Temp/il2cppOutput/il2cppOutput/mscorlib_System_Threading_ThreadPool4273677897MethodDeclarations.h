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

// System.Threading.WaitCallback
struct WaitCallback_t827025885;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback827025885.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
extern "C"  bool ThreadPool_QueueUserWorkItem_m3661630346 (Object_t * __this /* static, unused */, WaitCallback_t827025885 * ___callBack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m3855506648 (Object_t * __this /* static, unused */, WaitCallback_t827025885 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;