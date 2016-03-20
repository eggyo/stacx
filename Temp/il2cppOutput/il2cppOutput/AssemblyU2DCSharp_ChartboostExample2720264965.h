#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// ChartboostSDK.CBInPlay
struct CBInPlay_t2441280239;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBStatusBarBehavio1280365899.h"

// ChartboostExample
struct  ChartboostExample_t2720264965  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject ChartboostExample::inPlayIcon
	GameObject_t4012695102 * ___inPlayIcon_2;
	// UnityEngine.GameObject ChartboostExample::inPlayText
	GameObject_t4012695102 * ___inPlayText_3;
	// UnityEngine.Texture2D ChartboostExample::logo
	Texture2D_t2509538522 * ___logo_4;
	// ChartboostSDK.CBInPlay ChartboostExample::inPlayAd
	CBInPlay_t2441280239 * ___inPlayAd_5;
	// UnityEngine.Vector2 ChartboostExample::scrollPosition
	Vector2_t3525329788  ___scrollPosition_6;
	// System.Collections.Generic.List`1<System.String> ChartboostExample::delegateHistory
	List_1_t1765447871 * ___delegateHistory_7;
	// System.Boolean ChartboostExample::hasInterstitial
	bool ___hasInterstitial_8;
	// System.Boolean ChartboostExample::hasMoreApps
	bool ___hasMoreApps_9;
	// System.Boolean ChartboostExample::hasRewardedVideo
	bool ___hasRewardedVideo_10;
	// System.Boolean ChartboostExample::hasInPlay
	bool ___hasInPlay_11;
	// System.Int32 ChartboostExample::frameCount
	int32_t ___frameCount_12;
	// System.Boolean ChartboostExample::ageGate
	bool ___ageGate_13;
	// System.Boolean ChartboostExample::autocache
	bool ___autocache_14;
	// System.Boolean ChartboostExample::activeAgeGate
	bool ___activeAgeGate_15;
	// System.Boolean ChartboostExample::showInterstitial
	bool ___showInterstitial_16;
	// System.Boolean ChartboostExample::showMoreApps
	bool ___showMoreApps_17;
	// System.Boolean ChartboostExample::showRewardedVideo
	bool ___showRewardedVideo_18;
	// System.Int32 ChartboostExample::BANNER_HEIGHT
	int32_t ___BANNER_HEIGHT_19;
	// System.Int32 ChartboostExample::REQUIRED_HEIGHT
	int32_t ___REQUIRED_HEIGHT_20;
	// System.Int32 ChartboostExample::ELEMENT_WIDTH
	int32_t ___ELEMENT_WIDTH_21;
	// UnityEngine.Rect ChartboostExample::scrollRect
	Rect_t1525428817  ___scrollRect_22;
	// UnityEngine.Rect ChartboostExample::scrollArea
	Rect_t1525428817  ___scrollArea_23;
	// UnityEngine.Vector3 ChartboostExample::guiScale
	Vector3_t3525329789  ___guiScale_24;
	// System.Single ChartboostExample::scale
	float ___scale_25;
	// ChartboostSDK.CBStatusBarBehavior ChartboostExample::statusBar
	int32_t ___statusBar_26;
	// UnityEngine.Vector2 ChartboostExample::beginFinger
	Vector2_t3525329788  ___beginFinger_27;
	// System.Single ChartboostExample::deltaFingerY
	float ___deltaFingerY_28;
	// UnityEngine.Vector2 ChartboostExample::beginPanel
	Vector2_t3525329788  ___beginPanel_29;
	// UnityEngine.Vector2 ChartboostExample::latestPanel
	Vector2_t3525329788  ___latestPanel_30;
};
