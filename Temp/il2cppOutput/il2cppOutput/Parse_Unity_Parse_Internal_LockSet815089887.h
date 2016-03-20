#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IComparable>
struct ConditionalWeakTable_2_t385193843;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.LockSet
struct  LockSet_t815089887  : public Object_t
{
	// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.LockSet::mutexes
	Object_t* ___mutexes_2;
};
struct LockSet_t815089887_StaticFields{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IComparable> Parse.Internal.LockSet::stableIds
	ConditionalWeakTable_2_t385193843 * ___stableIds_0;
	// System.Int64 Parse.Internal.LockSet::nextStableId
	int64_t ___nextStableId_1;
};
