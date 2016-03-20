#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Int64,System.Boolean>
struct IDictionary_2_t820676860;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t65441474;
// System.Func`1<System.Boolean>
struct Func_1_t1353786588;

#include "mscorlib_System_Object837106420.h"

// System.Threading.ThreadLocal`1<System.Boolean>
struct  ThreadLocal_1_t3489851439  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1::valueFactory
	Func_1_t1353786588 * ___valueFactory_5;
};
struct ThreadLocal_1_t3489851439_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
};
struct ThreadLocal_1_t3489851439_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1::threadLocalData
	Object_t* ___threadLocalData_1;
};
