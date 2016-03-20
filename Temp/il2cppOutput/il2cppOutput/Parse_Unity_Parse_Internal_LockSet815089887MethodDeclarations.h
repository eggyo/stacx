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

// Parse.Internal.LockSet
struct LockSet_t815089887;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.IComparable
struct IComparable_t1596950936;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Parse.Internal.LockSet::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C"  void LockSet__ctor_m3535404771 (LockSet_t815089887 * __this, Object_t* ___mutexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Enter()
extern "C"  void LockSet_Enter_m3057290716 (LockSet_t815089887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::Exit()
extern "C"  void LockSet_Exit_m1354467900 (LockSet_t815089887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IComparable Parse.Internal.LockSet::GetStableId(System.Object)
extern "C"  Object_t * LockSet_GetStableId_m4251849045 (Object_t * __this /* static, unused */, Object_t * ___mutex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.LockSet::.cctor()
extern "C"  void LockSet__cctor_m1506300039 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
