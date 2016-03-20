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

// Parse.Internal.ParseSessionController
struct ParseSessionController_t1522594375;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t2616336456;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseSessionController::.ctor(Parse.Internal.IParseCommandRunner)
extern "C"  void ParseSessionController__ctor_m3480157871 (ParseSessionController_t1522594375 * __this, Object_t * ___commandRunner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseSessionController::GetSessionAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseSessionController_GetSessionAsync_m2946567404 (ParseSessionController_t1522594375 * __this, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseSessionController::RevokeAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseSessionController_RevokeAsync_m2351624026 (ParseSessionController_t1522594375 * __this, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseSessionController::UpgradeToRevocableSessionAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseSessionController_UpgradeToRevocableSessionAsync_m2399630360 (ParseSessionController_t1522594375 * __this, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
