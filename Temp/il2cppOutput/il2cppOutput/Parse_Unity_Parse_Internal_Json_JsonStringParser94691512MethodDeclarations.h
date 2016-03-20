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

// Parse.Internal.Json/JsonStringParser
struct JsonStringParser_t94691512;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "System_System_Text_RegularExpressions_Match3797657504.h"

// System.String Parse.Internal.Json/JsonStringParser::get_Input()
extern "C"  String_t* JsonStringParser_get_Input_m359211482 (JsonStringParser_t94691512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_Input(System.String)
extern "C"  void JsonStringParser_set_Input_m67581945 (JsonStringParser_t94691512 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Parse.Internal.Json/JsonStringParser::get_InputAsArray()
extern "C"  CharU5BU5D_t3416858730* JsonStringParser_get_InputAsArray_m3521349160 (JsonStringParser_t94691512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_InputAsArray(System.Char[])
extern "C"  void JsonStringParser_set_InputAsArray_m2575986683 (JsonStringParser_t94691512 * __this, CharU5BU5D_t3416858730* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.Json/JsonStringParser::get_CurrentIndex()
extern "C"  int32_t JsonStringParser_get_CurrentIndex_m3832685806 (JsonStringParser_t94691512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::Skip(System.Int32)
extern "C"  void JsonStringParser_Skip_m983102838 (JsonStringParser_t94691512 * __this, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::.ctor(System.String)
extern "C"  void JsonStringParser__ctor_m1700084772 (JsonStringParser_t94691512 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseObject(System.Object&)
extern "C"  bool JsonStringParser_ParseObject_m3048402938 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseMember(System.Object&)
extern "C"  bool JsonStringParser_ParseMember_m69779797 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseArray(System.Object&)
extern "C"  bool JsonStringParser_ParseArray_m1732171088 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseValue(System.Object&)
extern "C"  bool JsonStringParser_ParseValue_m1244513384 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseString(System.Object&)
extern "C"  bool JsonStringParser_ParseString_m2145896652 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseNumber(System.Object&)
extern "C"  bool JsonStringParser_ParseNumber_m1413338116 (JsonStringParser_t94691512 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.Match&)
extern "C"  bool JsonStringParser_Accept_m3045769470 (JsonStringParser_t94691512 * __this, Regex_t3802381858 * ___matcher, Match_t3797657504 ** ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char)
extern "C"  bool JsonStringParser_Accept_m351957603 (JsonStringParser_t94691512 * __this, uint16_t ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char[])
extern "C"  bool JsonStringParser_Accept_m3223858369 (JsonStringParser_t94691512 * __this, CharU5BU5D_t3416858730* ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
