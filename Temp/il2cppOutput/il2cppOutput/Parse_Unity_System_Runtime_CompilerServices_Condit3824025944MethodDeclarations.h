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

// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t3824025944;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2193916456;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_WeakReference2193916456.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern "C"  void Reference__ctor_m1178048548_gshared (Reference_t3824025944 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference__ctor_m1178048548(__this, ___obj, method) ((  void (*) (Reference_t3824025944 *, Object_t *, const MethodInfo*))Reference__ctor_m1178048548_gshared)(__this, ___obj, method)
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C"  WeakReference_t2193916456 * Reference_get_WeakReference_m1449970552_gshared (Reference_t3824025944 * __this, const MethodInfo* method);
#define Reference_get_WeakReference_m1449970552(__this, method) ((  WeakReference_t2193916456 * (*) (Reference_t3824025944 *, const MethodInfo*))Reference_get_WeakReference_m1449970552_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C"  void Reference_set_WeakReference_m1279907503_gshared (Reference_t3824025944 * __this, WeakReference_t2193916456 * ___value, const MethodInfo* method);
#define Reference_set_WeakReference_m1279907503(__this, ___value, method) ((  void (*) (Reference_t3824025944 *, WeakReference_t2193916456 *, const MethodInfo*))Reference_set_WeakReference_m1279907503_gshared)(__this, ___value, method)
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C"  Object_t * Reference_get_Value_m2826208287_gshared (Reference_t3824025944 * __this, const MethodInfo* method);
#define Reference_get_Value_m2826208287(__this, method) ((  Object_t * (*) (Reference_t3824025944 *, const MethodInfo*))Reference_get_Value_m2826208287_gshared)(__this, method)
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C"  int32_t Reference_GetHashCode_m922399620_gshared (Reference_t3824025944 * __this, const MethodInfo* method);
#define Reference_GetHashCode_m922399620(__this, method) ((  int32_t (*) (Reference_t3824025944 *, const MethodInfo*))Reference_GetHashCode_m922399620_gshared)(__this, method)
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C"  bool Reference_Equals_m62373484_gshared (Reference_t3824025944 * __this, Object_t * ___obj, const MethodInfo* method);
#define Reference_Equals_m62373484(__this, ___obj, method) ((  bool (*) (Reference_t3824025944 *, Object_t *, const MethodInfo*))Reference_Equals_m62373484_gshared)(__this, ___obj, method)
