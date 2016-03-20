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

// Parse.Internal.ParseDecoder
struct ParseDecoder_t2848547833;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"

// Parse.Internal.ParseDecoder Parse.Internal.ParseDecoder::get_Instance()
extern "C"  ParseDecoder_t2848547833 * ParseDecoder_get_Instance_m3066311838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDecoder::.ctor()
extern "C"  void ParseDecoder__ctor_m2614999320 (ParseDecoder_t2848547833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDecoder::Decode(System.Object)
extern "C"  Object_t * ParseDecoder_Decode_m1231352687 (ParseDecoder_t2848547833 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDecoder::DecodePointer(System.String,System.String)
extern "C"  Object_t * ParseDecoder_DecodePointer_m425077092 (ParseDecoder_t2848547833 * __this, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Parse.Internal.ParseDecoder::ParseDate(System.String)
extern "C"  DateTime_t339033936  ParseDecoder_ParseDate_m1348662962 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDecoder::.cctor()
extern "C"  void ParseDecoder__cctor_m3273471381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDecoder::<Decode>b__4_0(System.Object)
extern "C"  Object_t * ParseDecoder_U3CDecodeU3Eb__4_0_m4222959430 (ParseDecoder_t2848547833 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
