﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t2990875425;
// System.WeakReference
struct WeakReference_t2193916456;

#include "mscorlib_System_ValueType4014882752.h"

// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
struct  Enumerator_t1076658417 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2990875425 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WeakReference_t2193916456 * ___current_3;
};