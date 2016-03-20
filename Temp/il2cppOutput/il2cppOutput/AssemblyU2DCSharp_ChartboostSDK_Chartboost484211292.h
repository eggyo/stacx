#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ChartboostSDK.Chartboost
struct Chartboost_t484211292;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Func`2<ChartboostSDK.CBLocation,System.Boolean>
struct Func_2_t1882026158;
// System.Action`1<ChartboostSDK.CBLocation>
struct Action_1_t3797125708;
// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError>
struct Action_2_t1255075070;
// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBClickError>
struct Action_2_t3254535421;
// System.Action`2<ChartboostSDK.CBLocation,System.Int32>
struct Action_2_t2193144874;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// ChartboostSDK.Chartboost
struct  Chartboost_t484211292  : public MonoBehaviour_t3012272455
{
};
struct Chartboost_t484211292_StaticFields{
	// System.Boolean ChartboostSDK.Chartboost::showingAgeGate
	bool ___showingAgeGate_2;
	// ChartboostSDK.Chartboost ChartboostSDK.Chartboost::instance
	Chartboost_t484211292 * ___instance_3;
	// System.Boolean ChartboostSDK.Chartboost::isPaused
	bool ___isPaused_4;
	// System.Boolean ChartboostSDK.Chartboost::shouldPause
	bool ___shouldPause_5;
	// System.Single ChartboostSDK.Chartboost::lastTimeScale
	float ___lastTimeScale_6;
	// UnityEngine.EventSystems.EventSystem ChartboostSDK.Chartboost::kEventSystem
	EventSystem_t409518532 * ___kEventSystem_7;
	// System.Action`1<System.Boolean> ChartboostSDK.Chartboost::didInitialize
	Action_1_t359458046 * ___didInitialize_8;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayInterstitial
	Func_2_t1882026158 * ___shouldDisplayInterstitial_9;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayInterstitial
	Action_1_t3797125708 * ___didDisplayInterstitial_10;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheInterstitial
	Action_1_t3797125708 * ___didCacheInterstitial_11;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickInterstitial
	Action_1_t3797125708 * ___didClickInterstitial_12;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseInterstitial
	Action_1_t3797125708 * ___didCloseInterstitial_13;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissInterstitial
	Action_1_t3797125708 * ___didDismissInterstitial_14;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadInterstitial
	Action_2_t1255075070 * ___didFailToLoadInterstitial_15;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBClickError> ChartboostSDK.Chartboost::didFailToRecordClick
	Action_2_t3254535421 * ___didFailToRecordClick_16;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayMoreApps
	Func_2_t1882026158 * ___shouldDisplayMoreApps_17;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayMoreApps
	Action_1_t3797125708 * ___didDisplayMoreApps_18;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheMoreApps
	Action_1_t3797125708 * ___didCacheMoreApps_19;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickMoreApps
	Action_1_t3797125708 * ___didClickMoreApps_20;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseMoreApps
	Action_1_t3797125708 * ___didCloseMoreApps_21;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissMoreApps
	Action_1_t3797125708 * ___didDismissMoreApps_22;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadMoreApps
	Action_2_t1255075070 * ___didFailToLoadMoreApps_23;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayRewardedVideo
	Func_2_t1882026158 * ___shouldDisplayRewardedVideo_24;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayRewardedVideo
	Action_1_t3797125708 * ___didDisplayRewardedVideo_25;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheRewardedVideo
	Action_1_t3797125708 * ___didCacheRewardedVideo_26;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickRewardedVideo
	Action_1_t3797125708 * ___didClickRewardedVideo_27;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseRewardedVideo
	Action_1_t3797125708 * ___didCloseRewardedVideo_28;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissRewardedVideo
	Action_1_t3797125708 * ___didDismissRewardedVideo_29;
	// System.Action`2<ChartboostSDK.CBLocation,System.Int32> ChartboostSDK.Chartboost::didCompleteRewardedVideo
	Action_2_t2193144874 * ___didCompleteRewardedVideo_30;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadRewardedVideo
	Action_2_t1255075070 * ___didFailToLoadRewardedVideo_31;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheInPlay
	Action_1_t3797125708 * ___didCacheInPlay_32;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadInPlay
	Action_2_t1255075070 * ___didFailToLoadInPlay_33;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::willDisplayVideo
	Action_1_t3797125708 * ___willDisplayVideo_34;
	// System.Action ChartboostSDK.Chartboost::didPauseClickForConfirmation
	Action_t437523947 * ___didPauseClickForConfirmation_35;
	// System.Action ChartboostSDK.Chartboost::didCompleteAppStoreSheetFlow
	Action_t437523947 * ___didCompleteAppStoreSheetFlow_36;
};
