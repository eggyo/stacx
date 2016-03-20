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
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"

// Parse.Internal.MutableObjectState
struct  MutableObjectState_t785399668  : public Object_t
{
	// System.Boolean Parse.Internal.MutableObjectState::<IsNew>k__BackingField
	bool ___U3CIsNewU3Ek__BackingField_0;
	// System.String Parse.Internal.MutableObjectState::<ClassName>k__BackingField
	String_t* ___U3CClassNameU3Ek__BackingField_1;
	// System.String Parse.Internal.MutableObjectState::<ObjectId>k__BackingField
	String_t* ___U3CObjectIdU3Ek__BackingField_2;
	// System.Nullable`1<System.DateTime> Parse.Internal.MutableObjectState::<UpdatedAt>k__BackingField
	Nullable_1_t3225071844  ___U3CUpdatedAtU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> Parse.Internal.MutableObjectState::<CreatedAt>k__BackingField
	Nullable_1_t3225071844  ___U3CCreatedAtU3Ek__BackingField_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.MutableObjectState::serverData
	Object_t* ___serverData_5;
};
