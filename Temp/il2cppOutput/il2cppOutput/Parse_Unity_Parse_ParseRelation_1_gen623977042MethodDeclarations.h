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

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t623977042;
// Parse.ParseObject
struct ParseObject_t725725555;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t3272614696;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseObject725725555.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C"  void ParseRelation_1__ctor_m2105689575_gshared (ParseRelation_1_t623977042 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m2105689575(__this, ___parent, ___key, method) ((  void (*) (ParseRelation_1_t623977042 *, ParseObject_t725725555 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m2105689575_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C"  void ParseRelation_1__ctor_m4212887011_gshared (ParseRelation_1_t623977042 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m4212887011(__this, ___parent, ___key, ___targetClassName, method) ((  void (*) (ParseRelation_1_t623977042 *, ParseObject_t725725555 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m4212887011_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C"  void ParseRelation_1_Add_m1123097135_gshared (ParseRelation_1_t623977042 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m1123097135(__this, ___obj, method) ((  void (*) (ParseRelation_1_t623977042 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m1123097135_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C"  void ParseRelation_1_Remove_m2935864998_gshared (ParseRelation_1_t623977042 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m2935864998(__this, ___obj, method) ((  void (*) (ParseRelation_1_t623977042 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m2935864998_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C"  ParseQuery_1_t3272614696 * ParseRelation_1_get_Query_m1294148127_gshared (ParseRelation_1_t623977042 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m1294148127(__this, method) ((  ParseQuery_1_t3272614696 * (*) (ParseRelation_1_t623977042 *, const MethodInfo*))ParseRelation_1_get_Query_m1294148127_gshared)(__this, method)
