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

// Parse.Internal.ParseAddUniqueOperation
struct ParseAddUniqueOperation_t2619095920;
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

// System.Void Parse.Internal.ParseAddUniqueOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C"  void ParseAddUniqueOperation__ctor_m3963018612 (ParseAddUniqueOperation_t2619095920 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Encode()
extern "C"  Object_t * ParseAddUniqueOperation_Encode_m736353530 (ParseAddUniqueOperation_t2619095920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddUniqueOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C"  Object_t * ParseAddUniqueOperation_MergeWithPrevious_m1019804387 (ParseAddUniqueOperation_t2619095920 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Apply(System.Object,System.String)
extern "C"  Object_t * ParseAddUniqueOperation_Apply_m991827492 (ParseAddUniqueOperation_t2619095920 * __this, Object_t * ___oldValue, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddUniqueOperation::get_Objects()
extern "C"  Object_t* ParseAddUniqueOperation_get_Objects_m1169086612 (ParseAddUniqueOperation_t2619095920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
