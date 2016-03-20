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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_TimeZoneInfo_TimeType2282261447.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C"  void TimeType__ctor_m2279875597 (TimeType_t2282261447 * __this, int32_t ___offset, bool ___is_dst, String_t* ___abbrev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C"  String_t* TimeType_ToString_m560147672 (TimeType_t2282261447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TimeType_t2282261447;
struct TimeType_t2282261447_marshaled;

extern "C" void TimeType_t2282261447_marshal(const TimeType_t2282261447& unmarshaled, TimeType_t2282261447_marshaled& marshaled);
extern "C" void TimeType_t2282261447_marshal_back(const TimeType_t2282261447_marshaled& marshaled, TimeType_t2282261447& unmarshaled);
extern "C" void TimeType_t2282261447_marshal_cleanup(TimeType_t2282261447_marshaled& marshaled);
