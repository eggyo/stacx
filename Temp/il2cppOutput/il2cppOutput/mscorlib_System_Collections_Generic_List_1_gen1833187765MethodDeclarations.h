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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t1833187765;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t3908383152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t2519335244;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t1502060182;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t4199374144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t1418895573;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t1607192694;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t3739903672;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21036228796.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4213938053.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C"  void List_1__ctor_m3482128891_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1__ctor_m3482128891(__this, method) ((  void (*) (List_1_t1833187765 *, const MethodInfo*))List_1__ctor_m3482128891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m1969458084_gshared (List_1_t1833187765 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1969458084(__this, ___collection, method) ((  void (*) (List_1_t1833187765 *, Object_t*, const MethodInfo*))List_1__ctor_m1969458084_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2290132684_gshared (List_1_t1833187765 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2290132684(__this, ___capacity, method) ((  void (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1__ctor_m2290132684_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C"  void List_1__cctor_m89717010_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m89717010(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m89717010_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3640990349_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3640990349(__this, method) ((  Object_t* (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3640990349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m2204030889_gshared (List_1_t1833187765 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m2204030889(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1833187765 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2204030889_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m2254125796_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m2254125796(__this, method) ((  Object_t * (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2254125796_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m1063633549_gshared (List_1_t1833187765 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1063633549(__this, ___item, method) ((  int32_t (*) (List_1_t1833187765 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1063633549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m4093963103_gshared (List_1_t1833187765 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m4093963103(__this, ___item, method) ((  bool (*) (List_1_t1833187765 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m4093963103_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m1773660773_gshared (List_1_t1833187765 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1773660773(__this, ___item, method) ((  int32_t (*) (List_1_t1833187765 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1773660773_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m3679995664_gshared (List_1_t1833187765 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3679995664(__this, ___index, ___item, method) ((  void (*) (List_1_t1833187765 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3679995664_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m1950689304_gshared (List_1_t1833187765 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1950689304(__this, ___item, method) ((  void (*) (List_1_t1833187765 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1950689304_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2409984160_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2409984160(__this, method) ((  bool (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2409984160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m3358440349_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3358440349(__this, method) ((  bool (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3358440349_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m2115764297_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m2115764297(__this, method) ((  Object_t * (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2115764297_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m3850128910_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3850128910(__this, method) ((  bool (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3850128910_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m3764795179_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m3764795179(__this, method) ((  bool (*) (List_1_t1833187765 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3764795179_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m2795570064_gshared (List_1_t1833187765 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m2795570064(__this, ___index, method) ((  Object_t * (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2795570064_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m2331700967_gshared (List_1_t1833187765 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m2331700967(__this, ___index, ___value, method) ((  void (*) (List_1_t1833187765 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2331700967_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C"  void List_1_Add_m1626489636_gshared (List_1_t1833187765 * __this, KeyValuePair_2_t1036228796  ___item, const MethodInfo* method);
#define List_1_Add_m1626489636(__this, ___item, method) ((  void (*) (List_1_t1833187765 *, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_Add_m1626489636_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m3983046495_gshared (List_1_t1833187765 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m3983046495(__this, ___newCount, method) ((  void (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m3983046495_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m1624091432_gshared (List_1_t1833187765 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m1624091432(__this, ___idx, ___count, method) ((  void (*) (List_1_t1833187765 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m1624091432_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m1976275549_gshared (List_1_t1833187765 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1976275549(__this, ___collection, method) ((  void (*) (List_1_t1833187765 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1976275549_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m1237247773_gshared (List_1_t1833187765 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1237247773(__this, ___enumerable, method) ((  void (*) (List_1_t1833187765 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1237247773_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2628471130_gshared (List_1_t1833187765 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2628471130(__this, ___collection, method) ((  void (*) (List_1_t1833187765 *, Object_t*, const MethodInfo*))List_1_AddRange_m2628471130_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4199374144 * List_1_AsReadOnly_m50143631_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50143631(__this, method) ((  ReadOnlyCollection_1_t4199374144 * (*) (List_1_t1833187765 *, const MethodInfo*))List_1_AsReadOnly_m50143631_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C"  void List_1_Clear_m888262182_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_Clear_m888262182(__this, method) ((  void (*) (List_1_t1833187765 *, const MethodInfo*))List_1_Clear_m888262182_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C"  bool List_1_Contains_m940455508_gshared (List_1_t1833187765 * __this, KeyValuePair_2_t1036228796  ___item, const MethodInfo* method);
#define List_1_Contains_m940455508(__this, ___item, method) ((  bool (*) (List_1_t1833187765 *, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_Contains_m940455508_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m421734932_gshared (List_1_t1833187765 * __this, KeyValuePair_2U5BU5D_t1418895573* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m421734932(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1833187765 *, KeyValuePair_2U5BU5D_t1418895573*, int32_t, const MethodInfo*))List_1_CopyTo_m421734932_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t1036228796  List_1_Find_m2719714900_gshared (List_1_t1833187765 * __this, Predicate_1_t1607192694 * ___match, const MethodInfo* method);
#define List_1_Find_m2719714900(__this, ___match, method) ((  KeyValuePair_2_t1036228796  (*) (List_1_t1833187765 *, Predicate_1_t1607192694 *, const MethodInfo*))List_1_Find_m2719714900_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m248187727_gshared (Object_t * __this /* static, unused */, Predicate_1_t1607192694 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m248187727(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1607192694 *, const MethodInfo*))List_1_CheckMatch_m248187727_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m2565431668_gshared (List_1_t1833187765 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1607192694 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m2565431668(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1833187765 *, int32_t, int32_t, Predicate_1_t1607192694 *, const MethodInfo*))List_1_GetIndex_m2565431668_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C"  Enumerator_t4213938053  List_1_GetEnumerator_m2688770449_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2688770449(__this, method) ((  Enumerator_t4213938053  (*) (List_1_t1833187765 *, const MethodInfo*))List_1_GetEnumerator_m2688770449_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m1873815192_gshared (List_1_t1833187765 * __this, KeyValuePair_2_t1036228796  ___item, const MethodInfo* method);
#define List_1_IndexOf_m1873815192(__this, ___item, method) ((  int32_t (*) (List_1_t1833187765 *, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_IndexOf_m1873815192_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m2181672043_gshared (List_1_t1833187765 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m2181672043(__this, ___start, ___delta, method) ((  void (*) (List_1_t1833187765 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m2181672043_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m168102116_gshared (List_1_t1833187765 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m168102116(__this, ___index, method) ((  void (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_CheckIndex_m168102116_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m1206695307_gshared (List_1_t1833187765 * __this, int32_t ___index, KeyValuePair_2_t1036228796  ___item, const MethodInfo* method);
#define List_1_Insert_m1206695307(__this, ___index, ___item, method) ((  void (*) (List_1_t1833187765 *, int32_t, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_Insert_m1206695307_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m1351926208_gshared (List_1_t1833187765 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1351926208(__this, ___collection, method) ((  void (*) (List_1_t1833187765 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1351926208_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C"  bool List_1_Remove_m2521070415_gshared (List_1_t1833187765 * __this, KeyValuePair_2_t1036228796  ___item, const MethodInfo* method);
#define List_1_Remove_m2521070415(__this, ___item, method) ((  bool (*) (List_1_t1833187765 *, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_Remove_m2521070415_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m855469147_gshared (List_1_t1833187765 * __this, Predicate_1_t1607192694 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m855469147(__this, ___match, method) ((  int32_t (*) (List_1_t1833187765 *, Predicate_1_t1607192694 *, const MethodInfo*))List_1_RemoveAll_m855469147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3375515473_gshared (List_1_t1833187765 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3375515473(__this, ___index, method) ((  void (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3375515473_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m2837406068_gshared (List_1_t1833187765 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2837406068(__this, ___index, ___count, method) ((  void (*) (List_1_t1833187765 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2837406068_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C"  void List_1_Reverse_m584151931_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_Reverse_m584151931(__this, method) ((  void (*) (List_1_t1833187765 *, const MethodInfo*))List_1_Reverse_m584151931_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C"  void List_1_Sort_m2152461831_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_Sort_m2152461831(__this, method) ((  void (*) (List_1_t1833187765 *, const MethodInfo*))List_1_Sort_m2152461831_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m3224417050_gshared (List_1_t1833187765 * __this, Comparison_1_t3739903672 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m3224417050(__this, ___comparison, method) ((  void (*) (List_1_t1833187765 *, Comparison_1_t3739903672 *, const MethodInfo*))List_1_Sort_m3224417050_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t1418895573* List_1_ToArray_m3959287674_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_ToArray_m3959287674(__this, method) ((  KeyValuePair_2U5BU5D_t1418895573* (*) (List_1_t1833187765 *, const MethodInfo*))List_1_ToArray_m3959287674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m1937126496_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1937126496(__this, method) ((  void (*) (List_1_t1833187765 *, const MethodInfo*))List_1_TrimExcess_m1937126496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m397087432_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m397087432(__this, method) ((  int32_t (*) (List_1_t1833187765 *, const MethodInfo*))List_1_get_Capacity_m397087432_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1193235313_gshared (List_1_t1833187765 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1193235313(__this, ___value, method) ((  void (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1193235313_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C"  int32_t List_1_get_Count_m2071003619_gshared (List_1_t1833187765 * __this, const MethodInfo* method);
#define List_1_get_Count_m2071003619(__this, method) ((  int32_t (*) (List_1_t1833187765 *, const MethodInfo*))List_1_get_Count_m2071003619_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t1036228796  List_1_get_Item_m2924234709_gshared (List_1_t1833187765 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m2924234709(__this, ___index, method) ((  KeyValuePair_2_t1036228796  (*) (List_1_t1833187765 *, int32_t, const MethodInfo*))List_1_get_Item_m2924234709_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m1802616738_gshared (List_1_t1833187765 * __this, int32_t ___index, KeyValuePair_2_t1036228796  ___value, const MethodInfo* method);
#define List_1_set_Item_m1802616738(__this, ___index, ___value, method) ((  void (*) (List_1_t1833187765 *, int32_t, KeyValuePair_2_t1036228796 , const MethodInfo*))List_1_set_Item_m1802616738_gshared)(__this, ___index, ___value, method)
