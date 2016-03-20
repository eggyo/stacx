#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t3561748130;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t2764789161;

#include "mscorlib_System_ValueType4014882752.h"

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
struct  Enumerator_t1647531122 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3561748130 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_1_t2764789161 * ___current_3;
};
