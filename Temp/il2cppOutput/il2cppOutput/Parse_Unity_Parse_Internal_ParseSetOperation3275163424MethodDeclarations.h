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

// Parse.Internal.ParseSetOperation
struct ParseSetOperation_t3275163424;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t4056296927;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.Internal.ParseSetOperation::.ctor(System.Object)
extern "C"  void ParseSetOperation__ctor_m1733205871 (ParseSetOperation_t3275163424 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Encode()
extern "C"  Object_t * ParseSetOperation_Encode_m2002513130 (ParseSetOperation_t3275163424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseSetOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C"  Object_t * ParseSetOperation_MergeWithPrevious_m2344908691 (ParseSetOperation_t3275163424 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Apply(System.Object,System.String)
extern "C"  Object_t * ParseSetOperation_Apply_m479271444 (ParseSetOperation_t3275163424 * __this, Object_t * ___oldValue, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::get_Value()
extern "C"  Object_t * ParseSetOperation_get_Value_m2503078422 (ParseSetOperation_t3275163424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseSetOperation::set_Value(System.Object)
extern "C"  void ParseSetOperation_set_Value_m3754752573 (ParseSetOperation_t3275163424 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
