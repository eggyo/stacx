#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Parse.Internal.TaskQueue
struct TaskQueue_t983729204;
// Parse.ParseConfig
struct ParseConfig_t394301814;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.ParseCurrentConfigController
struct  ParseCurrentConfigController_t3841476044  : public Object_t
{
	// Parse.Internal.TaskQueue Parse.Internal.ParseCurrentConfigController::taskQueue
	TaskQueue_t983729204 * ___taskQueue_1;
	// Parse.ParseConfig Parse.Internal.ParseCurrentConfigController::currentConfig
	ParseConfig_t394301814 * ___currentConfig_2;
};
