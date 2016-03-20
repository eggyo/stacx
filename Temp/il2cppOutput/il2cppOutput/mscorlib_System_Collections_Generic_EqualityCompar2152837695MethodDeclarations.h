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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct DefaultComparer_t2152837695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22814883964.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C"  void DefaultComparer__ctor_m4111104877_gshared (DefaultComparer_t2152837695 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m4111104877(__this, method) ((  void (*) (DefaultComparer_t2152837695 *, const MethodInfo*))DefaultComparer__ctor_m4111104877_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m3779279590_gshared (DefaultComparer_t2152837695 * __this, KeyValuePair_2_t2814883964  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m3779279590(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t2152837695 *, KeyValuePair_2_t2814883964 , const MethodInfo*))DefaultComparer_GetHashCode_m3779279590_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1574353666_gshared (DefaultComparer_t2152837695 * __this, KeyValuePair_2_t2814883964  ___x, KeyValuePair_2_t2814883964  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1574353666(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t2152837695 *, KeyValuePair_2_t2814883964 , KeyValuePair_2_t2814883964 , const MethodInfo*))DefaultComparer_Equals_m1574353666_gshared)(__this, ___x, ___y, method)
