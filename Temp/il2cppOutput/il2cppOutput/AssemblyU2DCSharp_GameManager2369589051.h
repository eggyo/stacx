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
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// DG.Tweening.Tweener
struct Tweener_t1766303790;
// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_AppAdvisoryHelper1736449576.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// GameManager
struct  GameManager_t2369589051  : public AppAdvisoryHelper_t1736449576
{
	// UnityEngine.GameObject GameManager::cubePrefab
	GameObject_t4012695102 * ___cubePrefab_5;
	// UnityEngine.Material GameManager::materialBackground
	Material_t1886596500 * ___materialBackground_6;
	// UnityEngine.Material GameManager::materialForeground
	Material_t1886596500 * ___materialForeground_7;
	// System.Single GameManager::scaleY
	float ___scaleY_8;
	// System.Int32 GameManager::stepColor
	int32_t ___stepColor_9;
	// UnityEngine.AudioClip GameManager::soundCut
	AudioClip_t3714538611 * ___soundCut_10;
	// UnityEngine.AudioClip GameManager::soundFail
	AudioClip_t3714538611 * ___soundFail_11;
	// UnityEngine.AudioClip GameManager::soundPerfectStack
	AudioClip_t3714538611 * ___soundPerfectStack_12;
	// System.Int32 GameManager::_count
	int32_t ____count_13;
	// DG.Tweening.Tweener GameManager::tween
	Tweener_t1766303790 * ___tween_14;
	// System.Boolean GameManager::isGameOver
	bool ___isGameOver_15;
	// System.Int32 GameManager::isPlayed
	int32_t ___isPlayed_16;
	// UnityEngine.GameObject GameManager::firstPlayPanal
	GameObject_t4012695102 * ___firstPlayPanal_17;
	// UnityEngine.Transform GameManager::lastCube
	Transform_t284553113 * ___lastCube_18;
	// UnityEngine.Color GameManager::colorFrom
	Color_t1588175760  ___colorFrom_19;
	// UnityEngine.Color GameManager::colorTo
	Color_t1588175760  ___colorTo_20;
	// UnityEngine.GameObject GameManager::go
	GameObject_t4012695102 * ___go_21;
	// System.Single GameManager::perfectStackSensibility
	float ___perfectStackSensibility_22;
};
