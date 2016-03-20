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
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct LinkedList_1_t19855572;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.ThreadLocal`1<System.Boolean>
struct ThreadLocal_1_t3489851439;
// Parse.Internal.TaskQueue
struct TaskQueue_t983729204;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs>
struct SynchronizedEventHandler_1_t826798267;

#include "mscorlib_System_Object837106420.h"

// Parse.ParseObject
struct  ParseObject_t725725555  : public Object_t
{
	// System.Object Parse.ParseObject::mutex
	Object_t * ___mutex_1;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>> Parse.ParseObject::operationSetQueue
	LinkedList_1_t19855572 * ___operationSetQueue_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::estimatedData
	Object_t* ___estimatedData_3;
	// System.Boolean Parse.ParseObject::hasBeenFetched
	bool ___hasBeenFetched_5;
	// System.Boolean Parse.ParseObject::dirty
	bool ___dirty_6;
	// Parse.Internal.TaskQueue Parse.ParseObject::taskQueue
	TaskQueue_t983729204 * ___taskQueue_7;
	// Parse.Internal.IObjectState Parse.ParseObject::state
	Object_t * ___state_8;
	// Parse.Internal.SynchronizedEventHandler`1<System.ComponentModel.PropertyChangedEventArgs> Parse.ParseObject::propertyChanged
	SynchronizedEventHandler_1_t826798267 * ___propertyChanged_9;
};
struct ParseObject_t725725555_StaticFields{
	// System.String Parse.ParseObject::AutoClassName
	String_t* ___AutoClassName_0;
	// System.Threading.ThreadLocal`1<System.Boolean> Parse.ParseObject::isCreatingPointer
	ThreadLocal_1_t3489851439 * ___isCreatingPointer_4;
};
