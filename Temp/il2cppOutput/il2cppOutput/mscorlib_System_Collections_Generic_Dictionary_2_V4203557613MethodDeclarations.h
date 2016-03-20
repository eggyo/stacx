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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t4203557613;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t2281420519;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t35553939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V2048448460.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m3963962391_gshared (ValueCollection_t4203557613 * __this, Dictionary_2_t2281420519 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m3963962391(__this, ___dictionary, method) ((  void (*) (ValueCollection_t4203557613 *, Dictionary_2_t2281420519 *, const MethodInfo*))ValueCollection__ctor_m3963962391_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3045366075_gshared (ValueCollection_t4203557613 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3045366075(__this, ___item, method) ((  void (*) (ValueCollection_t4203557613 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3045366075_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3382074244_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3382074244(__this, method) ((  void (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3382074244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2755458891_gshared (ValueCollection_t4203557613 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2755458891(__this, ___item, method) ((  bool (*) (ValueCollection_t4203557613 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2755458891_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m334587568_gshared (ValueCollection_t4203557613 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m334587568(__this, ___item, method) ((  bool (*) (ValueCollection_t4203557613 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m334587568_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3421550162_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3421550162(__this, method) ((  Object_t* (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m3421550162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m2747492232_gshared (ValueCollection_t4203557613 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m2747492232(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t4203557613 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m2747492232_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2278975747_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2278975747(__this, method) ((  Object_t * (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2278975747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1030634750_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1030634750(__this, method) ((  bool (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1030634750_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m3348729822_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m3348729822(__this, method) ((  bool (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m3348729822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m3411540234_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m3411540234(__this, method) ((  Object_t * (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m3411540234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m1791654558_gshared (ValueCollection_t4203557613 * __this, Int32U5BU5D_t1809983122* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1791654558(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t4203557613 *, Int32U5BU5D_t1809983122*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1791654558_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2048448462  ValueCollection_GetEnumerator_m1777130305_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1777130305(__this, method) ((  Enumerator_t2048448462  (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_GetEnumerator_m1777130305_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m1861405604_gshared (ValueCollection_t4203557613 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1861405604(__this, method) ((  int32_t (*) (ValueCollection_t4203557613 *, const MethodInfo*))ValueCollection_get_Count_m1861405604_gshared)(__this, method)
