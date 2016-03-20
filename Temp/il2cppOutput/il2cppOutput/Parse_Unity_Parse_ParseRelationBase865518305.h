#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Parse.ParseObject
struct ParseObject_t725725555;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

// Parse.ParseRelationBase
struct  ParseRelationBase_t865518305  : public Object_t
{
	// Parse.ParseObject Parse.ParseRelationBase::parent
	ParseObject_t725725555 * ___parent_0;
	// System.String Parse.ParseRelationBase::key
	String_t* ___key_1;
	// System.String Parse.ParseRelationBase::targetClassName
	String_t* ___targetClassName_2;
};
