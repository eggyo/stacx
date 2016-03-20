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

// Parse.Internal.IParseCurrentInstallationController
struct IParseCurrentInstallationController_t1091779661;
// Parse.ParseInstallation
struct ParseInstallation_t3166046766;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1306587746;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3134981216;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Version497901645.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// Parse.Internal.IParseCurrentInstallationController Parse.ParseInstallation::get_CurrentInstallationController()
extern "C"  Object_t * ParseInstallation_get_CurrentInstallationController_m2038652599 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.ctor()
extern "C"  void ParseInstallation__ctor_m287282733 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
extern "C"  ParseInstallation_t3166046766 * ParseInstallation_get_CurrentInstallation_m3089912182 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
extern "C"  void ParseInstallation_ClearInMemoryInstallation_m459085016 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParseInstallation::get_Query()
extern "C"  ParseQuery_1_t1306587746 * ParseInstallation_get_Query_m1032744854 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
extern "C"  Guid_t2778838590  ParseInstallation_get_InstallationId_m3897362602 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_InstallationId(System.Guid)
extern "C"  void ParseInstallation_set_InstallationId_m2787553665 (ParseInstallation_t3166046766 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
extern "C"  String_t* ParseInstallation_get_DeviceType_m1181454637 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceType(System.String)
extern "C"  void ParseInstallation_set_DeviceType_m2807560222 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
extern "C"  String_t* ParseInstallation_get_AppName_m1020457553 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppName(System.String)
extern "C"  void ParseInstallation_set_AppName_m1190696904 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
extern "C"  String_t* ParseInstallation_get_AppVersion_m2379561012 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppVersion(System.String)
extern "C"  void ParseInstallation_set_AppVersion_m1311126647 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
extern "C"  String_t* ParseInstallation_get_AppIdentifier_m686693679 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppIdentifier(System.String)
extern "C"  void ParseInstallation_set_AppIdentifier_m1854460010 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
extern "C"  String_t* ParseInstallation_get_TimeZone_m3998924630 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_TimeZone(System.String)
extern "C"  void ParseInstallation_set_TimeZone_m1213139669 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_LocaleIdentifier()
extern "C"  String_t* ParseInstallation_get_LocaleIdentifier_m3721083744 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_LocaleIdentifier(System.String)
extern "C"  void ParseInstallation_set_LocaleIdentifier_m1774482955 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::GetLocaleIdentifier()
extern "C"  String_t* ParseInstallation_GetLocaleIdentifier_m2924467591 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
extern "C"  Version_t497901645 * ParseInstallation_get_ParseVersion_m82535817 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_ParseVersion(System.Version)
extern "C"  void ParseInstallation_set_ParseVersion_m3487481440 (ParseInstallation_t3166046766 * __this, Version_t497901645 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::GetParseVersion()
extern "C"  Version_t497901645 * ParseInstallation_GetParseVersion_m1066567938 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
extern "C"  Object_t* ParseInstallation_get_Channels_m19858686 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Channels(System.Collections.Generic.IList`1<System.String>)
extern "C"  void ParseInstallation_set_Channels_m195103917 (ParseInstallation_t3166046766 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
extern "C"  bool ParseInstallation_IsKeyMutable_m2096150470 (ParseInstallation_t3166046766 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseInstallation_SaveAsync_m3833316176 (ParseInstallation_t3166046766 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
extern "C"  String_t* ParseInstallation_get_DeviceToken_m1974513544 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
extern "C"  void ParseInstallation_set_DeviceToken_m3309418609 (ParseInstallation_t3166046766 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
extern "C"  void ParseInstallation_SetDeviceTokenFromData_m314112893 (ParseInstallation_t3166046766 * __this, ByteU5BU5D_t58506160* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
extern "C"  int32_t ParseInstallation_get_Badge_m3658802731 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Badge(System.Int32)
extern "C"  void ParseInstallation_set_Badge_m3497892386 (ParseInstallation_t3166046766 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
extern "C"  void ParseInstallation__cctor_m4128701216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__0(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseInstallation_U3CU3En__0_m1501422383 (ParseInstallation_t3166046766 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<get_Badge>b__47_0()
extern "C"  void ParseInstallation_U3Cget_BadgeU3Eb__47_0_m3564074541 (ParseInstallation_t3166046766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
