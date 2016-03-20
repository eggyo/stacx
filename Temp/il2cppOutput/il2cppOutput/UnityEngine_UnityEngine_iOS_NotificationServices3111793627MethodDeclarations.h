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

// UnityEngine.iOS.NotificationServices
struct NotificationServices_t3111793627;
// UnityEngine.iOS.LocalNotification
struct LocalNotification_t3128840488;
// UnityEngine.iOS.LocalNotification[]
struct LocalNotificationU5BU5D_t444251449;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t1121285571;
// UnityEngine.iOS.RemoteNotification[]
struct RemoteNotificationU5BU5D_t2509186002;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_LocalNotification3128840488.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType104038455.h"

// System.Void UnityEngine.iOS.NotificationServices::.ctor()
extern "C"  void NotificationServices__ctor_m198942467 (NotificationServices_t3111793627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_localNotificationCount()
extern "C"  int32_t NotificationServices_get_localNotificationCount_m2260448131 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)
extern "C"  LocalNotification_t3128840488 * NotificationServices_GetLocalNotification_m4231487047 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_localNotifications()
extern "C"  LocalNotificationU5BU5D_t444251449* NotificationServices_get_localNotifications_m3771701754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C"  void NotificationServices_ScheduleLocalNotification_m3628575988 (Object_t * __this /* static, unused */, LocalNotification_t3128840488 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::PresentLocalNotificationNow(UnityEngine.iOS.LocalNotification)
extern "C"  void NotificationServices_PresentLocalNotificationNow_m2681731384 (Object_t * __this /* static, unused */, LocalNotification_t3128840488 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C"  void NotificationServices_CancelLocalNotification_m4096189783 (Object_t * __this /* static, unused */, LocalNotification_t3128840488 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
extern "C"  void NotificationServices_CancelAllLocalNotifications_m169357189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_scheduledLocalNotifications()
extern "C"  LocalNotificationU5BU5D_t444251449* NotificationServices_get_scheduledLocalNotifications_m3798632399 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C"  int32_t NotificationServices_get_remoteNotificationCount_m3821812694 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C"  RemoteNotification_t1121285571 * NotificationServices_GetRemoteNotification_m3703896883 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern "C"  RemoteNotificationU5BU5D_t2509186002* NotificationServices_get_remoteNotifications_m800019510 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
extern "C"  void NotificationServices_ClearLocalNotifications_m694087179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C"  void NotificationServices_ClearRemoteNotifications_m3581432662 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C"  void NotificationServices_RegisterForNotifications_m460427814 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C"  void NotificationServices_RegisterForNotifications_m736063639 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::UnregisterForRemoteNotifications()
extern "C"  void NotificationServices_UnregisterForRemoteNotifications_m3086124726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.NotificationType UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()
extern "C"  int32_t NotificationServices_get_enabledNotificationTypes_m2467941417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C"  ByteU5BU5D_t58506160* NotificationServices_get_deviceToken_m1646897969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.NotificationServices::get_registrationError()
extern "C"  String_t* NotificationServices_get_registrationError_m720449892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
