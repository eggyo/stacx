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

// Parse.PlatformHooks
struct PlatformHooks_t1183139998;
// Parse.Internal.IHttpClient
struct IHttpClient_t3242720612;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// UnityEngine.WWW
struct WWW_t1522972100;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1671424805;
// System.Action`1<System.Byte[]>
struct Action_1_t206958865;
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Action_1_t3798922816;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// Parse.ParseInstallation
struct ParseInstallation_t3166046766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "System_Core_System_Action437523947.h"
#include "Parse_Unity_Parse_ParseInstallation3166046766.h"

// Parse.Internal.IHttpClient Parse.PlatformHooks::get_HttpClient()
extern "C"  Object_t * PlatformHooks_get_HttpClient_m544159156 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_SDKName()
extern "C"  String_t* PlatformHooks_get_SDKName_m1715153466 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppName()
extern "C"  String_t* PlatformHooks_get_AppName_m2036703969 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppBuildVersion()
extern "C"  String_t* PlatformHooks_get_AppBuildVersion_m2280568352 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppDisplayVersion()
extern "C"  String_t* PlatformHooks_get_AppDisplayVersion_m381800716 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_AppIdentifier()
extern "C"  String_t* PlatformHooks_get_AppIdentifier_m977150399 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_OSVersion()
extern "C"  String_t* PlatformHooks_get_OSVersion_m48289289 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_DeviceType()
extern "C"  String_t* PlatformHooks_get_DeviceType_m953964189 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks::get_DeviceTimeZone()
extern "C"  String_t* PlatformHooks_get_DeviceTimeZone_m215713468 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsCompiledByIL2CPP()
extern "C"  bool PlatformHooks_get_IsCompiledByIL2CPP_m2654503018 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWebPlayer()
extern "C"  bool PlatformHooks_get_IsWebPlayer_m3931741129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsAndroid()
extern "C"  bool PlatformHooks_get_IsAndroid_m3974660387 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsIOS()
extern "C"  bool PlatformHooks_get_IsIOS_m1096523969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsTvOS()
extern "C"  bool PlatformHooks_get_IsTvOS_m4278332116 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks::get_IsWindowsPhone8()
extern "C"  bool PlatformHooks_get_IsWindowsPhone8_m581980641 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.PlatformHooks::GetTypeFromUnityEngine(System.String)
extern "C"  Type_t * PlatformHooks_GetTypeFromUnityEngine_m1314494008 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::CallStaticJavaUnityMethod(System.String,System.String,System.Object[])
extern "C"  void PlatformHooks_CallStaticJavaUnityMethod_m90437063 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___methodName, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
extern "C"  Object_t* PlatformHooks_get_ApplicationSettings_m1618422658 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
extern "C"  List_1_t1634065389 * PlatformHooks_CreateWrapperTypes_m2808346770 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
extern "C"  void PlatformHooks_RegisterNetworkRequest_m3355403755 (Object_t * __this /* static, unused */, WWW_t1522972100 * ___www, Action_1_t1671424805 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisterDeviceTokenRequest(System.Action`1<System.Byte[]>)
extern "C"  void PlatformHooks_RegisterDeviceTokenRequest_m3385779499 (Object_t * __this /* static, unused */, Action_1_t206958865 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RegisteriOSPushNotificationListener(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C"  void PlatformHooks_RegisteriOSPushNotificationListener_m3719651712 (Object_t * __this /* static, unused */, Action_1_t3798922816 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
extern "C"  void PlatformHooks_RunOnMainThread_m3707398485 (Object_t * __this /* static, unused */, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
extern "C"  Object_t * PlatformHooks_RunDispatcher_m3520756877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::Initialize()
extern "C"  void PlatformHooks_Initialize_m4204243831 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.PlatformHooks::ExecuteParseInstallationSaveHookAsync(Parse.ParseInstallation)
extern "C"  Task_t2616336456 * PlatformHooks_ExecuteParseInstallationSaveHookAsync_m1873522280 (PlatformHooks_t1183139998 * __this, ParseInstallation_t3166046766 * ___installation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.ctor()
extern "C"  void PlatformHooks__ctor_m2486561085 (PlatformHooks_t1183139998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks::.cctor()
extern "C"  void PlatformHooks__cctor_m3586853392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
