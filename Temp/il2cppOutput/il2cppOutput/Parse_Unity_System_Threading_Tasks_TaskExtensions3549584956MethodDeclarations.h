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

// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t475191614;

#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task System.Threading.Tasks.TaskExtensions::Unwrap(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * TaskExtensions_Unwrap_m1287916360 (Object_t * __this /* static, unused */, Task_1_t475191614 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
