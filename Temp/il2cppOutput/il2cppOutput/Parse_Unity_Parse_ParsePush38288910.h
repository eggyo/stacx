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
// Parse.Internal.IPushState
struct IPushState_t2870390038;
// Parse.Internal.SynchronizedEventHandler`1<Parse.ParsePushNotificationEventArgs>
struct SynchronizedEventHandler_1_t1640903962;

#include "mscorlib_System_Object837106420.h"

// Parse.ParsePush
struct  ParsePush_t38288910  : public Object_t
{
	// System.Object Parse.ParsePush::mutex
	Object_t * ___mutex_0;
	// Parse.Internal.IPushState Parse.ParsePush::state
	Object_t * ___state_1;
};
struct ParsePush_t38288910_StaticFields{
	// Parse.Internal.SynchronizedEventHandler`1<Parse.ParsePushNotificationEventArgs> Parse.ParsePush::parsePushNotificationReceived
	SynchronizedEventHandler_1_t1640903962 * ___parsePushNotificationReceived_2;
};
