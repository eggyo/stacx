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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t1825256430;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t3900451817;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t2511403909;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t1494128847;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t4191442809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t4010590616;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t1599261359;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t3731972337;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297461.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4206006718.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C"  void List_1__ctor_m844343842_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1__ctor_m844343842(__this, method) ((  void (*) (List_1_t1825256430 *, const MethodInfo*))List_1__ctor_m844343842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m1668415773_gshared (List_1_t1825256430 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1668415773(__this, ___collection, method) ((  void (*) (List_1_t1825256430 *, Object_t*, const MethodInfo*))List_1__ctor_m1668415773_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m337198195_gshared (List_1_t1825256430 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m337198195(__this, ___capacity, method) ((  void (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1__ctor_m337198195_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C"  void List_1__cctor_m4217726411_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m4217726411(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m4217726411_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2720479988_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2720479988(__this, method) ((  Object_t* (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2720479988_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m2167522658_gshared (List_1_t1825256430 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m2167522658(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256430 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m2167522658_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1030313181_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1030313181(__this, method) ((  Object_t * (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1030313181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m3679556404_gshared (List_1_t1825256430 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3679556404(__this, ___item, method) ((  int32_t (*) (List_1_t1825256430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3679556404_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m536111896_gshared (List_1_t1825256430 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m536111896(__this, ___item, method) ((  bool (*) (List_1_t1825256430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m536111896_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m2490175372_gshared (List_1_t1825256430 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m2490175372(__this, ___item, method) ((  int32_t (*) (List_1_t1825256430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2490175372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m3832801719_gshared (List_1_t1825256430 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3832801719(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256430 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3832801719_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m726876689_gshared (List_1_t1825256430 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m726876689(__this, ___item, method) ((  void (*) (List_1_t1825256430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m726876689_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3938934041_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3938934041(__this, method) ((  bool (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3938934041_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m2616063300_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m2616063300(__this, method) ((  bool (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m2616063300_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3461759792_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3461759792(__this, method) ((  Object_t * (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3461759792_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m470830215_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m470830215(__this, method) ((  bool (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m470830215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1854670226_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1854670226(__this, method) ((  bool (*) (List_1_t1825256430 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1854670226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m3512084663_gshared (List_1_t1825256430 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3512084663(__this, ___index, method) ((  Object_t * (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3512084663_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m3149431758_gshared (List_1_t1825256430 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3149431758(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256430 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3149431758_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C"  void List_1_Add_m2926873117_gshared (List_1_t1825256430 * __this, KeyValuePair_2_t1028297461  ___item, const MethodInfo* method);
#define List_1_Add_m2926873117(__this, ___item, method) ((  void (*) (List_1_t1825256430 *, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_Add_m2926873117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m2043840472_gshared (List_1_t1825256430 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m2043840472(__this, ___newCount, method) ((  void (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m2043840472_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m2339423503_gshared (List_1_t1825256430 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m2339423503(__this, ___idx, ___count, method) ((  void (*) (List_1_t1825256430 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m2339423503_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m3505225430_gshared (List_1_t1825256430 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m3505225430(__this, ___collection, method) ((  void (*) (List_1_t1825256430 *, Object_t*, const MethodInfo*))List_1_AddCollection_m3505225430_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m2766197654_gshared (List_1_t1825256430 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m2766197654(__this, ___enumerable, method) ((  void (*) (List_1_t1825256430 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m2766197654_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2168698177_gshared (List_1_t1825256430 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2168698177(__this, ___collection, method) ((  void (*) (List_1_t1825256430 *, Object_t*, const MethodInfo*))List_1_AddRange_m2168698177_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4191442809 * List_1_AsReadOnly_m253921736_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m253921736(__this, method) ((  ReadOnlyCollection_1_t4191442809 * (*) (List_1_t1825256430 *, const MethodInfo*))List_1_AsReadOnly_m253921736_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C"  void List_1_Clear_m2545444429_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_Clear_m2545444429(__this, method) ((  void (*) (List_1_t1825256430 *, const MethodInfo*))List_1_Clear_m2545444429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C"  bool List_1_Contains_m669934331_gshared (List_1_t1825256430 * __this, KeyValuePair_2_t1028297461  ___item, const MethodInfo* method);
#define List_1_Contains_m669934331(__this, ___item, method) ((  bool (*) (List_1_t1825256430 *, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_Contains_m669934331_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m1805190349_gshared (List_1_t1825256430 * __this, KeyValuePair_2U5BU5D_t4010590616* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1805190349(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256430 *, KeyValuePair_2U5BU5D_t4010590616*, int32_t, const MethodInfo*))List_1_CopyTo_m1805190349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t1028297461  List_1_Find_m2733870331_gshared (List_1_t1825256430 * __this, Predicate_1_t1599261359 * ___match, const MethodInfo* method);
#define List_1_Find_m2733870331(__this, ___match, method) ((  KeyValuePair_2_t1028297461  (*) (List_1_t1825256430 *, Predicate_1_t1599261359 *, const MethodInfo*))List_1_Find_m2733870331_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m3277664438_gshared (Object_t * __this /* static, unused */, Predicate_1_t1599261359 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m3277664438(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1599261359 *, const MethodInfo*))List_1_CheckMatch_m3277664438_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m1644921307_gshared (List_1_t1825256430 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1599261359 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1644921307(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1825256430 *, int32_t, int32_t, Predicate_1_t1599261359 *, const MethodInfo*))List_1_GetIndex_m1644921307_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C"  Enumerator_t4206006718  List_1_GetEnumerator_m358539960_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m358539960(__this, method) ((  Enumerator_t4206006718  (*) (List_1_t1825256430 *, const MethodInfo*))List_1_GetEnumerator_m358539960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m341068049_gshared (List_1_t1825256430 * __this, KeyValuePair_2_t1028297461  ___item, const MethodInfo* method);
#define List_1_IndexOf_m341068049(__this, ___item, method) ((  int32_t (*) (List_1_t1825256430 *, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_IndexOf_m341068049_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m4219059748_gshared (List_1_t1825256430 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m4219059748(__this, ___start, ___delta, method) ((  void (*) (List_1_t1825256430 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m4219059748_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m1551557533_gshared (List_1_t1825256430 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1551557533(__this, ___index, method) ((  void (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1551557533_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m962325124_gshared (List_1_t1825256430 * __this, int32_t ___index, KeyValuePair_2_t1028297461  ___item, const MethodInfo* method);
#define List_1_Insert_m962325124(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256430 *, int32_t, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_Insert_m962325124_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m1793946617_gshared (List_1_t1825256430 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1793946617(__this, ___collection, method) ((  void (*) (List_1_t1825256430 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1793946617_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C"  bool List_1_Remove_m1640342966_gshared (List_1_t1825256430 * __this, KeyValuePair_2_t1028297461  ___item, const MethodInfo* method);
#define List_1_Remove_m1640342966(__this, ___item, method) ((  bool (*) (List_1_t1825256430 *, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_Remove_m1640342966_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m2892856852_gshared (List_1_t1825256430 * __this, Predicate_1_t1599261359 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m2892856852(__this, ___match, method) ((  int32_t (*) (List_1_t1825256430 *, Predicate_1_t1599261359 *, const MethodInfo*))List_1_RemoveAll_m2892856852_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3131145290_gshared (List_1_t1825256430 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3131145290(__this, ___index, method) ((  void (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3131145290_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m3537863789_gshared (List_1_t1825256430 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m3537863789(__this, ___index, ___count, method) ((  void (*) (List_1_t1825256430 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m3537863789_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C"  void List_1_Reverse_m3998391778_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_Reverse_m3998391778(__this, method) ((  void (*) (List_1_t1825256430 *, const MethodInfo*))List_1_Reverse_m3998391778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C"  void List_1_Sort_m3452845312_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_Sort_m3452845312(__this, method) ((  void (*) (List_1_t1825256430 *, const MethodInfo*))List_1_Sort_m3452845312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m3663235411_gshared (List_1_t1825256430 * __this, Comparison_1_t3731972337 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m3663235411(__this, ___comparison, method) ((  void (*) (List_1_t1825256430 *, Comparison_1_t3731972337 *, const MethodInfo*))List_1_Sort_m3663235411_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t4010590616* List_1_ToArray_m3078560225_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_ToArray_m3078560225(__this, method) ((  KeyValuePair_2U5BU5D_t4010590616* (*) (List_1_t1825256430 *, const MethodInfo*))List_1_ToArray_m3078560225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m2140904601_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m2140904601(__this, method) ((  void (*) (List_1_t1825256430 *, const MethodInfo*))List_1_TrimExcess_m2140904601_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m2954318017_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2954318017(__this, method) ((  int32_t (*) (List_1_t1825256430 *, const MethodInfo*))List_1_get_Capacity_m2954318017_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m3548996586_gshared (List_1_t1825256430 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m3548996586(__this, ___value, method) ((  void (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_set_Capacity_m3548996586_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C"  int32_t List_1_get_Count_m1800482442_gshared (List_1_t1825256430 * __this, const MethodInfo* method);
#define List_1_get_Count_m1800482442(__this, method) ((  int32_t (*) (List_1_t1825256430 *, const MethodInfo*))List_1_get_Count_m1800482442_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t1028297461  List_1_get_Item_m2679864526_gshared (List_1_t1825256430 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m2679864526(__this, ___index, method) ((  KeyValuePair_2_t1028297461  (*) (List_1_t1825256430 *, int32_t, const MethodInfo*))List_1_get_Item_m2679864526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m3186072155_gshared (List_1_t1825256430 * __this, int32_t ___index, KeyValuePair_2_t1028297461  ___value, const MethodInfo* method);
#define List_1_set_Item_m3186072155(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256430 *, int32_t, KeyValuePair_2_t1028297461 , const MethodInfo*))List_1_set_Item_m3186072155_gshared)(__this, ___index, ___value, method)
