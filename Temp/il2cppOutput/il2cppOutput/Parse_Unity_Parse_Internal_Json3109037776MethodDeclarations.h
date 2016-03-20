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

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3003598734;
// Parse.Internal.Json
struct Json_t3109037776;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Object Parse.Internal.Json::Parse(System.String)
extern "C"  Object_t * Json_Parse_m3414072059 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Json_Encode_m1974436486 (Object_t * __this /* static, unused */, Object_t* ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IList`1<System.Object>)
extern "C"  String_t* Json_Encode_m4219365641 (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Object)
extern "C"  String_t* Json_Encode_m1279356030 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.ctor()
extern "C"  void Json__ctor_m4175183393 (Json_t3109037776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.cctor()
extern "C"  void Json__cctor_m99570092 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
