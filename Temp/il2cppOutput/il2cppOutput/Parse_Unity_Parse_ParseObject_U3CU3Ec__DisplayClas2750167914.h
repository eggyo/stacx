#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t725725555;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// Parse.ParseObject/<>c__DisplayClass46_0
struct  U3CU3Ec__DisplayClass46_0_t2750167915  : public Object_t
{
	// System.Threading.Tasks.Task Parse.ParseObject/<>c__DisplayClass46_0::toAwait
	Task_t2616336456 * ___toAwait_0;
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject/<>c__DisplayClass46_0::currentOperations
	Object_t* ___currentOperations_1;
	// System.String Parse.ParseObject/<>c__DisplayClass46_0::sessionToken
	String_t* ___sessionToken_2;
	// System.Threading.CancellationToken Parse.ParseObject/<>c__DisplayClass46_0::cancellationToken
	CancellationToken_t2348806009  ___cancellationToken_3;
	// Parse.ParseObject Parse.ParseObject/<>c__DisplayClass46_0::<>4__this
	ParseObject_t725725555 * ___U3CU3E4__this_4;
};
