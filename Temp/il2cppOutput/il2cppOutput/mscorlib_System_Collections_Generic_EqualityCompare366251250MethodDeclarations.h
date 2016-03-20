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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct DefaultComparer_t366251250;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C"  void DefaultComparer__ctor_m2125807216_gshared (DefaultComparer_t366251250 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m2125807216(__this, method) ((  void (*) (DefaultComparer_t366251250 *, const MethodInfo*))DefaultComparer__ctor_m2125807216_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2993229883_gshared (DefaultComparer_t366251250 * __this, KeyValuePair_2_t1028297519  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2993229883(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t366251250 *, KeyValuePair_2_t1028297519 , const MethodInfo*))DefaultComparer_GetHashCode_m2993229883_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3197829057_gshared (DefaultComparer_t366251250 * __this, KeyValuePair_2_t1028297519  ___x, KeyValuePair_2_t1028297519  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3197829057(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t366251250 *, KeyValuePair_2_t1028297519 , KeyValuePair_2_t1028297519 , const MethodInfo*))DefaultComparer_Equals_m3197829057_gshared)(__this, ___x, ___y, method)
