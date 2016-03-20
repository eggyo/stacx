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
// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_t3757341492  : public Object_t
{
	// System.Object System.Threading.CancellationTokenSource::mutex
	Object_t * ___mutex_0;
	// System.Action System.Threading.CancellationTokenSource::actions
	Action_t437523947 * ___actions_1;
	// System.Boolean System.Threading.CancellationTokenSource::isCancellationRequested
	bool ___isCancellationRequested_2;
};
