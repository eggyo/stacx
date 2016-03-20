#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object
struct Object_t;
// Parse.Internal.IPlatformHooks
struct IPlatformHooks_t1876302588;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_Parse_ParseClient_Configuration2731713750.h"

// Parse.ParseClient
struct  ParseClient_t391381503  : public Object_t
{
};
struct ParseClient_t391381503_StaticFields{
	// System.String[] Parse.ParseClient::DateFormatStrings
	StringU5BU5D_t2956870243* ___DateFormatStrings_0;
	// System.Object Parse.ParseClient::mutex
	Object_t * ___mutex_1;
	// System.String[] Parse.ParseClient::assemblyNames
	StringU5BU5D_t2956870243* ___assemblyNames_2;
	// Parse.Internal.IPlatformHooks Parse.ParseClient::platformHooks
	Object_t * ___platformHooks_3;
	// Parse.Internal.IParseCommandRunner Parse.ParseClient::commandRunner
	Object_t * ___commandRunner_4;
	// Parse.ParseClient/Configuration Parse.ParseClient::<CurrentConfiguration>k__BackingField
	Configuration_t2731713750  ___U3CCurrentConfigurationU3Ek__BackingField_5;
	// System.String Parse.ParseClient::<MasterKey>k__BackingField
	String_t* ___U3CMasterKeyU3Ek__BackingField_6;
	// System.String Parse.ParseClient::versionString
	String_t* ___versionString_7;
};
