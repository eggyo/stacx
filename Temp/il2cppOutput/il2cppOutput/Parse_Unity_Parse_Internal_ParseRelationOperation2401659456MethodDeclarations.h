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

// Parse.Internal.ParseRelationOperation
struct ParseRelationOperation_t2401659456;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t3597879911;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t4056296927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
extern "C"  void ParseRelationOperation__ctor_m1186342427 (ParseRelationOperation_t2401659456 * __this, Object_t* ___adds, Object_t* ___removes, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
extern "C"  void ParseRelationOperation__ctor_m3287729901 (ParseRelationOperation_t2401659456 * __this, Object_t* ___adds, Object_t* ___removes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Encode()
extern "C"  Object_t * ParseRelationOperation_Encode_m1180540852 (ParseRelationOperation_t2401659456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRelationOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C"  Object_t * ParseRelationOperation_MergeWithPrevious_m4293947739 (ParseRelationOperation_t2401659456 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Apply(System.Object,System.String)
extern "C"  Object_t * ParseRelationOperation_Apply_m3555689566 (ParseRelationOperation_t2401659456 * __this, Object_t * ___oldValue, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::get_TargetClassName()
extern "C"  String_t* ParseRelationOperation_get_TargetClassName_m1292388059 (ParseRelationOperation_t2401659456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.ParseRelationOperation::IdsFromObjects(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
extern "C"  Object_t* ParseRelationOperation_IdsFromObjects_m3456093561 (ParseRelationOperation_t2401659456 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__5_0(System.String)
extern "C"  Object_t * ParseRelationOperation_U3CEncodeU3Eb__5_0_m3257813012 (ParseRelationOperation_t2401659456 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__5_1(System.String)
extern "C"  Object_t * ParseRelationOperation_U3CEncodeU3Eb__5_1_m2747278835 (ParseRelationOperation_t2401659456 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
