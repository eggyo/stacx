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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t4258734323;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t2038962414;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t649914506;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t3927606740;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t2329953406;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t2468327135;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t4032739252;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t1870482934;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23461775354.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2344517315.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C"  void List_1__ctor_m3210398263_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1__ctor_m3210398263(__this, method) ((  void (*) (List_1_t4258734323 *, const MethodInfo*))List_1__ctor_m3210398263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m580617704_gshared (List_1_t4258734323 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m580617704(__this, ___collection, method) ((  void (*) (List_1_t4258734323 *, Object_t*, const MethodInfo*))List_1__ctor_m580617704_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m1076880648_gshared (List_1_t4258734323 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1076880648(__this, ___capacity, method) ((  void (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1__ctor_m1076880648_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C"  void List_1__cctor_m256002134_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m256002134(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m256002134_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2860859777_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2860859777(__this, method) ((  Object_t* (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2860859777_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m1751223021_gshared (List_1_t4258734323 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1751223021(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4258734323 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1751223021_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1037470908_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1037470908(__this, method) ((  Object_t * (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1037470908_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m1990762113_gshared (List_1_t4258734323 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1990762113(__this, ___item, method) ((  int32_t (*) (List_1_t4258734323 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1990762113_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m390821343_gshared (List_1_t4258734323 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m390821343(__this, ___item, method) ((  bool (*) (List_1_t4258734323 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m390821343_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m1266920537_gshared (List_1_t4258734323 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1266920537(__this, ___item, method) ((  int32_t (*) (List_1_t4258734323 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1266920537_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m3086719308_gshared (List_1_t4258734323 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3086719308(__this, ___index, ___item, method) ((  void (*) (List_1_t4258734323 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3086719308_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m2013062236_gshared (List_1_t4258734323 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m2013062236(__this, ___item, method) ((  void (*) (List_1_t4258734323 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2013062236_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2384517920_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2384517920(__this, method) ((  bool (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2384517920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m3592233245_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3592233245(__this, method) ((  bool (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3592233245_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m4167036175_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m4167036175(__this, method) ((  Object_t * (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m4167036175_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m2031925390_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m2031925390(__this, method) ((  bool (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m2031925390_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m2043575467_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m2043575467(__this, method) ((  bool (*) (List_1_t4258734323 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m2043575467_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m2677855958_gshared (List_1_t4258734323 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m2677855958(__this, ___index, method) ((  Object_t * (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m2677855958_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m3423773219_gshared (List_1_t4258734323 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3423773219(__this, ___index, ___value, method) ((  void (*) (List_1_t4258734323 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3423773219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C"  void List_1_Add_m1756271464_gshared (List_1_t4258734323 * __this, KeyValuePair_2_t3461775354  ___item, const MethodInfo* method);
#define List_1_Add_m1756271464(__this, ___item, method) ((  void (*) (List_1_t4258734323 *, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_Add_m1756271464_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m3833462179_gshared (List_1_t4258734323 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m3833462179(__this, ___newCount, method) ((  void (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m3833462179_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m2723697252_gshared (List_1_t4258734323 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m2723697252(__this, ___idx, ___count, method) ((  void (*) (List_1_t4258734323 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m2723697252_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m848758945_gshared (List_1_t4258734323 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m848758945(__this, ___collection, method) ((  void (*) (List_1_t4258734323 *, Object_t*, const MethodInfo*))List_1_AddCollection_m848758945_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m109731169_gshared (List_1_t4258734323 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m109731169(__this, ___enumerable, method) ((  void (*) (List_1_t4258734323 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m109731169_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m1104672918_gshared (List_1_t4258734323 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1104672918(__this, ___collection, method) ((  void (*) (List_1_t4258734323 *, Object_t*, const MethodInfo*))List_1_AddRange_m1104672918_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t2329953406 * List_1_AsReadOnly_m1311282479_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1311282479(__this, method) ((  ReadOnlyCollection_1_t2329953406 * (*) (List_1_t4258734323 *, const MethodInfo*))List_1_AsReadOnly_m1311282479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C"  void List_1_Clear_m616531554_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_Clear_m616531554(__this, method) ((  void (*) (List_1_t4258734323 *, const MethodInfo*))List_1_Clear_m616531554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C"  bool List_1_Contains_m963714004_gshared (List_1_t4258734323 * __this, KeyValuePair_2_t3461775354  ___item, const MethodInfo* method);
#define List_1_Contains_m963714004(__this, ___item, method) ((  bool (*) (List_1_t4258734323 *, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_Contains_m963714004_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m162361688_gshared (List_1_t4258734323 * __this, KeyValuePair_2U5BU5D_t2468327135* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m162361688(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4258734323 *, KeyValuePair_2U5BU5D_t2468327135*, int32_t, const MethodInfo*))List_1_CopyTo_m162361688_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t3461775354  List_1_Find_m2405526382_gshared (List_1_t4258734323 * __this, Predicate_1_t4032739252 * ___match, const MethodInfo* method);
#define List_1_Find_m2405526382(__this, ___match, method) ((  KeyValuePair_2_t3461775354  (*) (List_1_t4258734323 *, Predicate_1_t4032739252 *, const MethodInfo*))List_1_Find_m2405526382_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m1533194379_gshared (Object_t * __this /* static, unused */, Predicate_1_t4032739252 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1533194379(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t4032739252 *, const MethodInfo*))List_1_CheckMatch_m1533194379_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m1303528040_gshared (List_1_t4258734323 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4032739252 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1303528040(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t4258734323 *, int32_t, int32_t, Predicate_1_t4032739252 *, const MethodInfo*))List_1_GetIndex_m1303528040_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C"  Enumerator_t2344517315  List_1_GetEnumerator_m2326024977_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2326024977(__this, method) ((  Enumerator_t2344517315  (*) (List_1_t4258734323 *, const MethodInfo*))List_1_GetEnumerator_m2326024977_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m2864786468_gshared (List_1_t4258734323 * __this, KeyValuePair_2_t3461775354  ___item, const MethodInfo* method);
#define List_1_IndexOf_m2864786468(__this, ___item, method) ((  int32_t (*) (List_1_t4258734323 *, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_IndexOf_m2864786468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m2777313199_gshared (List_1_t4258734323 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m2777313199(__this, ___start, ___delta, method) ((  void (*) (List_1_t4258734323 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m2777313199_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m4203696168_gshared (List_1_t4258734323 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m4203696168(__this, ___index, method) ((  void (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_CheckIndex_m4203696168_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m3660053967_gshared (List_1_t4258734323 * __this, int32_t ___index, KeyValuePair_2_t3461775354  ___item, const MethodInfo* method);
#define List_1_Insert_m3660053967(__this, ___index, ___item, method) ((  void (*) (List_1_t4258734323 *, int32_t, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_Insert_m3660053967_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m140228356_gshared (List_1_t4258734323 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m140228356(__this, ___collection, method) ((  void (*) (List_1_t4258734323 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m140228356_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C"  bool List_1_Remove_m371376335_gshared (List_1_t4258734323 * __this, KeyValuePair_2_t3461775354  ___item, const MethodInfo* method);
#define List_1_Remove_m371376335(__this, ___item, method) ((  bool (*) (List_1_t4258734323 *, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_Remove_m371376335_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m3865870567_gshared (List_1_t4258734323 * __this, Predicate_1_t4032739252 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m3865870567(__this, ___match, method) ((  int32_t (*) (List_1_t4258734323 *, Predicate_1_t4032739252 *, const MethodInfo*))List_1_RemoveAll_m3865870567_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m1533906837_gshared (List_1_t4258734323 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1533906837(__this, ___index, method) ((  void (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1533906837_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m2565448120_gshared (List_1_t4258734323 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2565448120(__this, ___index, ___count, method) ((  void (*) (List_1_t4258734323 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2565448120_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C"  void List_1_Reverse_m1444023479_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_Reverse_m1444023479(__this, method) ((  void (*) (List_1_t4258734323 *, const MethodInfo*))List_1_Reverse_m1444023479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C"  void List_1_Sort_m2282243659_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_Sort_m2282243659(__this, method) ((  void (*) (List_1_t4258734323 *, const MethodInfo*))List_1_Sort_m2282243659_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1207810142_gshared (List_1_t4258734323 * __this, Comparison_1_t1870482934 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1207810142(__this, ___comparison, method) ((  void (*) (List_1_t4258734323 *, Comparison_1_t1870482934 *, const MethodInfo*))List_1_Sort_m1207810142_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t2468327135* List_1_ToArray_m736700048_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_ToArray_m736700048(__this, method) ((  KeyValuePair_2U5BU5D_t2468327135* (*) (List_1_t4258734323 *, const MethodInfo*))List_1_ToArray_m736700048_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m3185459620_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m3185459620(__this, method) ((  void (*) (List_1_t4258734323 *, const MethodInfo*))List_1_TrimExcess_m3185459620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m2959503956_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2959503956(__this, method) ((  int32_t (*) (List_1_t4258734323 *, const MethodInfo*))List_1_get_Capacity_m2959503956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1043650997_gshared (List_1_t4258734323 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1043650997(__this, ___value, method) ((  void (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1043650997_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C"  int32_t List_1_get_Count_m2726342103_gshared (List_1_t4258734323 * __this, const MethodInfo* method);
#define List_1_get_Count_m2726342103(__this, method) ((  int32_t (*) (List_1_t4258734323 *, const MethodInfo*))List_1_get_Count_m2726342103_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t3461775354  List_1_get_Item_m2390958715_gshared (List_1_t4258734323 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m2390958715(__this, ___index, method) ((  KeyValuePair_2_t3461775354  (*) (List_1_t4258734323 *, int32_t, const MethodInfo*))List_1_get_Item_m2390958715_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m1543243494_gshared (List_1_t4258734323 * __this, int32_t ___index, KeyValuePair_2_t3461775354  ___value, const MethodInfo* method);
#define List_1_set_Item_m1543243494(__this, ___index, ___value, method) ((  void (*) (List_1_t4258734323 *, int32_t, KeyValuePair_2_t3461775354 , const MethodInfo*))List_1_set_Item_m1543243494_gshared)(__this, ___index, ___value, method)
