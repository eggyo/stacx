#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4131634250;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// Parse.ParseQuery`1<Parse.ParseSession>
struct  ParseQuery_1_t2487406200  : public Object_t
{
	// System.String Parse.ParseQuery`1::className
	String_t* ___className_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Parse.ParseQuery`1::where
	Dictionary_2_t2474804324 * ___where_1;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1::orderBy
	ReadOnlyCollection_1_t4131634250 * ___orderBy_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1::includes
	ReadOnlyCollection_1_t4131634250 * ___includes_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Parse.ParseQuery`1::selectedKeys
	ReadOnlyCollection_1_t4131634250 * ___selectedKeys_4;
	// System.String Parse.ParseQuery`1::redirectClassNameForKey
	String_t* ___redirectClassNameForKey_5;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1::skip
	Nullable_1_t1438485399  ___skip_6;
	// System.Nullable`1<System.Int32> Parse.ParseQuery`1::limit
	Nullable_1_t1438485399  ___limit_7;
};
