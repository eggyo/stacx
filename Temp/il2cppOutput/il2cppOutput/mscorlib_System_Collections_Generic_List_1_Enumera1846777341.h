#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct List_1_t3760994349;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct TaskCompletionSource_1_t2964035380;

#include "mscorlib_System_ValueType4014882752.h"

// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct  Enumerator_t1846777341 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3760994349 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TaskCompletionSource_1_t2964035380 * ___current_3;
};
