#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.SynchronizationContext
struct SynchronizationContext_t216490034;

#include "mscorlib_System_Object837106420.h"

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t879015737  : public Object_t
{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t216490034 * ___context_1;
};
struct TaskScheduler_t879015737_StaticFields{
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t216490034 * ___defaultContext_0;
};
