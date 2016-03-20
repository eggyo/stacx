#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Globalization.RegionInfo
struct RegionInfo_t2771275320;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Globalization.RegionInfo::.ctor(System.Int32)
extern "C"  void RegionInfo__ctor_m3360224407 (RegionInfo_t2771275320 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.RegionInfo System.Globalization.RegionInfo::get_CurrentRegion()
extern "C"  RegionInfo_t2771275320 * RegionInfo_get_CurrentRegion_m1786706413 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.RegionInfo::GetByTerritory(System.Globalization.CultureInfo)
extern "C"  bool RegionInfo_GetByTerritory_m3594743545 (RegionInfo_t2771275320 * __this, CultureInfo_t3603717042 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.RegionInfo::construct_internal_region_from_name(System.String)
extern "C"  bool RegionInfo_construct_internal_region_from_name_m1027232717 (RegionInfo_t2771275320 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.RegionInfo::get_Name()
extern "C"  String_t* RegionInfo_get_Name_m2033415887 (RegionInfo_t2771275320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.RegionInfo::get_TwoLetterISORegionName()
extern "C"  String_t* RegionInfo_get_TwoLetterISORegionName_m2165942614 (RegionInfo_t2771275320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.RegionInfo::Equals(System.Object)
extern "C"  bool RegionInfo_Equals_m2276034873 (RegionInfo_t2771275320 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.RegionInfo::GetHashCode()
extern "C"  int32_t RegionInfo_GetHashCode_m670129041 (RegionInfo_t2771275320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.RegionInfo::ToString()
extern "C"  String_t* RegionInfo_ToString_m1395140967 (RegionInfo_t2771275320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
