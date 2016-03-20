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
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// leaderBoardUIControl
struct  leaderBoardUIControl_t2635474284  : public MonoBehaviour_t3012272455
{
	// System.Single leaderBoardUIControl::cellHeight
	float ___cellHeight_2;
	// UnityEngine.GameObject leaderBoardUIControl::cell
	GameObject_t4012695102 * ___cell_3;
	// UnityEngine.GameObject leaderBoardUIControl::HUD
	GameObject_t4012695102 * ___HUD_4;
	// System.Boolean leaderBoardUIControl::isProgressDone
	bool ___isProgressDone_5;
	// System.Collections.Generic.IEnumerable`1<System.Object> leaderBoardUIControl::leaders
	Object_t* ___leaders_6;
	// UnityEngine.UI.Text leaderBoardUIControl::scoreText
	Text_t3286458198 * ___scoreText_7;
	// System.Int32 leaderBoardUIControl::parseHighScore
	int32_t ___parseHighScore_8;
};
