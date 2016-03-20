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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct DefaultComparer_t374182527;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1571761859_gshared (DefaultComparer_t374182527 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1571761859(__this, method) ((  void (*) (DefaultComparer_t374182527 *, const MethodInfo*))DefaultComparer__ctor_m1571761859_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2170727560_gshared (DefaultComparer_t374182527 * __this, KeyValuePair_2_t1036228796  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2170727560(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t374182527 *, KeyValuePair_2_t1036228796 , const MethodInfo*))DefaultComparer_GetHashCode_m2170727560_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3014561428_gshared (DefaultComparer_t374182527 * __this, KeyValuePair_2_t1036228796  ___x, KeyValuePair_2_t1036228796  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3014561428(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t374182527 *, KeyValuePair_2_t1036228796 , KeyValuePair_2_t1036228796 , const MethodInfo*))DefaultComparer_Equals_m3014561428_gshared)(__this, ___x, ___y, method)
