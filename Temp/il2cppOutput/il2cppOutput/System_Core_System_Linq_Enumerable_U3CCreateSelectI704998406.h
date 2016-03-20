#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t3908383152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t2519335244;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Func_2_t1872856885;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775449.h"

// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct  U3CCreateSelectIteratorU3Ec__Iterator10_2_t704998406  : public Object_t
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::source
	Object_t* ___source_0;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$s_70>__0
	Object_t* ___U3CU24s_70U3E__0_1;
	// TSource System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<element>__1
	KeyValuePair_2_t1036228796  ___U3CelementU3E__1_2;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::selector
	Func_2_t1872856885 * ___selector_3;
	// System.Int32 System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$PC
	int32_t ___U24PC_4;
	// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::$current
	KeyValuePair_2_t3461775449  ___U24current_5;
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>source
	Object_t* ___U3CU24U3Esource_6;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2::<$>selector
	Func_2_t1872856885 * ___U3CU24U3Eselector_7;
};
