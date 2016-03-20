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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct DefaultComparer_t366251192;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297461.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C"  void DefaultComparer__ctor_m3228944106_gshared (DefaultComparer_t366251192 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3228944106(__this, method) ((  void (*) (DefaultComparer_t366251192 *, const MethodInfo*))DefaultComparer__ctor_m3228944106_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m432990849_gshared (DefaultComparer_t366251192 * __this, KeyValuePair_2_t1028297461  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m432990849(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t366251192 *, KeyValuePair_2_t1028297461 , const MethodInfo*))DefaultComparer_GetHashCode_m432990849_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2744040251_gshared (DefaultComparer_t366251192 * __this, KeyValuePair_2_t1028297461  ___x, KeyValuePair_2_t1028297461  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m2744040251(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t366251192 *, KeyValuePair_2_t1028297461 , KeyValuePair_2_t1028297461 , const MethodInfo*))DefaultComparer_Equals_m2744040251_gshared)(__this, ___x, ___y, method)
