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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t297530284;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959576553.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1317695072_gshared (DefaultComparer_t297530284 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1317695072(__this, method) ((  void (*) (DefaultComparer_t297530284 *, const MethodInfo*))DefaultComparer__ctor_m1317695072_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2785440403_gshared (DefaultComparer_t297530284 * __this, KeyValuePair_2_t959576553  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2785440403(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t297530284 *, KeyValuePair_2_t959576553 , const MethodInfo*))DefaultComparer_GetHashCode_m2785440403_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2579975541_gshared (DefaultComparer_t297530284 * __this, KeyValuePair_2_t959576553  ___x, KeyValuePair_2_t959576553  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m2579975541(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t297530284 *, KeyValuePair_2_t959576553 , KeyValuePair_2_t959576553 , const MethodInfo*))DefaultComparer_Equals_m2579975541_gshared)(__this, ___x, ___y, method)
