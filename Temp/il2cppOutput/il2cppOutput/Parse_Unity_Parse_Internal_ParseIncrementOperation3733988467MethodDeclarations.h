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

// Parse.Internal.ParseIncrementOperation
struct ParseIncrementOperation_t3733988467;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t4056296927;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.Internal.ParseIncrementOperation::.cctor()
extern "C"  void ParseIncrementOperation__cctor_m3136730907 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseIncrementOperation::.ctor(System.Object)
extern "C"  void ParseIncrementOperation__ctor_m2207643650 (ParseIncrementOperation_t3733988467 * __this, Object_t * ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseIncrementOperation::Encode()
extern "C"  Object_t * ParseIncrementOperation_Encode_m536256061 (ParseIncrementOperation_t3733988467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseIncrementOperation::Add(System.Object,System.Object)
extern "C"  Object_t * ParseIncrementOperation_Add_m647596390 (Object_t * __this /* static, unused */, Object_t * ___obj1, Object_t * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseIncrementOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C"  Object_t * ParseIncrementOperation_MergeWithPrevious_m3072982758 (ParseIncrementOperation_t3733988467 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseIncrementOperation::Apply(System.Object,System.String)
extern "C"  Object_t * ParseIncrementOperation_Apply_m2055797159 (ParseIncrementOperation_t3733988467 * __this, Object_t * ___oldValue, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseIncrementOperation::get_Amount()
extern "C"  Object_t * ParseIncrementOperation_get_Amount_m2582509512 (ParseIncrementOperation_t3733988467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
