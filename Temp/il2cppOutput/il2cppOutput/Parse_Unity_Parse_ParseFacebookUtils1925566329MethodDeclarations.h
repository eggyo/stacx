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

// System.String
struct String_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t2192257973;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// Parse.ParseUser
struct ParseUser_t38435519;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_Parse_ParseUser38435519.h"

// System.String Parse.ParseFacebookUtils::get_AccessToken()
extern "C"  String_t* ParseFacebookUtils_get_AccessToken_m1801633947 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::Initialize()
extern "C"  void ParseFacebookUtils_Initialize_m3818416608 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseFacebookUtils_LogInAsync_m2492254945 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t339033936  ___expiration, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseFacebookUtils::LogInAsync(System.String,System.String,System.DateTime)
extern "C"  Task_1_t2192257973 * ParseFacebookUtils_LogInAsync_m1902319492 (Object_t * __this /* static, unused */, String_t* ___facebookId, String_t* ___accessToken, DateTime_t339033936  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseFacebookUtils_LinkAsync_m436077063 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t339033936  ___expiration, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::LinkAsync(Parse.ParseUser,System.String,System.String,System.DateTime)
extern "C"  Task_t2616336456 * ParseFacebookUtils_LinkAsync_m4285827614 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, String_t* ___facebookId, String_t* ___accessToken, DateTime_t339033936  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFacebookUtils::IsLinked(Parse.ParseUser)
extern "C"  bool ParseFacebookUtils_IsLinked_m3630155216 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseFacebookUtils_UnlinkAsync_m4286711480 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFacebookUtils::UnlinkAsync(Parse.ParseUser)
extern "C"  Task_t2616336456 * ParseFacebookUtils_UnlinkAsync_m3147867917 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFacebookUtils::.cctor()
extern "C"  void ParseFacebookUtils__cctor_m1119184121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
