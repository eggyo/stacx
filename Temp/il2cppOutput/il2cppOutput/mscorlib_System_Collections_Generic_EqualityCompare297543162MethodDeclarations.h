﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct DefaultComparer_t297543162;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959589431.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1492606802_gshared (DefaultComparer_t297543162 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1492606802(__this, method) ((  void (*) (DefaultComparer_t297543162 *, const MethodInfo*))DefaultComparer__ctor_m1492606802_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2533879137_gshared (DefaultComparer_t297543162 * __this, KeyValuePair_2_t959589431  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2533879137(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t297543162 *, KeyValuePair_2_t959589431 , const MethodInfo*))DefaultComparer_GetHashCode_m2533879137_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3515774311_gshared (DefaultComparer_t297543162 * __this, KeyValuePair_2_t959589431  ___x, KeyValuePair_2_t959589431  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m3515774311(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t297543162 *, KeyValuePair_2_t959589431 , KeyValuePair_2_t959589431 , const MethodInfo*))DefaultComparer_Equals_m3515774311_gshared)(__this, ___x, ___y, method)