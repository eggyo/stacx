#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// Parse.Internal.TaskQueue
struct TaskQueue_t983729204;
// Parse.ParseUser
struct ParseUser_t38435519;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.ParseCurrentUserController
struct  ParseCurrentUserController_t3645997205  : public Object_t
{
	// System.Object Parse.Internal.ParseCurrentUserController::mutex
	Object_t * ___mutex_0;
	// Parse.Internal.TaskQueue Parse.Internal.ParseCurrentUserController::taskQueue
	TaskQueue_t983729204 * ___taskQueue_1;
	// Parse.ParseUser Parse.Internal.ParseCurrentUserController::currentUser
	ParseUser_t38435519 * ___currentUser_2;
};
