#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Object
struct Object_t;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.TaskQueue
struct  TaskQueue_t983729204  : public Object_t
{
	// System.Threading.Tasks.Task Parse.Internal.TaskQueue::tail
	Task_t2616336456 * ___tail_0;
	// System.Object Parse.Internal.TaskQueue::mutex
	Object_t * ___mutex_1;
};
