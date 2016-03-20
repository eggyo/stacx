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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct DefaultComparer_t2799729180;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775449.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C"  void DefaultComparer__ctor_m3496518832_gshared (DefaultComparer_t2799729180 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3496518832(__this, method) ((  void (*) (DefaultComparer_t2799729180 *, const MethodInfo*))DefaultComparer__ctor_m3496518832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2362538307_gshared (DefaultComparer_t2799729180 * __this, KeyValuePair_2_t3461775449  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2362538307(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t2799729180 *, KeyValuePair_2_t3461775449 , const MethodInfo*))DefaultComparer_GetHashCode_m2362538307_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2951684933_gshared (DefaultComparer_t2799729180 * __this, KeyValuePair_2_t3461775449  ___x, KeyValuePair_2_t3461775449  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m2951684933(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t2799729180 *, KeyValuePair_2_t3461775449 , KeyValuePair_2_t3461775449 , const MethodInfo*))DefaultComparer_Equals_m2951684933_gshared)(__this, ___x, ___y, method)
