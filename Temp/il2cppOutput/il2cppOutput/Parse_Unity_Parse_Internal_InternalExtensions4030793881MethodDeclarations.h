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
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t3942130942;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t2764789161;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t3507609042;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t3759117703;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"
#include "mscorlib_System_Object837106420.h"

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C"  Task_t2616336456 * InternalExtensions_Safe_m675874328 (Object_t * __this /* static, unused */, Task_t2616336456 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * InternalExtensions_PartialAsync_m3754431025 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t3942130942 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * InternalExtensions_PartialAsync_m3311668543 (Object_t * __this /* static, unused */, PartialAccessor_1_t3942130942 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * InternalExtensions_OnSuccess_m3676009831 (Object_t * __this /* static, unused */, Task_t2616336456 * ___task, Action_1_t2764789161 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * InternalExtensions_WhileAsync_m1711812478 (Object_t * __this /* static, unused */, Func_1_t3507609042 * ___predicate, Func_1_t3759117703 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
