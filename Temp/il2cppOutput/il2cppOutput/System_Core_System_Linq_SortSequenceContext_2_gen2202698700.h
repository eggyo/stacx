#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3536813829;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "System_Core_System_Linq_SortContext_1_gen70478024.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct  SortSequenceContext_2_t2202698700  : public SortContext_1_t70478024
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2::selector
	Func_2_t2135783352 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2::comparer
	Object_t* ___comparer_3;
	// TKey[] System.Linq.SortSequenceContext`2::keys
	ObjectU5BU5D_t11523773* ___keys_4;
};
