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

// Parse.Internal.IParseUserController
struct IParseUserController_t1372752409;
// Parse.Internal.IParseCurrentUserController
struct IParseCurrentUserController_t829376414;
// Parse.ParseUser
struct ParseUser_t38435519;
// System.String
struct String_t;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3122311356;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t2192257973;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t2879548009;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t2473943795;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t2168866506;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t3191704283;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"
#include "Parse_Unity_Parse_ParseUser38435519.h"

// Parse.Internal.IParseUserController Parse.ParseUser::get_UserController()
extern "C"  Object_t * ParseUser_get_UserController_m3472083020 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseCurrentUserController Parse.ParseUser::get_CurrentUserController()
extern "C"  Object_t * ParseUser_get_CurrentUserController_m238651430 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
extern "C"  bool ParseUser_get_IsAuthenticated_m3671752418 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
extern "C"  void ParseUser_Remove_m3473326774 (ParseUser_t38435519 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
extern "C"  bool ParseUser_IsKeyMutable_m104247253 (ParseUser_t38435519 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::HandleSave(Parse.Internal.IObjectState)
extern "C"  void ParseUser_HandleSave_m2470173574 (ParseUser_t38435519 * __this, Object_t * ___serverState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
extern "C"  String_t* ParseUser_get_SessionToken_m1451379665 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
extern "C"  String_t* ParseUser_get_CurrentSessionToken_m919484400 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.ParseUser::GetCurrentSessionTokenAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t3122311356 * ParseUser_GetCurrentSessionTokenAsync_m3360099621 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
extern "C"  Task_t2616336456 * ParseUser_SetSessionTokenAsync_m1645384156 (ParseUser_t38435519 * __this, String_t* ___newSessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_SetSessionTokenAsync_m1142321545 (ParseUser_t38435519 * __this, String_t* ___newSessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
extern "C"  String_t* ParseUser_get_Username_m200672612 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
extern "C"  void ParseUser_set_Username_m748501127 (ParseUser_t38435519 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
extern "C"  String_t* ParseUser_get_Password_m3440433641 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
extern "C"  void ParseUser_set_Password_m2297734178 (ParseUser_t38435519 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
extern "C"  String_t* ParseUser_get_Email_m2192074672 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
extern "C"  void ParseUser_set_Email_m3066493321 (ParseUser_t38435519 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_SignUpAsync_m2587271876 (ParseUser_t38435519 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
extern "C"  Task_t2616336456 * ParseUser_SignUpAsync_m701014967 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_SignUpAsync_m2743257046 (ParseUser_t38435519 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
extern "C"  Task_1_t2192257973 * ParseUser_LogInAsync_m3106778572 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseUser_LogInAsync_m626151321 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
extern "C"  Task_1_t2192257973 * ParseUser_BecomeAsync_m911423370 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseUser_BecomeAsync_m3391356187 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_SaveAsync_m1681962527 (ParseUser_t38435519 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_1_t2879548009 * ParseUser_FetchAsyncInternal_m918896087 (ParseUser_t38435519 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
extern "C"  void ParseUser_LogOut_m1820191538 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
extern "C"  Task_t2616336456 * ParseUser_LogOutAsync_m1703622469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_LogOutAsync_m4045076452 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_LogOutAsync_m1359303122 (ParseUser_t38435519 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
extern "C"  void ParseUser_LogOutWithProviders_m1154033100 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
extern "C"  ParseUser_t38435519 * ParseUser_get_CurrentUser_m3906086245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
extern "C"  Task_1_t2192257973 * ParseUser_GetCurrentUserAsync_m1899825329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseUser_GetCurrentUserAsync_m680095312 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
extern "C"  Task_t2616336456 * ParseUser_SaveCurrentUserAsync_m3343356907 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_SaveCurrentUserAsync_m3102113050 (Object_t * __this /* static, unused */, ParseUser_t38435519 * ___user, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
extern "C"  void ParseUser_ClearInMemoryUser_m1307449912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
extern "C"  ParseQuery_1_t2473943795 * ParseUser_get_Query_m3137637238 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
extern "C"  Task_t2616336456 * ParseUser_EnableRevocableSessionAsync_m720370055 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_EnableRevocableSessionAsync_m582003110 (Object_t * __this /* static, unused */, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
extern "C"  void ParseUser_DisableRevocableSession_m1021366823 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
extern "C"  bool ParseUser_get_IsRevocableSessionEnabled_m670983855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
extern "C"  Task_t2616336456 * ParseUser_UpgradeToRevocableSessionAsync_m1058012783 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_UpgradeToRevocableSessionAsync_m3325916302 (ParseUser_t38435519 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_UpgradeToRevocableSessionAsync_m551783292 (ParseUser_t38435519 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
extern "C"  Task_t2616336456 * ParseUser_RequestPasswordResetAsync_m4170237848 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_RequestPasswordResetAsync_m569475661 (Object_t * __this /* static, unused */, String_t* ___email, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
extern "C"  Object_t* ParseUser_get_AuthData_m1536316718 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C"  void ParseUser_set_AuthData_m1447242237 (ParseUser_t38435519 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
extern "C"  Object_t * ParseUser_GetProvider_m3439346007 (Object_t * __this /* static, unused */, String_t* ___providerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
extern "C"  void ParseUser_CleanupAuthData_m977573968 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
extern "C"  void ParseUser_SynchronizeAllAuthData_m3211253835 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
extern "C"  void ParseUser_SynchronizeAuthData_m2483540141 (ParseUser_t38435519 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_LinkWithAsync_m1952227804 (ParseUser_t38435519 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_LinkWithAsync_m1721174066 (ParseUser_t38435519 * __this, String_t* ___authType, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseUser_UnlinkFromAsync_m4161386133 (ParseUser_t38435519 * __this, String_t* ___authType, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
extern "C"  bool ParseUser_IsLinked_m1665161411 (ParseUser_t38435519 * __this, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseUser_LogInWithAsync_m1645519641 (Object_t * __this /* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2192257973 * ParseUser_LogInWithAsync_m3948569391 (Object_t * __this /* static, unused */, String_t* ___authType, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
extern "C"  void ParseUser_RegisterProvider_m152004589 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.ctor()
extern "C"  void ParseUser__ctor_m3444875196 (ParseUser_t38435519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
extern "C"  void ParseUser__cctor_m3229819761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<SignUpAsync>b__27_2(System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>)
extern "C"  Task_t2616336456 * ParseUser_U3CSignUpAsyncU3Eb__27_2_m244323427 (ParseUser_t38435519 * __this, Task_1_t2178264903 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<SaveAsync>b__34_0(System.Threading.Tasks.Task)
extern "C"  Task_t2616336456 * ParseUser_U3CSaveAsyncU3Eb__34_0_m3190006544 (ParseUser_t38435519 * __this, Task_t2616336456 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::<FetchAsyncInternal>b__35_0(System.Threading.Tasks.Task`1<Parse.ParseObject>)
extern "C"  Task_1_t2879548009 * ParseUser_U3CFetchAsyncInternalU3Eb__35_0_m2708781201 (ParseUser_t38435519 * __this, Task_1_t2879548009 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__59_1(System.Threading.Tasks.Task`1<System.String>)
extern "C"  Task_t2616336456 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__59_1_m2367264842 (ParseUser_t38435519 * __this, Task_1_t3122311356 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
