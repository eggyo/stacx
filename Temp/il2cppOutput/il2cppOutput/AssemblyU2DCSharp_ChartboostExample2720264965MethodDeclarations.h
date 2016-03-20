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

// ChartboostExample
struct ChartboostExample_t2720264965;
// System.String
struct String_t;
// ChartboostSDK.CBLocation
struct CBLocation_t3648673003;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBLocation3648673003.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBImpressionError1909344983.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBClickError3908805334.h"

// System.Void ChartboostExample::.ctor()
extern "C"  void ChartboostExample__ctor_m685789190 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::OnEnable()
extern "C"  void ChartboostExample_OnEnable_m1257910720 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::Start()
extern "C"  void ChartboostExample_Start_m3927894278 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::SetupDelegates()
extern "C"  void ChartboostExample_SetupDelegates_m1565974927 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::Update()
extern "C"  void ChartboostExample_Update_m1511490503 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::UpdateScrolling()
extern "C"  void ChartboostExample_UpdateScrolling_m89384336 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::AddLog(System.String)
extern "C"  void ChartboostExample_AddLog_m596661569 (ChartboostExample_t2720264965 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::OnGUI()
extern "C"  void ChartboostExample_OnGUI_m181187840 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::LayoutHeader()
extern "C"  void ChartboostExample_LayoutHeader_m2841280533 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::LayoutToggles()
extern "C"  void ChartboostExample_LayoutToggles_m3336059385 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::LayoutButtons()
extern "C"  void ChartboostExample_LayoutButtons_m2405292379 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::LayoutAgeGate(System.Int32)
extern "C"  void ChartboostExample_LayoutAgeGate_m4287591765 (ChartboostExample_t2720264965 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::OnDisable()
extern "C"  void ChartboostExample_OnDisable_m781463917 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didInitialize(System.Boolean)
extern "C"  void ChartboostExample_didInitialize_m3529356330 (ChartboostExample_t2720264965 * __this, bool ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didFailToLoadInterstitial(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void ChartboostExample_didFailToLoadInterstitial_m3006228390 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDismissInterstitial(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDismissInterstitial_m382439784 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCloseInterstitial(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCloseInterstitial_m2909100502 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didClickInterstitial(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didClickInterstitial_m2781549926 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCacheInterstitial(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCacheInterstitial_m104903648 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostExample::shouldDisplayInterstitial(ChartboostSDK.CBLocation)
extern "C"  bool ChartboostExample_shouldDisplayInterstitial_m3522955590 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDisplayInterstitial(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDisplayInterstitial_m1757842848 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didFailToLoadMoreApps(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void ChartboostExample_didFailToLoadMoreApps_m4019331233 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDismissMoreApps(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDismissMoreApps_m3366261219 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCloseMoreApps(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCloseMoreApps_m408961361 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didClickMoreApps(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didClickMoreApps_m3348251873 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCacheMoreApps(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCacheMoreApps_m4282265691 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostExample::shouldDisplayMoreApps(ChartboostSDK.CBLocation)
extern "C"  bool ChartboostExample_shouldDisplayMoreApps_m3004704961 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDisplayMoreApps(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDisplayMoreApps_m1681320475 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didFailToRecordClick(ChartboostSDK.CBLocation,ChartboostSDK.CBClickError)
extern "C"  void ChartboostExample_didFailToRecordClick_m721576542 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didFailToLoadRewardedVideo(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void ChartboostExample_didFailToLoadRewardedVideo_m1937963621 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDismissRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDismissRewardedVideo_m1630670073 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCloseRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCloseRewardedVideo_m2647741003 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didClickRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didClickRewardedVideo_m2988640443 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCacheRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCacheRewardedVideo_m1616984449 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostExample::shouldDisplayRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  bool ChartboostExample_shouldDisplayRewardedVideo_m202412251 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCompleteRewardedVideo(ChartboostSDK.CBLocation,System.Int32)
extern "C"  void ChartboostExample_didCompleteRewardedVideo_m1051446449 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___reward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didDisplayRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didDisplayRewardedVideo_m1318492097 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCacheInPlay(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_didCacheInPlay_m4055828589 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didFailToLoadInPlay(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void ChartboostExample_didFailToLoadInPlay_m911097075 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didPauseClickForConfirmation()
extern "C"  void ChartboostExample_didPauseClickForConfirmation_m2893448811 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::willDisplayVideo(ChartboostSDK.CBLocation)
extern "C"  void ChartboostExample_willDisplayVideo_m1093280796 (ChartboostExample_t2720264965 * __this, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::didCompleteAppStoreSheetFlow()
extern "C"  void ChartboostExample_didCompleteAppStoreSheetFlow_m1817241587 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostExample::TrackIAP()
extern "C"  void ChartboostExample_TrackIAP_m2278805451 (ChartboostExample_t2720264965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
