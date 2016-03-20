#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.RegionInfo
struct RegionInfo_t2771275320;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

// System.Globalization.RegionInfo
struct  RegionInfo_t2771275320  : public Object_t
{
	// System.Int32 System.Globalization.RegionInfo::lcid
	int32_t ___lcid_1;
	// System.Int32 System.Globalization.RegionInfo::regionId
	int32_t ___regionId_2;
	// System.String System.Globalization.RegionInfo::iso2Name
	String_t* ___iso2Name_3;
};
struct RegionInfo_t2771275320_StaticFields{
	// System.Globalization.RegionInfo System.Globalization.RegionInfo::currentRegion
	RegionInfo_t2771275320 * ___currentRegion_0;
};
