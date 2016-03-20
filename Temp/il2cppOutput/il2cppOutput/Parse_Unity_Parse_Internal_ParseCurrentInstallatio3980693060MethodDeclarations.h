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

// Parse.Internal.ParseCurrentInstallationController
struct ParseCurrentInstallationController_t3980693060;
// Parse.Internal.IInstallationIdController
struct IInstallationIdController_t3331256738;
// Parse.ParseInstallation
struct ParseInstallation_t3166046766;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t1024901924;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t2364827795;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseInstallation3166046766.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"

// System.Void Parse.Internal.ParseCurrentInstallationController::.ctor(Parse.Internal.IInstallationIdController)
extern "C"  void ParseCurrentInstallationController__ctor_m4069147113 (ParseCurrentInstallationController_t3980693060 * __this, Object_t * ___installationIdController, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.Internal.ParseCurrentInstallationController::get_CurrentInstallation()
extern "C"  ParseInstallation_t3166046766 * ParseCurrentInstallationController_get_CurrentInstallation_m2381000374 (ParseCurrentInstallationController_t3980693060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentInstallationController::set_CurrentInstallation(Parse.ParseInstallation)
extern "C"  void ParseCurrentInstallationController_set_CurrentInstallation_m146726655 (ParseCurrentInstallationController_t3980693060 * __this, ParseInstallation_t3166046766 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseCurrentInstallationController::SetAsync(Parse.ParseInstallation,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseCurrentInstallationController_SetAsync_m4240171293 (ParseCurrentInstallationController_t3980693060 * __this, ParseInstallation_t3166046766 * ___installation, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation> Parse.Internal.ParseCurrentInstallationController::GetAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t1024901924 * ParseCurrentInstallationController_GetAsync_m2197273540 (ParseCurrentInstallationController_t3980693060 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Boolean> Parse.Internal.ParseCurrentInstallationController::ExistsAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2364827795 * ParseCurrentInstallationController_ExistsAsync_m2025700697 (ParseCurrentInstallationController_t3980693060 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ParseCurrentInstallationController::IsCurrent(Parse.ParseInstallation)
extern "C"  bool ParseCurrentInstallationController_IsCurrent_m2518393754 (ParseCurrentInstallationController_t3980693060 * __this, ParseInstallation_t3166046766 * ___installation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentInstallationController::ClearFromMemory()
extern "C"  void ParseCurrentInstallationController_ClearFromMemory_m1249883331 (ParseCurrentInstallationController_t3980693060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCurrentInstallationController::ClearFromDisk()
extern "C"  void ParseCurrentInstallationController_ClearFromDisk_m3148618399 (ParseCurrentInstallationController_t3980693060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseInstallation> Parse.Internal.ParseCurrentInstallationController::<GetAsync>b__9_0(System.Threading.Tasks.Task)
extern "C"  Task_1_t1024901924 * ParseCurrentInstallationController_U3CGetAsyncU3Eb__9_0_m3991495925 (ParseCurrentInstallationController_t3980693060 * __this, Task_t2616336456 * ___toAwait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.Internal.ParseCurrentInstallationController::<GetAsync>b__9_1(System.Threading.Tasks.Task)
extern "C"  ParseInstallation_t3166046766 * ParseCurrentInstallationController_U3CGetAsyncU3Eb__9_1_m3443240189 (ParseCurrentInstallationController_t3980693060 * __this, Task_t2616336456 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
