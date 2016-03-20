﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.Json
struct  Json_t3109037776  : public Object_t
{
};
struct Json_t3109037776_StaticFields{
	// System.String Parse.Internal.Json::startOfString
	String_t* ___startOfString_0;
	// System.Char Parse.Internal.Json::startObject
	uint16_t ___startObject_1;
	// System.Char Parse.Internal.Json::endObject
	uint16_t ___endObject_2;
	// System.Char Parse.Internal.Json::startArray
	uint16_t ___startArray_3;
	// System.Char Parse.Internal.Json::endArray
	uint16_t ___endArray_4;
	// System.Char Parse.Internal.Json::valueSeparator
	uint16_t ___valueSeparator_5;
	// System.Char Parse.Internal.Json::nameSeparator
	uint16_t ___nameSeparator_6;
	// System.Char[] Parse.Internal.Json::falseValue
	CharU5BU5D_t3416858730* ___falseValue_7;
	// System.Char[] Parse.Internal.Json::trueValue
	CharU5BU5D_t3416858730* ___trueValue_8;
	// System.Char[] Parse.Internal.Json::nullValue
	CharU5BU5D_t3416858730* ___nullValue_9;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::numberValue
	Regex_t3802381858 * ___numberValue_10;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::stringValue
	Regex_t3802381858 * ___stringValue_11;
	// System.Text.RegularExpressions.Regex Parse.Internal.Json::escapePattern
	Regex_t3802381858 * ___escapePattern_12;
};