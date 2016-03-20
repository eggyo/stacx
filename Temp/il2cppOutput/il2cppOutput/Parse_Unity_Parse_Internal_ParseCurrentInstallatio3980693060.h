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
// Parse.Internal.IInstallationIdController
struct IInstallationIdController_t3331256738;
// Parse.ParseInstallation
struct ParseInstallation_t3166046766;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.ParseCurrentInstallationController
struct  ParseCurrentInstallationController_t3980693060  : public Object_t
{
	// System.Object Parse.Internal.ParseCurrentInstallationController::mutex
	Object_t * ___mutex_0;
	// Parse.Internal.TaskQueue Parse.Internal.ParseCurrentInstallationController::taskQueue
	TaskQueue_t983729204 * ___taskQueue_1;
	// Parse.Internal.IInstallationIdController Parse.Internal.ParseCurrentInstallationController::installationIdController
	Object_t * ___installationIdController_2;
	// Parse.ParseInstallation Parse.Internal.ParseCurrentInstallationController::currentInstallation
	ParseInstallation_t3166046766 * ___currentInstallation_3;
};
