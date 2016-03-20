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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct List_1_t3483814338;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerable_1_t1264042429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t4169961817;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct ICollection_1_t3152686755;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct ReadOnlyCollection_1_t1555033421;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t4139652596;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Predicate_1_t3257819267;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Comparison_1_t1095562949;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22686855369.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1569597330.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor()
extern "C"  void List_1__ctor_m2568236814_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1__ctor_m2568236814(__this, method) ((  void (*) (List_1_t3483814338 *, const MethodInfo*))List_1__ctor_m2568236814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m3707248817_gshared (List_1_t3483814338 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3707248817(__this, ___collection, method) ((  void (*) (List_1_t3483814338 *, Object_t*, const MethodInfo*))List_1__ctor_m3707248817_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3405627231_gshared (List_1_t3483814338 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3405627231(__this, ___capacity, method) ((  void (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1__ctor_m3405627231_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.cctor()
extern "C"  void List_1__cctor_m1823833695_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1823833695(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1823833695_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1999430624_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1999430624(__this, method) ((  Object_t* (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1999430624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m1559171574_gshared (List_1_t3483814338 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1559171574(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3483814338 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1559171574_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m4142469361_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m4142469361(__this, method) ((  Object_t * (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4142469361_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m1565083936_gshared (List_1_t3483814338 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1565083936(__this, ___item, method) ((  int32_t (*) (List_1_t3483814338 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1565083936_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m595543852_gshared (List_1_t3483814338 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m595543852(__this, ___item, method) ((  bool (*) (List_1_t3483814338 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m595543852_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m1182789496_gshared (List_1_t3483814338 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1182789496(__this, ___item, method) ((  int32_t (*) (List_1_t3483814338 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1182789496_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m3772125347_gshared (List_1_t3483814338 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3772125347(__this, ___index, ___item, method) ((  void (*) (List_1_t3483814338 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3772125347_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m1818250149_gshared (List_1_t3483814338 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1818250149(__this, ___item, method) ((  void (*) (List_1_t3483814338 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1818250149_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3041734701_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3041734701(__this, method) ((  bool (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3041734701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m3626938544_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3626938544(__this, method) ((  bool (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3626938544_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3124750428_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3124750428(__this, method) ((  Object_t * (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3124750428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m3886466971_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3886466971(__this, method) ((  bool (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3886466971_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m3211778046_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m3211778046(__this, method) ((  bool (*) (List_1_t3483814338 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3211778046_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m1768633059_gshared (List_1_t3483814338 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1768633059(__this, ___index, method) ((  Object_t * (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1768633059_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m674013114_gshared (List_1_t3483814338 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m674013114(__this, ___index, ___value, method) ((  void (*) (List_1_t3483814338 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m674013114_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Add(T)
extern "C"  void List_1_Add_m72988593_gshared (List_1_t3483814338 * __this, KeyValuePair_2_t2686855369  ___item, const MethodInfo* method);
#define List_1_Add_m72988593(__this, ___item, method) ((  void (*) (List_1_t3483814338 *, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_Add_m72988593_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m382542700_gshared (List_1_t3483814338 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m382542700(__this, ___newCount, method) ((  void (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m382542700_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m4027245819_gshared (List_1_t3483814338 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m4027245819(__this, ___idx, ___count, method) ((  void (*) (List_1_t3483814338 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m4027245819_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m1702152810_gshared (List_1_t3483814338 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1702152810(__this, ___collection, method) ((  void (*) (List_1_t3483814338 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1702152810_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m963125034_gshared (List_1_t3483814338 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m963125034(__this, ___enumerable, method) ((  void (*) (List_1_t3483814338 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m963125034_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m1616411949_gshared (List_1_t3483814338 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1616411949(__this, ___collection, method) ((  void (*) (List_1_t3483814338 *, Object_t*, const MethodInfo*))List_1_AddRange_m1616411949_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t1555033421 * List_1_AsReadOnly_m3409511388_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m3409511388(__this, method) ((  ReadOnlyCollection_1_t1555033421 * (*) (List_1_t3483814338 *, const MethodInfo*))List_1_AsReadOnly_m3409511388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clear()
extern "C"  void List_1_Clear_m4269337401_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_Clear_m4269337401(__this, method) ((  void (*) (List_1_t3483814338 *, const MethodInfo*))List_1_Clear_m4269337401_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Contains(T)
extern "C"  bool List_1_Contains_m4232051303_gshared (List_1_t3483814338 * __this, KeyValuePair_2_t2686855369  ___item, const MethodInfo* method);
#define List_1_Contains_m4232051303(__this, ___item, method) ((  bool (*) (List_1_t3483814338 *, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_Contains_m4232051303_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m3421336929_gshared (List_1_t3483814338 * __this, KeyValuePair_2U5BU5D_t4139652596* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m3421336929(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3483814338 *, KeyValuePair_2U5BU5D_t4139652596*, int32_t, const MethodInfo*))List_1_CopyTo_m3421336929_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t2686855369  List_1_Find_m3667902375_gshared (List_1_t3483814338 * __this, Predicate_1_t3257819267 * ___match, const MethodInfo* method);
#define List_1_Find_m3667902375(__this, ___match, method) ((  KeyValuePair_2_t2686855369  (*) (List_1_t3483814338 *, Predicate_1_t3257819267 *, const MethodInfo*))List_1_Find_m3667902375_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m3715901090_gshared (Object_t * __this /* static, unused */, Predicate_1_t3257819267 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m3715901090(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t3257819267 *, const MethodInfo*))List_1_CheckMatch_m3715901090_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m2687003335_gshared (List_1_t3483814338 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3257819267 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m2687003335(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t3483814338 *, int32_t, int32_t, Predicate_1_t3257819267 *, const MethodInfo*))List_1_GetIndex_m2687003335_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetEnumerator()
extern "C"  Enumerator_t1569597330  List_1_GetEnumerator_m2895668260_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2895668260(__this, method) ((  Enumerator_t1569597330  (*) (List_1_t3483814338 *, const MethodInfo*))List_1_GetEnumerator_m2895668260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m969897381_gshared (List_1_t3483814338 * __this, KeyValuePair_2_t2686855369  ___item, const MethodInfo* method);
#define List_1_IndexOf_m969897381(__this, ___item, method) ((  int32_t (*) (List_1_t3483814338 *, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_IndexOf_m969897381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m1877891768_gshared (List_1_t3483814338 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1877891768(__this, ___start, ___delta, method) ((  void (*) (List_1_t3483814338 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1877891768_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m3167704113_gshared (List_1_t3483814338 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m3167704113(__this, ___index, method) ((  void (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_CheckIndex_m3167704113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m2742775832_gshared (List_1_t3483814338 * __this, int32_t ___index, KeyValuePair_2_t2686855369  ___item, const MethodInfo* method);
#define List_1_Insert_m2742775832(__this, ___index, ___item, method) ((  void (*) (List_1_t3483814338 *, int32_t, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_Insert_m2742775832_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m4207946381_gshared (List_1_t3483814338 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m4207946381(__this, ___collection, method) ((  void (*) (List_1_t3483814338 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m4207946381_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Remove(T)
extern "C"  bool List_1_Remove_m2922260514_gshared (List_1_t3483814338 * __this, KeyValuePair_2_t2686855369  ___item, const MethodInfo* method);
#define List_1_Remove_m2922260514(__this, ___item, method) ((  bool (*) (List_1_t3483814338 *, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_Remove_m2922260514_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m514605992_gshared (List_1_t3483814338 * __this, Predicate_1_t3257819267 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m514605992(__this, ___match, method) ((  int32_t (*) (List_1_t3483814338 *, Predicate_1_t3257819267 *, const MethodInfo*))List_1_RemoveAll_m514605992_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m616628702_gshared (List_1_t3483814338 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m616628702(__this, ___index, method) ((  void (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_RemoveAt_m616628702_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m25780737_gshared (List_1_t3483814338 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m25780737(__this, ___index, ___count, method) ((  void (*) (List_1_t3483814338 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25780737_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Reverse()
extern "C"  void List_1_Reverse_m2802161614_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_Reverse_m2802161614(__this, method) ((  void (*) (List_1_t3483814338 *, const MethodInfo*))List_1_Reverse_m2802161614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Sort()
extern "C"  void List_1_Sort_m598960788_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_Sort_m598960788(__this, method) ((  void (*) (List_1_t3483814338 *, const MethodInfo*))List_1_Sort_m598960788_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m588943335_gshared (List_1_t3483814338 * __this, Comparison_1_t1095562949 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m588943335(__this, ___comparison, method) ((  void (*) (List_1_t3483814338 *, Comparison_1_t1095562949 *, const MethodInfo*))List_1_Sort_m588943335_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t4139652596* List_1_ToArray_m92655373_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_ToArray_m92655373(__this, method) ((  KeyValuePair_2U5BU5D_t4139652596* (*) (List_1_t3483814338 *, const MethodInfo*))List_1_ToArray_m92655373_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m591743789_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m591743789(__this, method) ((  void (*) (List_1_t3483814338 *, const MethodInfo*))List_1_TrimExcess_m591743789_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m339874645_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m339874645(__this, method) ((  int32_t (*) (List_1_t3483814338 *, const MethodInfo*))List_1_get_Capacity_m339874645_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1887698814_gshared (List_1_t3483814338 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1887698814(__this, ___value, method) ((  void (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1887698814_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count()
extern "C"  int32_t List_1_get_Count_m4114322550_gshared (List_1_t3483814338 * __this, const MethodInfo* method);
#define List_1_get_Count_m4114322550(__this, method) ((  int32_t (*) (List_1_t3483814338 *, const MethodInfo*))List_1_get_Count_m4114322550_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t2686855369  List_1_get_Item_m3377286818_gshared (List_1_t3483814338 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3377286818(__this, ___index, method) ((  KeyValuePair_2_t2686855369  (*) (List_1_t3483814338 *, int32_t, const MethodInfo*))List_1_get_Item_m3377286818_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m507251439_gshared (List_1_t3483814338 * __this, int32_t ___index, KeyValuePair_2_t2686855369  ___value, const MethodInfo* method);
#define List_1_set_Item_m507251439(__this, ___index, ___value, method) ((  void (*) (List_1_t3483814338 *, int32_t, KeyValuePair_2_t2686855369 , const MethodInfo*))List_1_set_Item_m507251439_gshared)(__this, ___index, ___value, method)
