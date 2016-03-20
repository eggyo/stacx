#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t1831293589;
// System.Action`1<System.Action>
struct Action_1_t585976652;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t636314179;
// System.AggregateException
struct AggregateException_t1848402181;

#include "mscorlib_System_Object837106420.h"

// System.Threading.Tasks.Task
struct  Task_t2616336456  : public Object_t
{
	// System.Object System.Threading.Tasks.Task::mutex
	Object_t * ___mutex_2;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	Object_t* ___continuations_3;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t1848402181 * ___exception_4;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled_5;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted_6;
};
struct Task_t2616336456_StaticFields{
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t1831293589 * ___executionDepth_0;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t585976652 * ___immediateExecutor_1;
};
