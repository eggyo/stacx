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
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.ObjectSubclassInfo>
struct IDictionary_2_t1067870392;
// System.Collections.Generic.IDictionary`2<System.String,System.Action>
struct IDictionary_2_t3250887638;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.ObjectSubclassingController
struct  ObjectSubclassingController_t2583770255  : public Object_t
{
	// System.Threading.ReaderWriterLockSlim Parse.Internal.ObjectSubclassingController::mutex
	ReaderWriterLockSlim_t2580547393 * ___mutex_1;
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.ObjectSubclassInfo> Parse.Internal.ObjectSubclassingController::registeredSubclasses
	Object_t* ___registeredSubclasses_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.Action> Parse.Internal.ObjectSubclassingController::registerActions
	Object_t* ___registerActions_3;
};
struct ObjectSubclassingController_t2583770255_StaticFields{
	// System.String Parse.Internal.ObjectSubclassingController::parseObjectClassName
	String_t* ___parseObjectClassName_0;
};
