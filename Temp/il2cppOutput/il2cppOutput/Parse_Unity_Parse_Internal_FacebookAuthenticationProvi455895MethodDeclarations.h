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

// Parse.Internal.FacebookAuthenticationProvider
struct FacebookAuthenticationProvider_t455895;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t2925145666;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1509325269;
// System.Threading.Tasks.Task
struct Task_t2616336456;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"

// System.Void Parse.Internal.FacebookAuthenticationProvider::.ctor()
extern "C"  void FacebookAuthenticationProvider__ctor_m2644632698 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_LoginDialogUrlOverride()
extern "C"  Uri_t2776692961 * FacebookAuthenticationProvider_get_LoginDialogUrlOverride_m1939520725 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_LoginDialogUrlOverride(System.Uri)
extern "C"  void FacebookAuthenticationProvider_set_LoginDialogUrlOverride_m3673851268 (FacebookAuthenticationProvider_t455895 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.Internal.FacebookAuthenticationProvider::get_ResponseUrlOverride()
extern "C"  Uri_t2776692961 * FacebookAuthenticationProvider_get_ResponseUrlOverride_m846431057 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_ResponseUrlOverride(System.Uri)
extern "C"  void FacebookAuthenticationProvider_set_ResponseUrlOverride_m473517064 (FacebookAuthenticationProvider_t455895 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::get_Permissions()
extern "C"  Object_t* FacebookAuthenticationProvider_get_Permissions_m2361747375 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void FacebookAuthenticationProvider_set_Permissions_m1879404476 (FacebookAuthenticationProvider_t455895 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AppId()
extern "C"  String_t* FacebookAuthenticationProvider_get_AppId_m757559726 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AppId(System.String)
extern "C"  void FacebookAuthenticationProvider_set_AppId_m3148440843 (FacebookAuthenticationProvider_t455895 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AccessToken()
extern "C"  String_t* FacebookAuthenticationProvider_get_AccessToken_m2450834055 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::set_AccessToken(System.String)
extern "C"  void FacebookAuthenticationProvider_set_AccessToken_m3127388050 (FacebookAuthenticationProvider_t455895 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::add_Navigate(System.Action`1<System.Uri>)
extern "C"  void FacebookAuthenticationProvider_add_Navigate_m1319715390 (FacebookAuthenticationProvider_t455895 * __this, Action_1_t2925145666 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::remove_Navigate(System.Action`1<System.Uri>)
extern "C"  void FacebookAuthenticationProvider_remove_Navigate_m390122131 (FacebookAuthenticationProvider_t455895 * __this, Action_1_t2925145666 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::TryParseOAuthCallbackUrl(System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>&)
extern "C"  bool FacebookAuthenticationProvider_TryParseOAuthCallbackUrl_m3961143784 (FacebookAuthenticationProvider_t455895 * __this, Uri_t2776692961 * ___uri, Object_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.FacebookAuthenticationProvider::GetAuthData(System.String,System.String,System.DateTime)
extern "C"  Object_t* FacebookAuthenticationProvider_GetAuthData_m2739287827 (FacebookAuthenticationProvider_t455895 * __this, String_t* ___facebookId, String_t* ___accessToken, DateTime_t339033936  ___expiration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::HandleNavigation(System.Uri)
extern "C"  bool FacebookAuthenticationProvider_HandleNavigation_m2847531661 (FacebookAuthenticationProvider_t455895 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::AuthenticateAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t1509325269 * FacebookAuthenticationProvider_AuthenticateAsync_m461712442 (FacebookAuthenticationProvider_t455895 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::Deauthenticate()
extern "C"  void FacebookAuthenticationProvider_Deauthenticate_m2537313952 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.FacebookAuthenticationProvider::RestoreAuthentication(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool FacebookAuthenticationProvider_RestoreAuthentication_m4014288018 (FacebookAuthenticationProvider_t455895 * __this, Object_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.FacebookAuthenticationProvider::get_AuthType()
extern "C"  String_t* FacebookAuthenticationProvider_get_AuthType_m1999355730 (FacebookAuthenticationProvider_t455895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::.cctor()
extern "C"  void FacebookAuthenticationProvider__cctor_m4192106099 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.FacebookAuthenticationProvider::<HandleNavigation>b__32_2(System.Threading.Tasks.Task)
extern "C"  void FacebookAuthenticationProvider_U3CHandleNavigationU3Eb__32_2_m1912317522 (FacebookAuthenticationProvider_t455895 * __this, Task_t2616336456 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
