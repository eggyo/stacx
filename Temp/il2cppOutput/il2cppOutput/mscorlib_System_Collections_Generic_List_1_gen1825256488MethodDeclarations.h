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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t1825256488;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t3900451875;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2511403967;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t1494128905;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t4191442867;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2144708406;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t1599261417;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t3731972395;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4206006776.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C"  void List_1__ctor_m4036174248_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1__ctor_m4036174248(__this, method) ((  void (*) (List_1_t1825256488 *, const MethodInfo*))List_1__ctor_m4036174248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m3230486999_gshared (List_1_t1825256488 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3230486999(__this, ___collection, method) ((  void (*) (List_1_t1825256488 *, Object_t*, const MethodInfo*))List_1__ctor_m3230486999_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m745773817_gshared (List_1_t1825256488 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m745773817(__this, ___capacity, method) ((  void (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1__ctor_m745773817_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C"  void List_1__cctor_m85253893_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m85253893(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m85253893_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m944538874_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m944538874(__this, method) ((  Object_t* (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m944538874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m766265500_gshared (List_1_t1825256488 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m766265500(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256488 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m766265500_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m2330858135_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m2330858135(__this, method) ((  Object_t * (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2330858135_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m4080680890_gshared (List_1_t1825256488 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m4080680890(__this, ___item, method) ((  int32_t (*) (List_1_t1825256488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m4080680890_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m524329554_gshared (List_1_t1825256488 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m524329554(__this, ___item, method) ((  bool (*) (List_1_t1825256488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m524329554_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m4152363282_gshared (List_1_t1825256488 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m4152363282(__this, ___item, method) ((  int32_t (*) (List_1_t1825256488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m4152363282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m2255407677_gshared (List_1_t1825256488 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m2255407677(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2255407677_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m2027421643_gshared (List_1_t1825256488 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m2027421643(__this, ___item, method) ((  void (*) (List_1_t1825256488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2027421643_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m424367059_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m424367059(__this, method) ((  bool (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m424367059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m3795631050_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3795631050(__this, method) ((  bool (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3795631050_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m2395334198_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m2395334198(__this, method) ((  Object_t * (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2395334198_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m3116169025_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3116169025(__this, method) ((  bool (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3116169025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1940003736_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1940003736(__this, method) ((  bool (*) (List_1_t1825256488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1940003736_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m879305277_gshared (List_1_t1825256488 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m879305277(__this, ___index, method) ((  Object_t * (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m879305277_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m3397212884_gshared (List_1_t1825256488 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3397212884(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3397212884_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C"  void List_1_Add_m1782909399_gshared (List_1_t1825256488 * __this, KeyValuePair_2_t1028297519  ___item, const MethodInfo* method);
#define List_1_Add_m1782909399(__this, ___item, method) ((  void (*) (List_1_t1825256488 *, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_Add_m1782909399_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m915400338_gshared (List_1_t1825256488 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m915400338(__this, ___newCount, method) ((  void (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m915400338_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m945737237_gshared (List_1_t1825256488 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m945737237(__this, ___idx, ___count, method) ((  void (*) (List_1_t1825256488 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m945737237_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m4285625744_gshared (List_1_t1825256488 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m4285625744(__this, ___collection, method) ((  void (*) (List_1_t1825256488 *, Object_t*, const MethodInfo*))List_1_AddCollection_m4285625744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m3546597968_gshared (List_1_t1825256488 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m3546597968(__this, ___enumerable, method) ((  void (*) (List_1_t1825256488 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m3546597968_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m1861939783_gshared (List_1_t1825256488 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1861939783(__this, ___collection, method) ((  void (*) (List_1_t1825256488 *, Object_t*, const MethodInfo*))List_1_AddRange_m1861939783_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4191442867 * List_1_AsReadOnly_m1436472834_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1436472834(__this, method) ((  ReadOnlyCollection_1_t4191442867 * (*) (List_1_t1825256488 *, const MethodInfo*))List_1_AsReadOnly_m1436472834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C"  void List_1_Clear_m1442307539_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_Clear_m1442307539(__this, method) ((  void (*) (List_1_t1825256488 *, const MethodInfo*))List_1_Clear_m1442307539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C"  bool List_1_Contains_m1123723137_gshared (List_1_t1825256488 * __this, KeyValuePair_2_t1028297519  ___item, const MethodInfo* method);
#define List_1_Contains_m1123723137(__this, ___item, method) ((  bool (*) (List_1_t1825256488 *, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_Contains_m1123723137_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m3350383111_gshared (List_1_t1825256488 * __this, KeyValuePair_2U5BU5D_t2144708406* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m3350383111(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256488 *, KeyValuePair_2U5BU5D_t2144708406*, int32_t, const MethodInfo*))List_1_CopyTo_m3350383111_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t1028297519  List_1_Find_m2111964545_gshared (List_1_t1825256488 * __this, Predicate_1_t1599261417 * ___match, const MethodInfo* method);
#define List_1_Find_m2111964545(__this, ___match, method) ((  KeyValuePair_2_t1028297519  (*) (List_1_t1825256488 *, Predicate_1_t1599261417 *, const MethodInfo*))List_1_Find_m2111964545_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m3491015868_gshared (Object_t * __this /* static, unused */, Predicate_1_t1599261417 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m3491015868(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1599261417 *, const MethodInfo*))List_1_CheckMatch_m3491015868_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m4163947489_gshared (List_1_t1825256488 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1599261417 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m4163947489(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1825256488 *, int32_t, int32_t, Predicate_1_t1599261417 *, const MethodInfo*))List_1_GetIndex_m4163947489_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C"  Enumerator_t4206006776  List_1_GetEnumerator_m2416538686_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2416538686(__this, method) ((  Enumerator_t4206006776  (*) (List_1_t1825256488 *, const MethodInfo*))List_1_GetEnumerator_m2416538686_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m1879727051_gshared (List_1_t1825256488 * __this, KeyValuePair_2_t1028297519  ___item, const MethodInfo* method);
#define List_1_IndexOf_m1879727051(__this, ___item, method) ((  int32_t (*) (List_1_t1825256488 *, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_IndexOf_m1879727051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m1870637406_gshared (List_1_t1825256488 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1870637406(__this, ___start, ___delta, method) ((  void (*) (List_1_t1825256488 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1870637406_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m3096750295_gshared (List_1_t1825256488 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m3096750295(__this, ___index, method) ((  void (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_CheckIndex_m3096750295_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m901363262_gshared (List_1_t1825256488 * __this, int32_t ___index, KeyValuePair_2_t1028297519  ___item, const MethodInfo* method);
#define List_1_Insert_m901363262(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256488 *, int32_t, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_Insert_m901363262_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m139371571_gshared (List_1_t1825256488 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m139371571(__this, ___collection, method) ((  void (*) (List_1_t1825256488 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m139371571_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C"  bool List_1_Remove_m2382713788_gshared (List_1_t1825256488 * __this, KeyValuePair_2_t1028297519  ___item, const MethodInfo* method);
#define List_1_Remove_m2382713788(__this, ___item, method) ((  bool (*) (List_1_t1825256488 *, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_Remove_m2382713788_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m544434510_gshared (List_1_t1825256488 * __this, Predicate_1_t1599261417 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m544434510(__this, ___match, method) ((  int32_t (*) (List_1_t1825256488 *, Predicate_1_t1599261417 *, const MethodInfo*))List_1_RemoveAll_m544434510_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3070183428_gshared (List_1_t1825256488 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3070183428(__this, ___index, method) ((  void (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3070183428_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m3283262503_gshared (List_1_t1825256488 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m3283262503(__this, ___index, ___count, method) ((  void (*) (List_1_t1825256488 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m3283262503_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C"  void List_1_Reverse_m445795304_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_Reverse_m445795304(__this, method) ((  void (*) (List_1_t1825256488 *, const MethodInfo*))List_1_Reverse_m445795304_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C"  void List_1_Sort_m2308881594_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_Sort_m2308881594(__this, method) ((  void (*) (List_1_t1825256488 *, const MethodInfo*))List_1_Sort_m2308881594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1564025229_gshared (List_1_t1825256488 * __this, Comparison_1_t3731972395 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1564025229(__this, ___comparison, method) ((  void (*) (List_1_t1825256488 *, Comparison_1_t3731972395 *, const MethodInfo*))List_1_Sort_m1564025229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t2144708406* List_1_ToArray_m3820931047_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_ToArray_m3820931047(__this, method) ((  KeyValuePair_2U5BU5D_t2144708406* (*) (List_1_t1825256488 *, const MethodInfo*))List_1_ToArray_m3820931047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m3323455699_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m3323455699(__this, method) ((  void (*) (List_1_t1825256488 *, const MethodInfo*))List_1_TrimExcess_m3323455699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m1219589755_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1219589755(__this, method) ((  int32_t (*) (List_1_t1825256488 *, const MethodInfo*))List_1_get_Capacity_m1219589755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m2420556452_gshared (List_1_t1825256488 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m2420556452(__this, ___value, method) ((  void (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_set_Capacity_m2420556452_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C"  int32_t List_1_get_Count_m2254271248_gshared (List_1_t1825256488 * __this, const MethodInfo* method);
#define List_1_get_Count_m2254271248(__this, method) ((  int32_t (*) (List_1_t1825256488 *, const MethodInfo*))List_1_get_Count_m2254271248_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t1028297519  List_1_get_Item_m2618902664_gshared (List_1_t1825256488 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m2618902664(__this, ___index, method) ((  KeyValuePair_2_t1028297519  (*) (List_1_t1825256488 *, int32_t, const MethodInfo*))List_1_get_Item_m2618902664_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m436297621_gshared (List_1_t1825256488 * __this, int32_t ___index, KeyValuePair_2_t1028297519  ___value, const MethodInfo* method);
#define List_1_set_Item_m436297621(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256488 *, int32_t, KeyValuePair_2_t1028297519 , const MethodInfo*))List_1_set_Item_m436297621_gshared)(__this, ___index, ___value, method)
