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

// Parse.ParsePush
struct ParsePush_t38288910;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1306587746;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Action`1<Parse.Internal.MutablePushState>
struct Action_1_t3502315610;
// Parse.Internal.IParsePushController
struct IParsePushController_t1615574696;
// Parse.Internal.IParsePushChannelsController
struct IParsePushChannelsController_t4044598936;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t2225707083;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.ParsePush::.ctor()
extern "C"  void ParsePush__ctor_m3452708173 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C"  ParseQuery_1_t1306587746 * ParsePush_get_Query_m3749550774 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C"  void ParsePush_set_Query_m4167385525 (ParsePush_t38288910 * __this, ParseQuery_1_t1306587746 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C"  Object_t* ParsePush_get_Channels_m480243892 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void ParsePush_set_Channels_m3881925943 (ParsePush_t38288910 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C"  Nullable_1_t3225071844  ParsePush_get_Expiration_m3224547561 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C"  void ParsePush_set_Expiration_m1760076436 (ParsePush_t38288910 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_PushTime()
extern "C"  Nullable_1_t3225071844  ParsePush_get_PushTime_m2945479553 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_PushTime(System.Nullable`1<System.DateTime>)
extern "C"  void ParsePush_set_PushTime_m955956652 (ParsePush_t38288910 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C"  Nullable_1_t3649900800  ParsePush_get_ExpirationInterval_m2610238194 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C"  void ParsePush_set_ExpirationInterval_m4013540373 (ParsePush_t38288910 * __this, Nullable_1_t3649900800  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C"  Object_t* ParsePush_get_Data_m2880714157 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParsePush_set_Data_m243630430 (ParsePush_t38288910 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C"  String_t* ParsePush_get_Alert_m4106193537 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C"  void ParsePush_set_Alert_m2095624792 (ParsePush_t38288910 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C"  Object_t* ParsePush_Encode_m2789093968 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::MutateState(System.Action`1<Parse.Internal.MutablePushState>)
extern "C"  void ParsePush_MutateState_m2373365897 (ParsePush_t38288910 * __this, Action_1_t3502315610 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParsePushController Parse.ParsePush::get_PushController()
extern "C"  Object_t * ParsePush_get_PushController_m3806209145 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParsePushChannelsController Parse.ParsePush::get_PushChannelsController()
extern "C"  Object_t * ParsePush_get_PushChannelsController_m3012420953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C"  Task_t2616336456 * ParsePush_SendAsync_m1022826744 (ParsePush_t38288910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePush_SendAsync_m2547821783 (ParsePush_t38288910 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C"  Task_t2616336456 * ParsePush_SendAlertAsync_m4032555228 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C"  Task_t2616336456 * ParsePush_SendAlertAsync_m3597557784 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  Task_t2616336456 * ParsePush_SendAlertAsync_m3627267953 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C"  Task_t2616336456 * ParsePush_SendAlertAsync_m3813527393 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1306587746 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Task_t2616336456 * ParsePush_SendDataAsync_m1072966126 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C"  Task_t2616336456 * ParsePush_SendDataAsync_m57563562 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  Task_t2616336456 * ParsePush_SendDataAsync_m3128793731 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C"  Task_t2616336456 * ParsePush_SendDataAsync_m3751165299 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1306587746 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C"  void ParsePush_add_ParsePushNotificationReceived_m2027580036 (Object_t * __this /* static, unused */, EventHandler_1_t2225707083 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C"  void ParsePush_remove_ParsePushNotificationReceived_m3599780501 (Object_t * __this /* static, unused */, EventHandler_1_t2225707083 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C"  Task_t2616336456 * ParsePush_SubscribeAsync_m3812843634 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePush_SubscribeAsync_m2974673715 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  Task_t2616336456 * ParsePush_SubscribeAsync_m2747901771 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePush_SubscribeAsync_m1174973882 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C"  Task_t2616336456 * ParsePush_UnsubscribeAsync_m3553269689 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePush_UnsubscribeAsync_m1309406860 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  Task_t2616336456 * ParsePush_UnsubscribeAsync_m2676086226 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParsePush_UnsubscribeAsync_m2563275219 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C"  void ParsePush__cctor_m3472642048 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
