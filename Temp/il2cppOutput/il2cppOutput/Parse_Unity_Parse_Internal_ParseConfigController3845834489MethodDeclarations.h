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

// Parse.Internal.ParseConfigController
struct ParseConfigController_t3845834489;
// Parse.Internal.IParseCurrentConfigController
struct IParseCurrentConfigController_t2898292373;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t2548124268;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseConfigController::.ctor()
extern "C"  void ParseConfigController__ctor_m2481987980 (ParseConfigController_t3845834489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseCurrentConfigController Parse.Internal.ParseConfigController::get_CurrentConfigController()
extern "C"  Object_t * ParseConfigController_get_CurrentConfigController_m2939012634 (ParseConfigController_t3845834489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseConfigController::set_CurrentConfigController(Parse.Internal.IParseCurrentConfigController)
extern "C"  void ParseConfigController_set_CurrentConfigController_m45743053 (ParseConfigController_t3845834489 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.Internal.ParseConfigController::FetchConfigAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2548124268 * ParseConfigController_FetchConfigAsync_m1257912763 (ParseConfigController_t3845834489 * __this, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
