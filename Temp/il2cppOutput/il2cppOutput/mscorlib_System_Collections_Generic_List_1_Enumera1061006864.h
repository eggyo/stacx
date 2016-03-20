#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>>
struct List_1_t2975223872;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;

#include "mscorlib_System_ValueType4014882752.h"

// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>>
struct  Enumerator_t1061006864 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2975223872 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Task_1_t2178264903 * ___current_3;
};
