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

// Parse.Internal.ParseObjectCoder
struct ParseObjectCoder_t458728795;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// Parse.Internal.ParseDecoder
struct ParseDecoder_t2848547833;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_Internal_ParseDecoder2848547833.h"

// Parse.Internal.ParseObjectCoder Parse.Internal.ParseObjectCoder::get_Instance()
extern "C"  ParseObjectCoder_t458728795 * ParseObjectCoder_get_Instance_m1833215202 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseObjectCoder::.ctor()
extern "C"  void ParseObjectCoder__ctor_m2029888246 (ParseObjectCoder_t458728795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.Internal.ParseObjectCoder::Decode(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.Internal.ParseDecoder)
extern "C"  Object_t * ParseObjectCoder_Decode_m1494019065 (ParseObjectCoder_t458728795 * __this, Object_t* ___data, ParseDecoder_t2848547833 * ___decoder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseObjectCoder::.cctor()
extern "C"  void ParseObjectCoder__cctor_m2314897271 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
