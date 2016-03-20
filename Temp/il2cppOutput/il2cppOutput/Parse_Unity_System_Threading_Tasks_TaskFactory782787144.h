#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t879015737;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t782787144  : public Object_t
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::scheduler
	TaskScheduler_t879015737 * ___scheduler_0;
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::cancellationToken
	CancellationToken_t2348806009  ___cancellationToken_1;
};
