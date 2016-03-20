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
// Parse.Internal.ParseEncoder
struct ParseEncoder_t3993713873;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3003598734;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean Parse.Internal.ParseEncoder::IsValidType(System.Object)
extern "C"  bool ParseEncoder_IsValidType_m2087931870 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseEncoder::Encode(System.Object)
extern "C"  Object_t * ParseEncoder_Encode_m4012516975 (ParseEncoder_t3993713873 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseEncoder::EncodeList(System.Collections.Generic.IList`1<System.Object>)
extern "C"  Object_t * ParseEncoder_EncodeList_m1686449916 (ParseEncoder_t3993713873 * __this, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseEncoder::.ctor()
extern "C"  void ParseEncoder__ctor_m2787529536 (ParseEncoder_t3993713873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
