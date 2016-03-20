#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.Dictionary`2<System.TimeSpan,System.String>
struct Dictionary_2_t813217848;

#include "Parse_Unity_Parse_ParseObject725725555.h"

// Parse.ParseInstallation
struct  ParseInstallation_t3166046766  : public ParseObject_t725725555
{
};
struct ParseInstallation_t3166046766_StaticFields{
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseInstallation::readOnlyKeys
	HashSet_1_t3667177573 * ___readOnlyKeys_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseInstallation::TimeZoneNameMap
	Dictionary_2_t2606186806 * ___TimeZoneNameMap_11;
	// System.Collections.Generic.Dictionary`2<System.TimeSpan,System.String> Parse.ParseInstallation::TimeZoneOffsetMap
	Dictionary_2_t813217848 * ___TimeZoneOffsetMap_12;
};
