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

// Parse.Internal.ParseUserController
struct ParseUserController_t1152149762;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task
struct Task_t2616336456;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.Internal.ParseUserController::.ctor(Parse.Internal.IParseCommandRunner)
extern "C"  void ParseUserController__ctor_m4251493768 (ParseUserController_t1152149762 * __this, Object_t * ___commandRunner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseUserController::SignUpAsync(Parse.Internal.IObjectState,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseUserController_SignUpAsync_m1494911917 (ParseUserController_t1152149762 * __this, Object_t * ___state, Object_t* ___operations, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseUserController::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseUserController_LogInAsync_m2795194368 (ParseUserController_t1152149762 * __this, String_t* ___username, String_t* ___password, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseUserController::LogInAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseUserController_LogInAsync_m432388134 (ParseUserController_t1152149762 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseUserController::GetUserAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseUserController_GetUserAsync_m4057366788 (ParseUserController_t1152149762 * __this, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseUserController::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUserController_RequestPasswordResetAsync_m1066029346 (ParseUserController_t1152149762 * __this, String_t* ___email, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
