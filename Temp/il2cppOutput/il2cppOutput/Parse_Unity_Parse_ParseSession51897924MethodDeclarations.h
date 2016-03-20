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

// Parse.ParseSession
struct ParseSession_t51897924;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t2487406200;
// Parse.Internal.IParseSessionController
struct IParseSessionController_t2196088272;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t2205720378;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3122311356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Boolean Parse.ParseSession::IsKeyMutable(System.String)
extern "C"  bool ParseSession_IsKeyMutable_m1431757450 (ParseSession_t51897924 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseSession::get_SessionToken()
extern "C"  String_t* ParseSession_get_SessionToken_m4148768458 (ParseSession_t51897924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseSession> Parse.ParseSession::get_Query()
extern "C"  ParseQuery_1_t2487406200 * ParseSession_get_Query_m193231574 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseSessionController Parse.ParseSession::get_SessionController()
extern "C"  Object_t * ParseSession_get_SessionController_m682521485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync()
extern "C"  Task_1_t2205720378 * ParseSession_GetCurrentSessionAsync_m2057880520 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2205720378 * ParseSession_GetCurrentSessionAsync_m2831131559 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseSession::RevokeAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseSession_RevokeAsync_m1029877191 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.ParseSession::UpgradeToRevocableSessionAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t3122311356 * ParseSession_UpgradeToRevocableSessionAsync_m2846616180 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseSession::IsRevocableSessionToken(System.String)
extern "C"  bool ParseSession_IsRevocableSessionToken_m3533699677 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.ctor()
extern "C"  void ParseSession__ctor_m2850319753 (ParseSession_t51897924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.cctor()
extern "C"  void ParseSession__cctor_m1978470212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
