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
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t2910589875;

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
	// System.Collections.Generic.IEnumerable`1<Parse.ParseUser> leaderBoardUIControl::leaders
	Object_t* ___leaders_6;
};
