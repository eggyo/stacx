#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct DefaultComparer_t2772012780;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C"  void DefaultComparer__ctor_m2981195232_gshared (DefaultComparer_t2772012780 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m2981195232(__this, method) ((  void (*) (DefaultComparer_t2772012780 *, const MethodInfo*))DefaultComparer__ctor_m2981195232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m1895627283_gshared (DefaultComparer_t2772012780 * __this, KeyValuePair_2_t3434059049  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1895627283(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t2772012780 *, KeyValuePair_2_t3434059049 , const MethodInfo*))DefaultComparer_GetHashCode_m1895627283_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3226457205_gshared (DefaultComparer_t2772012780 * __this, KeyValuePair_2_t3434059049  ___x, KeyValuePair_2_t3434059049  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3226457205(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t2772012780 *, KeyValuePair_2_t3434059049 , KeyValuePair_2_t3434059049 , const MethodInfo*))DefaultComparer_Equals_m3226457205_gshared)(__this, ___x, ___y, method)
