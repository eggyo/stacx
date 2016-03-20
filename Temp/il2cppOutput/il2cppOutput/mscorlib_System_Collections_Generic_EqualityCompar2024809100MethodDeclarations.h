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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct DefaultComparer_t2024809100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor()
extern "C"  void DefaultComparer__ctor_m656554454_gshared (DefaultComparer_t2024809100 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m656554454(__this, method) ((  void (*) (DefaultComparer_t2024809100 *, const MethodInfo*))DefaultComparer__ctor_m656554454_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2367586069_gshared (DefaultComparer_t2024809100 * __this, KeyValuePair_2_t2686855369  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2367586069(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t2024809100 *, KeyValuePair_2_t2686855369 , const MethodInfo*))DefaultComparer_GetHashCode_m2367586069_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m795574439_gshared (DefaultComparer_t2024809100 * __this, KeyValuePair_2_t2686855369  ___x, KeyValuePair_2_t2686855369  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m795574439(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t2024809100 *, KeyValuePair_2_t2686855369 , KeyValuePair_2_t2686855369 , const MethodInfo*))DefaultComparer_Equals_m795574439_gshared)(__this, ___x, ___y, method)
