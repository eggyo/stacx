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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t366251345;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297614.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1503763633_gshared (DefaultComparer_t366251345 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1503763633(__this, method) ((  void (*) (DefaultComparer_t366251345 *, const MethodInfo*))DefaultComparer__ctor_m1503763633_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m77813466_gshared (DefaultComparer_t366251345 * __this, KeyValuePair_2_t1028297614  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m77813466(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t366251345 *, KeyValuePair_2_t1028297614 , const MethodInfo*))DefaultComparer_GetHashCode_m77813466_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1941722498_gshared (DefaultComparer_t366251345 * __this, KeyValuePair_2_t1028297614  ___x, KeyValuePair_2_t1028297614  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1941722498(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t366251345 *, KeyValuePair_2_t1028297614 , KeyValuePair_2_t1028297614 , const MethodInfo*))DefaultComparer_Equals_m1941722498_gshared)(__this, ___x, ___y, method)
