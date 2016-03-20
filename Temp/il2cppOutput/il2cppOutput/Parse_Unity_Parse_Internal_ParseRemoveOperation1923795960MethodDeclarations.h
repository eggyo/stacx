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

// Parse.Internal.ParseRemoveOperation
struct ParseRemoveOperation_t1923795960;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t4056296927;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Parse.Internal.ParseRemoveOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C"  void ParseRemoveOperation__ctor_m968196976 (ParseRemoveOperation_t1923795960 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Encode()
extern "C"  Object_t * ParseRemoveOperation_Encode_m1645643948 (ParseRemoveOperation_t1923795960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRemoveOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C"  Object_t * ParseRemoveOperation_MergeWithPrevious_m1434222611 (ParseRemoveOperation_t1923795960 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Apply(System.Object,System.String)
extern "C"  Object_t * ParseRemoveOperation_Apply_m928950102 (ParseRemoveOperation_t1923795960 * __this, Object_t * ___oldValue, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseRemoveOperation::get_Objects()
extern "C"  Object_t* ParseRemoveOperation_get_Objects_m1080518316 (ParseRemoveOperation_t1923795960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
