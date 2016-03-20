#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<Parse.ParseObject>
struct HashSet_1_t3424414226;
// Parse.ParseObject
struct ParseObject_t725725555;

#include "mscorlib_System_ValueType4014882752.h"

// System.Collections.Generic.HashSet`1/Enumerator<Parse.ParseObject>
struct  Enumerator_t3903434813 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t3424414226 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	ParseObject_t725725555 * ___current_3;
};
