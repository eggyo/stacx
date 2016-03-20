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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t1756535522;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t3831730909;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2442683001;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t1425407939;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t4122721901;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t393231444;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t1530540451;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t3663251429;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_959576553.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4137285810.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C"  void List_1__ctor_m2487698472_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1__ctor_m2487698472(__this, method) ((  void (*) (List_1_t1756535522 *, const MethodInfo*))List_1__ctor_m2487698472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m814522199_gshared (List_1_t1756535522 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m814522199(__this, ___collection, method) ((  void (*) (List_1_t1756535522 *, Object_t*, const MethodInfo*))List_1__ctor_m814522199_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2324168057_gshared (List_1_t1756535522 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2324168057(__this, ___capacity, method) ((  void (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1__ctor_m2324168057_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C"  void List_1__cctor_m3622112389_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m3622112389(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m3622112389_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1046090802_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1046090802(__this, method) ((  Object_t* (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1046090802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m538310172_gshared (List_1_t1756535522 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m538310172(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1756535522 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m538310172_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m4098275371_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m4098275371(__this, method) ((  Object_t * (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m4098275371_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m2946484978_gshared (List_1_t1756535522 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m2946484978(__this, ___item, method) ((  int32_t (*) (List_1_t1756535522 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m2946484978_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m1618409102_gshared (List_1_t1756535522 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1618409102(__this, ___item, method) ((  bool (*) (List_1_t1756535522 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1618409102_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m2738698314_gshared (List_1_t1756535522 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m2738698314(__this, ___item, method) ((  int32_t (*) (List_1_t1756535522 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2738698314_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m3775835325_gshared (List_1_t1756535522 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3775835325(__this, ___index, ___item, method) ((  void (*) (List_1_t1756535522 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3775835325_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m1536822603_gshared (List_1_t1756535522 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1536822603(__this, ___item, method) ((  void (*) (List_1_t1756535522 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1536822603_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3208809743_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3208809743(__this, method) ((  bool (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3208809743_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m3012636174_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3012636174(__this, method) ((  bool (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3012636174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m440779648_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m440779648(__this, method) ((  Object_t * (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m440779648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m1717971069_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1717971069(__this, method) ((  bool (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1717971069_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1756353244_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1756353244(__this, method) ((  bool (*) (List_1_t1756535522 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1756353244_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m3748058375_gshared (List_1_t1756535522 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3748058375(__this, ___index, method) ((  Object_t * (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3748058375_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m4239301972_gshared (List_1_t1756535522 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m4239301972(__this, ___index, ___value, method) ((  void (*) (List_1_t1756535522 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m4239301972_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C"  void List_1_Add_m1178769239_gshared (List_1_t1756535522 * __this, KeyValuePair_2_t959576553  ___item, const MethodInfo* method);
#define List_1_Add_m1178769239(__this, ___item, method) ((  void (*) (List_1_t1756535522 *, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_Add_m1178769239_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m3183457298_gshared (List_1_t1756535522 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m3183457298(__this, ___newCount, method) ((  void (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m3183457298_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m3356463253_gshared (List_1_t1756535522 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m3356463253(__this, ___idx, ___count, method) ((  void (*) (List_1_t1756535522 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m3356463253_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m3087745808_gshared (List_1_t1756535522 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m3087745808(__this, ___collection, method) ((  void (*) (List_1_t1756535522 *, Object_t*, const MethodInfo*))List_1_AddCollection_m3087745808_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m2348718032_gshared (List_1_t1756535522 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m2348718032(__this, ___enumerable, method) ((  void (*) (List_1_t1756535522 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m2348718032_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2916529351_gshared (List_1_t1756535522 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2916529351(__this, ___collection, method) ((  void (*) (List_1_t1756535522 *, Object_t*, const MethodInfo*))List_1_AddRange_m2916529351_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4122721901 * List_1_AsReadOnly_m3109283166_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m3109283166(__this, method) ((  ReadOnlyCollection_1_t4122721901 * (*) (List_1_t1756535522 *, const MethodInfo*))List_1_AsReadOnly_m3109283166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C"  void List_1_Clear_m4188799059_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_Clear_m4188799059(__this, method) ((  void (*) (List_1_t1756535522 *, const MethodInfo*))List_1_Clear_m4188799059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C"  bool List_1_Contains_m2344725957_gshared (List_1_t1756535522 * __this, KeyValuePair_2_t959576553  ___item, const MethodInfo* method);
#define List_1_Contains_m2344725957(__this, ___item, method) ((  bool (*) (List_1_t1756535522 *, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_Contains_m2344725957_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m729282439_gshared (List_1_t1756535522 * __this, KeyValuePair_2U5BU5D_t393231444* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m729282439(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1756535522 *, KeyValuePair_2U5BU5D_t393231444*, int32_t, const MethodInfo*))List_1_CopyTo_m729282439_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t959576553  List_1_Find_m4116993695_gshared (List_1_t1756535522 * __this, Predicate_1_t1530540451 * ___match, const MethodInfo* method);
#define List_1_Find_m4116993695(__this, ___match, method) ((  KeyValuePair_2_t959576553  (*) (List_1_t1756535522 *, Predicate_1_t1530540451 *, const MethodInfo*))List_1_Find_m4116993695_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m3884625724_gshared (Object_t * __this /* static, unused */, Predicate_1_t1530540451 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m3884625724(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1530540451 *, const MethodInfo*))List_1_CheckMatch_m3884625724_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m1787188505_gshared (List_1_t1756535522 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1530540451 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1787188505(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1756535522 *, int32_t, int32_t, Predicate_1_t1530540451 *, const MethodInfo*))List_1_GetIndex_m1787188505_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C"  Enumerator_t4137285810  List_1_GetEnumerator_m340919426_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m340919426(__this, method) ((  Enumerator_t4137285810  (*) (List_1_t1756535522 *, const MethodInfo*))List_1_GetEnumerator_m340919426_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m3616778643_gshared (List_1_t1756535522 * __this, KeyValuePair_2_t959576553  ___item, const MethodInfo* method);
#define List_1_IndexOf_m3616778643(__this, ___item, method) ((  int32_t (*) (List_1_t1756535522 *, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_IndexOf_m3616778643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m1744787166_gshared (List_1_t1756535522 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1744787166(__this, ___start, ___delta, method) ((  void (*) (List_1_t1756535522 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1744787166_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m475649623_gshared (List_1_t1756535522 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m475649623(__this, ___index, method) ((  void (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_CheckIndex_m475649623_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m1542210494_gshared (List_1_t1756535522 * __this, int32_t ___index, KeyValuePair_2_t959576553  ___item, const MethodInfo* method);
#define List_1_Insert_m1542210494(__this, ___index, ___item, method) ((  void (*) (List_1_t1756535522 *, int32_t, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_Insert_m1542210494_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m27988403_gshared (List_1_t1756535522 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27988403(__this, ___collection, method) ((  void (*) (List_1_t1756535522 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27988403_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C"  bool List_1_Remove_m2392922880_gshared (List_1_t1756535522 * __this, KeyValuePair_2_t959576553  ___item, const MethodInfo* method);
#define List_1_Remove_m2392922880(__this, ___item, method) ((  bool (*) (List_1_t1756535522 *, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_Remove_m2392922880_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m756330774_gshared (List_1_t1756535522 * __this, Predicate_1_t1530540451 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m756330774(__this, ___match, method) ((  int32_t (*) (List_1_t1756535522 *, Predicate_1_t1530540451 *, const MethodInfo*))List_1_RemoveAll_m756330774_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3711030660_gshared (List_1_t1756535522 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3711030660(__this, ___index, method) ((  void (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3711030660_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m706357671_gshared (List_1_t1756535522 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m706357671(__this, ___index, ___count, method) ((  void (*) (List_1_t1756535522 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m706357671_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C"  void List_1_Reverse_m2714226280_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_Reverse_m2714226280(__this, method) ((  void (*) (List_1_t1756535522 *, const MethodInfo*))List_1_Reverse_m2714226280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C"  void List_1_Sort_m1704741434_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_Sort_m1704741434(__this, method) ((  void (*) (List_1_t1756535522 *, const MethodInfo*))List_1_Sort_m1704741434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m3618344717_gshared (List_1_t1756535522 * __this, Comparison_1_t3663251429 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m3618344717(__this, ___comparison, method) ((  void (*) (List_1_t1756535522 *, Comparison_1_t3663251429 *, const MethodInfo*))List_1_Sort_m3618344717_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t393231444* List_1_ToArray_m402066305_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_ToArray_m402066305(__this, method) ((  KeyValuePair_2U5BU5D_t393231444* (*) (List_1_t1756535522 *, const MethodInfo*))List_1_ToArray_m402066305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m840259155_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m840259155(__this, method) ((  void (*) (List_1_t1756535522 *, const MethodInfo*))List_1_TrimExcess_m840259155_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m198090819_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m198090819(__this, method) ((  int32_t (*) (List_1_t1756535522 *, const MethodInfo*))List_1_get_Capacity_m198090819_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m393646116_gshared (List_1_t1756535522 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m393646116(__this, ___value, method) ((  void (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_set_Capacity_m393646116_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C"  int32_t List_1_get_Count_m268295752_gshared (List_1_t1756535522 * __this, const MethodInfo* method);
#define List_1_get_Count_m268295752(__this, method) ((  int32_t (*) (List_1_t1756535522 *, const MethodInfo*))List_1_get_Count_m268295752_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t959576553  List_1_get_Item_m4048829610_gshared (List_1_t1756535522 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m4048829610(__this, ___index, method) ((  KeyValuePair_2_t959576553  (*) (List_1_t1756535522 *, int32_t, const MethodInfo*))List_1_get_Item_m4048829610_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m2110164245_gshared (List_1_t1756535522 * __this, int32_t ___index, KeyValuePair_2_t959576553  ___value, const MethodInfo* method);
#define List_1_set_Item_m2110164245(__this, ___index, ___value, method) ((  void (*) (List_1_t1756535522 *, int32_t, KeyValuePair_2_t959576553 , const MethodInfo*))List_1_set_Item_m2110164245_gshared)(__this, ___index, ___value, method)
