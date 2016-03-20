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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t4258734418;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t2038962509;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t649914601;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t3927606835;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t2329953501;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t1411522084;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t4032739347;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t1870483029;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775449.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2344517410.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C"  void List_1__ctor_m2588354680_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1__ctor_m2588354680(__this, method) ((  void (*) (List_1_t4258734418 *, const MethodInfo*))List_1__ctor_m2588354680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m2028415239_gshared (List_1_t4258734418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m2028415239(__this, ___collection, method) ((  void (*) (List_1_t4258734418 *, Object_t*, const MethodInfo*))List_1__ctor_m2028415239_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3301173705_gshared (List_1_t4258734418 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3301173705(__this, ___capacity, method) ((  void (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1__ctor_m3301173705_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C"  void List_1__cctor_m2447487541_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m2447487541(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m2447487541_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2914037122_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2914037122(__this, method) ((  Object_t* (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2914037122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m4121283532_gshared (List_1_t4258734418 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m4121283532(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4258734418 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m4121283532_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1316394843_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1316394843(__this, method) ((  Object_t * (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1316394843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m3906646082_gshared (List_1_t4258734418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3906646082(__this, ___item, method) ((  int32_t (*) (List_1_t4258734418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3906646082_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m2148750526_gshared (List_1_t4258734418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m2148750526(__this, ___item, method) ((  bool (*) (List_1_t4258734418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2148750526_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m1323627930_gshared (List_1_t4258734418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1323627930(__this, ___item, method) ((  int32_t (*) (List_1_t4258734418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1323627930_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m2650540301_gshared (List_1_t4258734418 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m2650540301(__this, ___index, ___item, method) ((  void (*) (List_1_t4258734418 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2650540301_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m2291986171_gshared (List_1_t4258734418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m2291986171(__this, ___item, method) ((  void (*) (List_1_t4258734418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2291986171_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4033015615_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4033015615(__this, method) ((  bool (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4033015615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m1229316574_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1229316574(__this, method) ((  bool (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1229316574_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m2790560400_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m2790560400(__this, method) ((  Object_t * (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m2790560400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m292612781_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m292612781(__this, method) ((  bool (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m292612781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1294731948_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1294731948(__this, method) ((  bool (*) (List_1_t4258734418 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1294731948_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m2734563351_gshared (List_1_t4258734418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m2734563351(__this, ___index, method) ((  Object_t * (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2734563351_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m867575204_gshared (List_1_t4258734418 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m867575204(__this, ___index, ___value, method) ((  void (*) (List_1_t4258734418 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m867575204_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C"  void List_1_Add_m2844584199_gshared (List_1_t4258734418 * __this, KeyValuePair_2_t3461775449  ___item, const MethodInfo* method);
#define List_1_Add_m2844584199(__this, ___item, method) ((  void (*) (List_1_t4258734418 *, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_Add_m2844584199_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m2799717826_gshared (List_1_t4258734418 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m2799717826(__this, ___newCount, method) ((  void (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m2799717826_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m1625753829_gshared (List_1_t4258734418 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m1625753829(__this, ___idx, ___count, method) ((  void (*) (List_1_t4258734418 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m1625753829_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m2497256640_gshared (List_1_t4258734418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m2497256640(__this, ___collection, method) ((  void (*) (List_1_t4258734418 *, Object_t*, const MethodInfo*))List_1_AddCollection_m2497256640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m1758228864_gshared (List_1_t4258734418 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1758228864(__this, ___enumerable, method) ((  void (*) (List_1_t4258734418 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1758228864_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m2379451671_gshared (List_1_t4258734418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2379451671(__this, ___collection, method) ((  void (*) (List_1_t4258734418 *, Object_t*, const MethodInfo*))List_1_AddRange_m2379451671_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t2329953501 * List_1_AsReadOnly_m1026684814_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1026684814(__this, method) ((  ReadOnlyCollection_1_t2329953501 * (*) (List_1_t4258734418 *, const MethodInfo*))List_1_AsReadOnly_m1026684814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C"  void List_1_Clear_m4289455267_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_Clear_m4289455267(__this, method) ((  void (*) (List_1_t4258734418 *, const MethodInfo*))List_1_Clear_m4289455267_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C"  bool List_1_Contains_m4002574741_gshared (List_1_t4258734418 * __this, KeyValuePair_2_t3461775449  ___item, const MethodInfo* method);
#define List_1_Contains_m4002574741(__this, ___item, method) ((  bool (*) (List_1_t4258734418 *, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_Contains_m4002574741_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m1582513463_gshared (List_1_t4258734418 * __this, KeyValuePair_2U5BU5D_t1411522084* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1582513463(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4258734418 *, KeyValuePair_2U5BU5D_t1411522084*, int32_t, const MethodInfo*))List_1_CopyTo_m1582513463_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t3461775449  List_1_Find_m424222511_gshared (List_1_t4258734418 * __this, Predicate_1_t4032739347 * ___match, const MethodInfo* method);
#define List_1_Find_m424222511(__this, ___match, method) ((  KeyValuePair_2_t3461775449  (*) (List_1_t4258734418 *, Predicate_1_t4032739347 *, const MethodInfo*))List_1_Find_m424222511_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m2030751628_gshared (Object_t * __this /* static, unused */, Predicate_1_t4032739347 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m2030751628(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t4032739347 *, const MethodInfo*))List_1_CheckMatch_m2030751628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m1356705385_gshared (List_1_t4258734418 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4032739347 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1356705385(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t4258734418 *, int32_t, int32_t, Predicate_1_t4032739347 *, const MethodInfo*))List_1_GetIndex_m1356705385_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C"  Enumerator_t2344517410  List_1_GetEnumerator_m2142429266_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2142429266(__this, method) ((  Enumerator_t2344517410  (*) (List_1_t4258734418 *, const MethodInfo*))List_1_GetEnumerator_m2142429266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m53320259_gshared (List_1_t4258734418 * __this, KeyValuePair_2_t3461775449  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53320259(__this, ___item, method) ((  int32_t (*) (List_1_t4258734418 *, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_IndexOf_m53320259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m4040289422_gshared (List_1_t4258734418 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m4040289422(__this, ___start, ___delta, method) ((  void (*) (List_1_t4258734418 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m4040289422_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m1328880647_gshared (List_1_t4258734418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1328880647(__this, ___index, method) ((  void (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1328880647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m524105070_gshared (List_1_t4258734418 * __this, int32_t ___index, KeyValuePair_2_t3461775449  ___item, const MethodInfo* method);
#define List_1_Insert_m524105070(__this, ___index, ___item, method) ((  void (*) (List_1_t4258734418 *, int32_t, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_Insert_m524105070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m3798548323_gshared (List_1_t4258734418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m3798548323(__this, ___collection, method) ((  void (*) (List_1_t4258734418 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m3798548323_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C"  bool List_1_Remove_m3882914512_gshared (List_1_t4258734418 * __this, KeyValuePair_2_t3461775449  ___item, const MethodInfo* method);
#define List_1_Remove_m3882914512(__this, ___item, method) ((  bool (*) (List_1_t4258734418 *, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_Remove_m3882914512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m833879494_gshared (List_1_t4258734418 * __this, Predicate_1_t4032739347 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m833879494(__this, ___match, method) ((  int32_t (*) (List_1_t4258734418 *, Predicate_1_t4032739347 *, const MethodInfo*))List_1_RemoveAll_m833879494_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2692925236_gshared (List_1_t4258734418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m2692925236(__this, ___index, method) ((  void (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_RemoveAt_m2692925236_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m2888940375_gshared (List_1_t4258734418 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2888940375(__this, ___index, ___count, method) ((  void (*) (List_1_t4258734418 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2888940375_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C"  void List_1_Reverse_m660594360_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_Reverse_m660594360(__this, method) ((  void (*) (List_1_t4258734418 *, const MethodInfo*))List_1_Reverse_m660594360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C"  void List_1_Sort_m3370556394_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_Sort_m3370556394(__this, method) ((  void (*) (List_1_t4258734418 *, const MethodInfo*))List_1_Sort_m3370556394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m4211899581_gshared (List_1_t4258734418 * __this, Comparison_1_t1870483029 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m4211899581(__this, ___comparison, method) ((  void (*) (List_1_t4258734418 *, Comparison_1_t1870483029 *, const MethodInfo*))List_1_Sort_m4211899581_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t1411522084* List_1_ToArray_m4248238225_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_ToArray_m4248238225(__this, method) ((  KeyValuePair_2U5BU5D_t1411522084* (*) (List_1_t4258734418 *, const MethodInfo*))List_1_ToArray_m4248238225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m2900861955_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m2900861955(__this, method) ((  void (*) (List_1_t4258734418 *, const MethodInfo*))List_1_TrimExcess_m2900861955_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m44087539_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m44087539(__this, method) ((  int32_t (*) (List_1_t4258734418 *, const MethodInfo*))List_1_get_Capacity_m44087539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m9906644_gshared (List_1_t4258734418 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9906644(__this, ___value, method) ((  void (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9906644_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C"  int32_t List_1_get_Count_m1470235544_gshared (List_1_t4258734418 * __this, const MethodInfo* method);
#define List_1_get_Count_m1470235544(__this, method) ((  int32_t (*) (List_1_t4258734418 *, const MethodInfo*))List_1_get_Count_m1470235544_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t3461775449  List_1_get_Item_m3549977114_gshared (List_1_t4258734418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3549977114(__this, ___index, method) ((  KeyValuePair_2_t3461775449  (*) (List_1_t4258734418 *, int32_t, const MethodInfo*))List_1_get_Item_m3549977114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m2963395269_gshared (List_1_t4258734418 * __this, int32_t ___index, KeyValuePair_2_t3461775449  ___value, const MethodInfo* method);
#define List_1_set_Item_m2963395269(__this, ___index, ___value, method) ((  void (*) (List_1_t4258734418 *, int32_t, KeyValuePair_2_t3461775449 , const MethodInfo*))List_1_set_Item_m2963395269_gshared)(__this, ___index, ___value, method)
