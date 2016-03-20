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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct List_1_t1756548400;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerable_1_t3831743787;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct IEnumerator_1_t2442695879;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct ICollection_1_t1425420817;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct ReadOnlyCollection_1_t4122734779;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>[]
struct KeyValuePair_2U5BU5D_t3751584014;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct Predicate_1_t1530553329;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>
struct Comparison_1_t3663264307;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959589431.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4137298688.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::.ctor()
extern "C"  void List_1__ctor_m2662610202_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1__ctor_m2662610202(__this, method) ((  void (*) (List_1_t1756548400 *, const MethodInfo*))List_1__ctor_m2662610202_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m1088768805_gshared (List_1_t1756548400 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1088768805(__this, ___collection, method) ((  void (*) (List_1_t1756548400 *, Object_t*, const MethodInfo*))List_1__ctor_m1088768805_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2699629419_gshared (List_1_t1756548400 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2699629419(__this, ___capacity, method) ((  void (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1__ctor_m2699629419_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::.cctor()
extern "C"  void List_1__cctor_m454441427_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m454441427(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m454441427_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2603426980_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2603426980(__this, method) ((  Object_t* (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2603426980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m2499207530_gshared (List_1_t1756548400 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m2499207530(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1756548400 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2499207530_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3027860217_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3027860217(__this, method) ((  Object_t * (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3027860217_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m3740969700_gshared (List_1_t1756548400 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3740969700(__this, ___item, method) ((  int32_t (*) (List_1_t1756548400 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3740969700_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m3741597148_gshared (List_1_t1756548400 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m3741597148(__this, ___item, method) ((  bool (*) (List_1_t1756548400 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3741597148_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m3915566908_gshared (List_1_t1756548400 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3915566908(__this, ___item, method) ((  int32_t (*) (List_1_t1756548400 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3915566908_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m1432316079_gshared (List_1_t1756548400 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1432316079(__this, ___index, ___item, method) ((  void (*) (List_1_t1756548400 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1432316079_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m466407449_gshared (List_1_t1756548400 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m466407449(__this, ___item, method) ((  void (*) (List_1_t1756548400 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m466407449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4241591005_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4241591005(__this, method) ((  bool (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4241591005_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m2924346368_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m2924346368(__this, method) ((  bool (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m2924346368_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3731386098_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3731386098(__this, method) ((  Object_t * (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3731386098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m219578955_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m219578955(__this, method) ((  bool (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m219578955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1153828686_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1153828686(__this, method) ((  bool (*) (List_1_t1756548400 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1153828686_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m629959673_gshared (List_1_t1756548400 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m629959673(__this, ___index, method) ((  Object_t * (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m629959673_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m2680169670_gshared (List_1_t1756548400 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m2680169670(__this, ___index, ___value, method) ((  void (*) (List_1_t1756548400 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m2680169670_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Add(T)
extern "C"  void List_1_Add_m1322958885_gshared (List_1_t1756548400 * __this, KeyValuePair_2_t959589431  ___item, const MethodInfo* method);
#define List_1_Add_m1322958885(__this, ___item, method) ((  void (*) (List_1_t1756548400 *, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_Add_m1322958885_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m2479450592_gshared (List_1_t1756548400 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m2479450592(__this, ___newCount, method) ((  void (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m2479450592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m3443904007_gshared (List_1_t1756548400 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m3443904007(__this, ___idx, ___count, method) ((  void (*) (List_1_t1756548400 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m3443904007_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m4120527070_gshared (List_1_t1756548400 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m4120527070(__this, ___collection, method) ((  void (*) (List_1_t1756548400 *, Object_t*, const MethodInfo*))List_1_AddCollection_m4120527070_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m3381499294_gshared (List_1_t1756548400 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m3381499294(__this, ___enumerable, method) ((  void (*) (List_1_t1756548400 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m3381499294_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m3969371705_gshared (List_1_t1756548400 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3969371705(__this, ___collection, method) ((  void (*) (List_1_t1756548400 *, Object_t*, const MethodInfo*))List_1_AddRange_m3969371705_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4122734779 * List_1_AsReadOnly_m2054273964_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m2054273964(__this, method) ((  ReadOnlyCollection_1_t4122734779 * (*) (List_1_t1756548400 *, const MethodInfo*))List_1_AsReadOnly_m2054273964_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Clear()
extern "C"  void List_1_Clear_m68743493_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_Clear_m68743493(__this, method) ((  void (*) (List_1_t1756548400 *, const MethodInfo*))List_1_Clear_m68743493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Contains(T)
extern "C"  bool List_1_Contains_m3280524727_gshared (List_1_t1756548400 * __this, KeyValuePair_2_t959589431  ___item, const MethodInfo* method);
#define List_1_Contains_m3280524727(__this, ___item, method) ((  bool (*) (List_1_t1756548400 *, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_Contains_m3280524727_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m1550895317_gshared (List_1_t1756548400 * __this, KeyValuePair_2U5BU5D_t3751584014* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1550895317(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1756548400 *, KeyValuePair_2U5BU5D_t3751584014*, int32_t, const MethodInfo*))List_1_CopyTo_m1550895317_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t959589431  List_1_Find_m3767622289_gshared (List_1_t1756548400 * __this, Predicate_1_t1530553329 * ___match, const MethodInfo* method);
#define List_1_Find_m3767622289(__this, ___match, method) ((  KeyValuePair_2_t959589431  (*) (List_1_t1756548400 *, Predicate_1_t1530553329 *, const MethodInfo*))List_1_Find_m3767622289_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m2974643630_gshared (Object_t * __this /* static, unused */, Predicate_1_t1530553329 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m2974643630(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1530553329 *, const MethodInfo*))List_1_CheckMatch_m2974643630_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m3344524683_gshared (List_1_t1756548400 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1530553329 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m3344524683(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1756548400 *, int32_t, int32_t, Predicate_1_t1530553329 *, const MethodInfo*))List_1_GetIndex_m3344524683_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::GetEnumerator()
extern "C"  Enumerator_t4137298688  List_1_GetEnumerator_m1132454772_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1132454772(__this, method) ((  Enumerator_t4137298688  (*) (List_1_t1756548400 *, const MethodInfo*))List_1_GetEnumerator_m1132454772_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m321829729_gshared (List_1_t1756548400 * __this, KeyValuePair_2_t959589431  ___item, const MethodInfo* method);
#define List_1_IndexOf_m321829729(__this, ___item, method) ((  int32_t (*) (List_1_t1756548400 *, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_IndexOf_m321829729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m745601580_gshared (List_1_t1756548400 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m745601580(__this, ___start, ___delta, method) ((  void (*) (List_1_t1756548400 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m745601580_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m1297262501_gshared (List_1_t1756548400 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1297262501(__this, ___index, method) ((  void (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1297262501_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m2816807052_gshared (List_1_t1756548400 * __this, int32_t ___index, KeyValuePair_2_t959589431  ___item, const MethodInfo* method);
#define List_1_Insert_m2816807052(__this, ___index, ___item, method) ((  void (*) (List_1_t1756548400 *, int32_t, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_Insert_m2816807052_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m393335809_gshared (List_1_t1756548400 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m393335809(__this, ___collection, method) ((  void (*) (List_1_t1756548400 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m393335809_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Remove(T)
extern "C"  bool List_1_Remove_m2979370866_gshared (List_1_t1756548400 * __this, KeyValuePair_2_t959589431  ___item, const MethodInfo* method);
#define List_1_Remove_m2979370866(__this, ___item, method) ((  bool (*) (List_1_t1756548400 *, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_Remove_m2979370866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m4052112484_gshared (List_1_t1756548400 * __this, Predicate_1_t1530553329 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m4052112484(__this, ___match, method) ((  int32_t (*) (List_1_t1756548400 *, Predicate_1_t1530553329 *, const MethodInfo*))List_1_RemoveAll_m4052112484_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m690659922_gshared (List_1_t1756548400 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m690659922(__this, ___index, method) ((  void (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_RemoveAt_m690659922_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m3417021045_gshared (List_1_t1756548400 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m3417021045(__this, ___index, ___count, method) ((  void (*) (List_1_t1756548400 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m3417021045_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Reverse()
extern "C"  void List_1_Reverse_m3300674266_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_Reverse_m3300674266(__this, method) ((  void (*) (List_1_t1756548400 *, const MethodInfo*))List_1_Reverse_m3300674266_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Sort()
extern "C"  void List_1_Sort_m1848931080_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_Sort_m1848931080(__this, method) ((  void (*) (List_1_t1756548400 *, const MethodInfo*))List_1_Sort_m1848931080_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1377765723_gshared (List_1_t1756548400 * __this, Comparison_1_t3663264307 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1377765723(__this, ___comparison, method) ((  void (*) (List_1_t1756548400 *, Comparison_1_t3663264307 *, const MethodInfo*))List_1_Sort_m1377765723_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t3751584014* List_1_ToArray_m988514291_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_ToArray_m988514291(__this, method) ((  KeyValuePair_2U5BU5D_t3751584014* (*) (List_1_t1756548400 *, const MethodInfo*))List_1_ToArray_m988514291_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m4080217249_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m4080217249(__this, method) ((  void (*) (List_1_t1756548400 *, const MethodInfo*))List_1_TrimExcess_m4080217249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m4241496849_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4241496849(__this, method) ((  int32_t (*) (List_1_t1756548400 *, const MethodInfo*))List_1_get_Capacity_m4241496849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m3984606706_gshared (List_1_t1756548400 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m3984606706(__this, ___value, method) ((  void (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_set_Capacity_m3984606706_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Count()
extern "C"  int32_t List_1_get_Count_m1204094522_gshared (List_1_t1756548400 * __this, const MethodInfo* method);
#define List_1_get_Count_m1204094522(__this, method) ((  int32_t (*) (List_1_t1756548400 *, const MethodInfo*))List_1_get_Count_m1204094522_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t959589431  List_1_get_Item_m1028458872_gshared (List_1_t1756548400 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1028458872(__this, ___index, method) ((  KeyValuePair_2_t959589431  (*) (List_1_t1756548400 *, int32_t, const MethodInfo*))List_1_get_Item_m1028458872_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m2931777123_gshared (List_1_t1756548400 * __this, int32_t ___index, KeyValuePair_2_t959589431  ___value, const MethodInfo* method);
#define List_1_set_Item_m2931777123(__this, ___index, ___value, method) ((  void (*) (List_1_t1756548400 *, int32_t, KeyValuePair_2_t959589431 , const MethodInfo*))List_1_set_Item_m2931777123_gshared)(__this, ___index, ___value, method)
