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

// Parse.Internal.ParseCurrentUserController
struct ParseCurrentUserController_t3645997205;
// Parse.ParseUser
struct ParseUser_t38435519;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t2192257973;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t2364827795;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3122311356;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseUser38435519.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"

// Parse.ParseUser Parse.Internal.ParseCurrentUserController::get_CurrentUser()
extern "C"  ParseUser_t38435519 * ParseCurrentUserController_get_CurrentUser_m812045093 (ParseCurrentUserController_t3645997205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentUserController::set_CurrentUser(Parse.ParseUser)
extern "C"  void ParseCurrentUserController_set_CurrentUser_m2959485998 (ParseCurrentUserController_t3645997205 * __this, ParseUser_t38435519 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseCurrentUserController::SetAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseCurrentUserController_SetAsync_m1893174463 (ParseCurrentUserController_t3645997205 * __this, ParseUser_t38435519 * ___user, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.Internal.ParseCurrentUserController::GetAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseCurrentUserController_GetAsync_m3972047332 (ParseCurrentUserController_t3645997205 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Boolean> Parse.Internal.ParseCurrentUserController::ExistsAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2364827795 * ParseCurrentUserController_ExistsAsync_m611319848 (ParseCurrentUserController_t3645997205 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ParseCurrentUserController::IsCurrent(Parse.ParseUser)
extern "C"  bool ParseCurrentUserController_IsCurrent_m2002030586 (ParseCurrentUserController_t3645997205 * __this, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentUserController::ClearFromMemory()
extern "C"  void ParseCurrentUserController_ClearFromMemory_m278093010 (ParseCurrentUserController_t3645997205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentUserController::ClearFromDisk()
extern "C"  void ParseCurrentUserController_ClearFromDisk_m3143137902 (ParseCurrentUserController_t3645997205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.ParseCurrentUserController::GetCurrentSessionTokenAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t3122311356 * ParseCurrentUserController_GetCurrentSessionTokenAsync_m3777075045 (ParseCurrentUserController_t3645997205 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseCurrentUserController::LogOutAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseCurrentUserController_LogOutAsync_m3374122084 (ParseCurrentUserController_t3645997205 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentUserController::.ctor()
extern "C"  void ParseCurrentUserController__ctor_m3090985340 (ParseCurrentUserController_t3645997205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.Internal.ParseCurrentUserController::<GetAsync>b__7_0(System.Threading.Tasks.Task)
extern "C"  Task_1_t2192257973 * ParseCurrentUserController_U3CGetAsyncU3Eb__7_0_m2900149015 (ParseCurrentUserController_t3645997205 * __this, Task_t2616336456 * ___toAwait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.Internal.ParseCurrentUserController::<GetAsync>b__7_1(System.Threading.Tasks.Task)
extern "C"  ParseUser_t38435519 * ParseCurrentUserController_U3CGetAsyncU3Eb__7_1_m3163160669 (ParseCurrentUserController_t3645997205 * __this, Task_t2616336456 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentUserController::<LogOutAsync>b__13_2(System.Threading.Tasks.Task`1<Parse.ParseUser>)
extern "C"  void ParseCurrentUserController_U3CLogOutAsyncU3Eb__13_2_m666121707 (ParseCurrentUserController_t3645997205 * __this, Task_1_t2192257973 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
