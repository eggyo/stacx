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

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "Parse_Unity_Parse_ParseGeoDistance1336427412.h"

// System.Void Parse.ParseGeoPoint::.ctor(System.Double,System.Double)
extern "C"  void ParseGeoPoint__ctor_m3506220022 (ParseGeoPoint_t1702854195 * __this, double ___latitude, double ___longitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Latitude()
extern "C"  double ParseGeoPoint_get_Latitude_m1312550830 (ParseGeoPoint_t1702854195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Latitude(System.Double)
extern "C"  void ParseGeoPoint_set_Latitude_m3423494141 (ParseGeoPoint_t1702854195 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Longitude()
extern "C"  double ParseGeoPoint_get_Longitude_m1161813455 (ParseGeoPoint_t1702854195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Longitude(System.Double)
extern "C"  void ParseGeoPoint_set_Longitude_m3935932746 (ParseGeoPoint_t1702854195 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoPoint::DistanceTo(Parse.ParseGeoPoint)
extern "C"  ParseGeoDistance_t1336427412  ParseGeoPoint_DistanceTo_m1660966710 (ParseGeoPoint_t1702854195 * __this, ParseGeoPoint_t1702854195  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseGeoPoint::Parse.Internal.IJsonConvertible.ToJSON()
extern "C"  Object_t* ParseGeoPoint_Parse_Internal_IJsonConvertible_ToJSON_m2240654822 (ParseGeoPoint_t1702854195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
