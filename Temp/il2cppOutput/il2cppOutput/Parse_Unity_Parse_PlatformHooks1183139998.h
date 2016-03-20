#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// Parse.Internal.IHttpClient
struct IHttpClient_t3242720612;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t2145611487;

#include "mscorlib_System_Object837106420.h"

// Parse.PlatformHooks
struct  PlatformHooks_t1183139998  : public Object_t
{
	// Parse.Internal.IHttpClient Parse.PlatformHooks::httpClient
	Object_t * ___httpClient_2;
	// System.String Parse.PlatformHooks::appName
	String_t* ___appName_3;
	// System.String Parse.PlatformHooks::appBuildVersion
	String_t* ___appBuildVersion_4;
	// System.String Parse.PlatformHooks::appDisplayVersion
	String_t* ___appDisplayVersion_5;
	// System.String Parse.PlatformHooks::osVersion
	String_t* ___osVersion_6;
};
struct PlatformHooks_t1183139998_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::settings
	Object_t* ___settings_0;
	// System.String Parse.PlatformHooks::settingsPath
	String_t* ___settingsPath_1;
	// System.Boolean Parse.PlatformHooks::isCompiledByIL2CPP
	bool ___isCompiledByIL2CPP_7;
	// System.Boolean Parse.PlatformHooks::isWebPlayer
	bool ___isWebPlayer_8;
	// System.Threading.ReaderWriterLockSlim Parse.PlatformHooks::dispatchQueueLock
	ReaderWriterLockSlim_t2580547393 * ___dispatchQueueLock_9;
	// System.Collections.Generic.Queue`1<System.Action> Parse.PlatformHooks::dispatchQueue
	Queue_1_t2145611487 * ___dispatchQueue_10;
};
