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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t3807325611;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t1587553702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t198505794;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t3476198028;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t1878544694;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t1383006279;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t3581330540;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t1419074222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23010366642.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1893108603.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C"  void List_1__ctor_m380770943_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1__ctor_m380770943(__this, method) ((  void (*) (List_1_t3807325611 *, const MethodInfo*))List_1__ctor_m380770943_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m3998210208_gshared (List_1_t3807325611 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3998210208(__this, ___collection, method) ((  void (*) (List_1_t3807325611 *, Object_t*, const MethodInfo*))List_1__ctor_m3998210208_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m1407781200_gshared (List_1_t3807325611 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1407781200(__this, ___capacity, method) ((  void (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1__ctor_m1407781200_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C"  void List_1__cctor_m2731868430_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m2731868430(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m2731868430_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3599298505_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3599298505(__this, method) ((  Object_t* (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3599298505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m2261957541_gshared (List_1_t3807325611 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m2261957541(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3807325611 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2261957541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3192978292_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3192978292(__this, method) ((  Object_t * (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3192978292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m667642569_gshared (List_1_t3807325611 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m667642569(__this, ___item, method) ((  int32_t (*) (List_1_t3807325611 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m667642569_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m1659180695_gshared (List_1_t3807325611 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1659180695(__this, ___item, method) ((  bool (*) (List_1_t3807325611 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1659180695_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m3663140001_gshared (List_1_t3807325611 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3663140001(__this, ___item, method) ((  int32_t (*) (List_1_t3807325611 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3663140001_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m4056733076_gshared (List_1_t3807325611 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m4056733076(__this, ___index, ___item, method) ((  void (*) (List_1_t3807325611 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m4056733076_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m4168569620_gshared (List_1_t3807325611 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m4168569620(__this, ___item, method) ((  void (*) (List_1_t3807325611 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m4168569620_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3801282008_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3801282008(__this, method) ((  bool (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3801282008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m2163418469_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m2163418469(__this, method) ((  bool (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m2163418469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3959474007_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3959474007(__this, method) ((  Object_t * (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3959474007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m1573602118_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1573602118(__this, method) ((  bool (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1573602118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m3829906163_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m3829906163(__this, method) ((  bool (*) (List_1_t3807325611 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3829906163_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m779108126_gshared (List_1_t3807325611 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m779108126(__this, ___index, method) ((  Object_t * (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m779108126_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m3599101035_gshared (List_1_t3807325611 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3599101035(__this, ___index, ___value, method) ((  void (*) (List_1_t3807325611 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3599101035_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C"  void List_1_Add_m2357729824_gshared (List_1_t3807325611 * __this, KeyValuePair_2_t3010366642  ___item, const MethodInfo* method);
#define List_1_Add_m2357729824(__this, ___item, method) ((  void (*) (List_1_t3807325611 *, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_Add_m2357729824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m3226007643_gshared (List_1_t3807325611 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m3226007643(__this, ___newCount, method) ((  void (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m3226007643_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m1736176812_gshared (List_1_t3807325611 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m1736176812(__this, ___idx, ___count, method) ((  void (*) (List_1_t3807325611 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m1736176812_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m2265523033_gshared (List_1_t3807325611 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m2265523033(__this, ___collection, method) ((  void (*) (List_1_t3807325611 *, Object_t*, const MethodInfo*))List_1_AddCollection_m2265523033_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m1526495257_gshared (List_1_t3807325611 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1526495257(__this, ___enumerable, method) ((  void (*) (List_1_t3807325611 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1526495257_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2403207902_gshared (List_1_t3807325611 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2403207902(__this, ___collection, method) ((  void (*) (List_1_t3807325611 *, Object_t*, const MethodInfo*))List_1_AddRange_m2403207902_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t1878544694 * List_1_AsReadOnly_m4089459175_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m4089459175(__this, method) ((  ReadOnlyCollection_1_t1878544694 * (*) (List_1_t3807325611 *, const MethodInfo*))List_1_AsReadOnly_m4089459175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C"  void List_1_Clear_m2081871530_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_Clear_m2081871530(__this, method) ((  void (*) (List_1_t3807325611 *, const MethodInfo*))List_1_Clear_m2081871530_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C"  bool List_1_Contains_m2023163932_gshared (List_1_t3807325611 * __this, KeyValuePair_2_t3010366642  ___item, const MethodInfo* method);
#define List_1_Contains_m2023163932(__this, ___item, method) ((  bool (*) (List_1_t3807325611 *, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_Contains_m2023163932_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m1256700432_gshared (List_1_t3807325611 * __this, KeyValuePair_2U5BU5D_t1383006279* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1256700432(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t3807325611 *, KeyValuePair_2U5BU5D_t1383006279*, int32_t, const MethodInfo*))List_1_CopyTo_m1256700432_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t3010366642  List_1_Find_m754304950_gshared (List_1_t3807325611 * __this, Predicate_1_t3581330540 * ___match, const MethodInfo* method);
#define List_1_Find_m754304950(__this, ___match, method) ((  KeyValuePair_2_t3010366642  (*) (List_1_t3807325611 *, Predicate_1_t3581330540 *, const MethodInfo*))List_1_Find_m754304950_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m402831059_gshared (Object_t * __this /* static, unused */, Predicate_1_t3581330540 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m402831059(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t3581330540 *, const MethodInfo*))List_1_CheckMatch_m402831059_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m2041966768_gshared (List_1_t3807325611 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3581330540 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m2041966768(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t3807325611 *, int32_t, int32_t, Predicate_1_t3581330540 *, const MethodInfo*))List_1_GetIndex_m2041966768_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C"  Enumerator_t1893108603  List_1_GetEnumerator_m2968181593_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2968181593(__this, method) ((  Enumerator_t1893108603  (*) (List_1_t3807325611 *, const MethodInfo*))List_1_GetEnumerator_m2968181593_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m2760414940_gshared (List_1_t3807325611 * __this, KeyValuePair_2_t3010366642  ___item, const MethodInfo* method);
#define List_1_IndexOf_m2760414940(__this, ___item, method) ((  int32_t (*) (List_1_t3807325611 *, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_IndexOf_m2760414940_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m3710681191_gshared (List_1_t3807325611 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m3710681191(__this, ___start, ___delta, method) ((  void (*) (List_1_t3807325611 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m3710681191_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m1003067616_gshared (List_1_t3807325611 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1003067616(__this, ___index, method) ((  void (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1003067616_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m273486983_gshared (List_1_t3807325611 * __this, int32_t ___index, KeyValuePair_2_t3010366642  ___item, const MethodInfo* method);
#define List_1_Insert_m273486983(__this, ___index, ___item, method) ((  void (*) (List_1_t3807325611 *, int32_t, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_Insert_m273486983_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m145884092_gshared (List_1_t3807325611 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m145884092(__this, ___collection, method) ((  void (*) (List_1_t3807325611 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m145884092_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C"  bool List_1_Remove_m4108787479_gshared (List_1_t3807325611 * __this, KeyValuePair_2_t3010366642  ___item, const MethodInfo* method);
#define List_1_Remove_m4108787479(__this, ___item, method) ((  bool (*) (List_1_t3807325611 *, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_Remove_m4108787479_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m504271263_gshared (List_1_t3807325611 * __this, Predicate_1_t3581330540 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m504271263(__this, ___match, method) ((  int32_t (*) (List_1_t3807325611 *, Predicate_1_t3581330540 *, const MethodInfo*))List_1_RemoveAll_m504271263_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2442307149_gshared (List_1_t3807325611 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m2442307149(__this, ___index, method) ((  void (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2442307149_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m2017085552_gshared (List_1_t3807325611 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2017085552(__this, ___index, ___count, method) ((  void (*) (List_1_t3807325611 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2017085552_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C"  void List_1_Reverse_m886467327_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_Reverse_m886467327(__this, method) ((  void (*) (List_1_t3807325611 *, const MethodInfo*))List_1_Reverse_m886467327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C"  void List_1_Sort_m2883702019_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_Sort_m2883702019(__this, method) ((  void (*) (List_1_t3807325611 *, const MethodInfo*))List_1_Sort_m2883702019_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1559553302_gshared (List_1_t3807325611 * __this, Comparison_1_t1419074222 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1559553302(__this, ___comparison, method) ((  void (*) (List_1_t3807325611 *, Comparison_1_t1419074222 *, const MethodInfo*))List_1_Sort_m1559553302_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t1383006279* List_1_ToArray_m179143896_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_ToArray_m179143896(__this, method) ((  KeyValuePair_2U5BU5D_t1383006279* (*) (List_1_t3807325611 *, const MethodInfo*))List_1_ToArray_m179143896_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m1668669020_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1668669020(__this, method) ((  void (*) (List_1_t3807325611 *, const MethodInfo*))List_1_TrimExcess_m1668669020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m1317650700_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1317650700(__this, method) ((  int32_t (*) (List_1_t3807325611 *, const MethodInfo*))List_1_get_Capacity_m1317650700_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m436196461_gshared (List_1_t3807325611 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m436196461(__this, ___value, method) ((  void (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_set_Capacity_m436196461_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C"  int32_t List_1_get_Count_m3785792031_gshared (List_1_t3807325611 * __this, const MethodInfo* method);
#define List_1_get_Count_m3785792031(__this, method) ((  int32_t (*) (List_1_t3807325611 *, const MethodInfo*))List_1_get_Count_m3785792031_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t3010366642  List_1_get_Item_m3299359027_gshared (List_1_t3807325611 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3299359027(__this, ___index, method) ((  KeyValuePair_2_t3010366642  (*) (List_1_t3807325611 *, int32_t, const MethodInfo*))List_1_get_Item_m3299359027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m2637582238_gshared (List_1_t3807325611 * __this, int32_t ___index, KeyValuePair_2_t3010366642  ___value, const MethodInfo* method);
#define List_1_set_Item_m2637582238(__this, ___index, ___value, method) ((  void (*) (List_1_t3807325611 *, int32_t, KeyValuePair_2_t3010366642 , const MethodInfo*))List_1_set_Item_m2637582238_gshared)(__this, ___index, ___value, method)
