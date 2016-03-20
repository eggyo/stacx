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
// System.TimeZoneInfo
struct TimeZoneInfo_t4131446812;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1713960724;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.TimeZoneInfo
struct  TimeZoneInfo_t4131446812  : public Object_t
{
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t763862892  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t1713960724* ___adjustmentRules_8;
};
struct TimeZoneInfo_t4131446812_StaticFields{
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t4131446812 * ___local_4;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_7;
};
