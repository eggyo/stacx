﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerable_1_t3831743787;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerator_1_t2442695879;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t4056726325;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959589431.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"

// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  U3CCreateSelectIteratorU3Ec__Iterator10_2_t2888867846  : public Object_t
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::source
	Object_t* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$s_70>__0
	Object_t* ___U3CU24s_70U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<element>__1
	KeyValuePair_2_t959589431  ___U3CelementU3E__1_2;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::selector
	Func_2_t4056726325 * ___selector_3;
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$PC
	int32_t ___U24PC_4;
	// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$current
	KeyValuePair_2_t3312956448  ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>source
	Object_t* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>selector
	Func_2_t4056726325 * ___U3CU24U3Eselector_7;
};