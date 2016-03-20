#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.IGrouping`2<System.Object,System.Object>
struct IGrouping_2_t1919391840;
// System.Collections.Generic.Dictionary`2<System.Object,System.Linq.IGrouping`2<System.Object,System.Object>>
struct Dictionary_2_t611743274;

#include "mscorlib_System_Object837106420.h"

// System.Linq.Lookup`2<System.Object,System.Object>
struct  Lookup_2_t563868970  : public Object_t
{
	// System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2::nullGrouping
	Object_t* ___nullGrouping_0;
	// System.Collections.Generic.Dictionary`2<TKey,System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::groups
	Dictionary_2_t611743274 * ___groups_1;
};
