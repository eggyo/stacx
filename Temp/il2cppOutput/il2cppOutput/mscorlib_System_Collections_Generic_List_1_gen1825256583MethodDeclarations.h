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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t1825256583;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t3900451970;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2511404062;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t1494129000;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t4191442962;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t1087903355;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t1599261512;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t3731972490;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297614.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera4206006871.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C"  void List_1__ctor_m3414130665_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1__ctor_m3414130665(__this, method) ((  void (*) (List_1_t1825256583 *, const MethodInfo*))List_1__ctor_m3414130665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m383317238_gshared (List_1_t1825256583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m383317238(__this, ___collection, method) ((  void (*) (List_1_t1825256583 *, Object_t*, const MethodInfo*))List_1__ctor_m383317238_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2970066874_gshared (List_1_t1825256583 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2970066874(__this, ___capacity, method) ((  void (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1__ctor_m2970066874_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C"  void List_1__cctor_m2276739300_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m2276739300(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m2276739300_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m997716219_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m997716219(__this, method) ((  Object_t* (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m997716219_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m3136326011_gshared (List_1_t1825256583 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m3136326011(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256583 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3136326011_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m2609782070_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m2609782070(__this, method) ((  Object_t * (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m2609782070_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m1701597563_gshared (List_1_t1825256583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1701597563(__this, ___item, method) ((  int32_t (*) (List_1_t1825256583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1701597563_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m2282258737_gshared (List_1_t1825256583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m2282258737(__this, ___item, method) ((  bool (*) (List_1_t1825256583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2282258737_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m4209070675_gshared (List_1_t1825256583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m4209070675(__this, ___item, method) ((  int32_t (*) (List_1_t1825256583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m4209070675_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m1819228670_gshared (List_1_t1825256583 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1819228670(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1819228670_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m2306345578_gshared (List_1_t1825256583 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m2306345578(__this, ___item, method) ((  void (*) (List_1_t1825256583 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m2306345578_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2072864754_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2072864754(__this, method) ((  bool (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2072864754_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m1432714379_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1432714379(__this, method) ((  bool (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1432714379_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1018858423_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1018858423(__this, method) ((  Object_t * (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1018858423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m1376856416_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1376856416(__this, method) ((  bool (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1376856416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1191160217_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1191160217(__this, method) ((  bool (*) (List_1_t1825256583 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1191160217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m936012670_gshared (List_1_t1825256583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m936012670(__this, ___index, method) ((  Object_t * (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m936012670_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m841014869_gshared (List_1_t1825256583 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m841014869(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256583 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m841014869_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C"  void List_1_Add_m2871222134_gshared (List_1_t1825256583 * __this, KeyValuePair_2_t1028297614  ___item, const MethodInfo* method);
#define List_1_Add_m2871222134(__this, ___item, method) ((  void (*) (List_1_t1825256583 *, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_Add_m2871222134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m4176623281_gshared (List_1_t1825256583 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m4176623281(__this, ___newCount, method) ((  void (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m4176623281_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m4142761110_gshared (List_1_t1825256583 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m4142761110(__this, ___idx, ___count, method) ((  void (*) (List_1_t1825256583 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m4142761110_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m1639156143_gshared (List_1_t1825256583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1639156143(__this, ___collection, method) ((  void (*) (List_1_t1825256583 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1639156143_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m900128367_gshared (List_1_t1825256583 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m900128367(__this, ___enumerable, method) ((  void (*) (List_1_t1825256583 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m900128367_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m3136718536_gshared (List_1_t1825256583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3136718536(__this, ___collection, method) ((  void (*) (List_1_t1825256583 *, Object_t*, const MethodInfo*))List_1_AddRange_m3136718536_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t4191442962 * List_1_AsReadOnly_m1151875169_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1151875169(__this, method) ((  ReadOnlyCollection_1_t4191442962 * (*) (List_1_t1825256583 *, const MethodInfo*))List_1_AsReadOnly_m1151875169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C"  void List_1_Clear_m820263956_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_Clear_m820263956(__this, method) ((  void (*) (List_1_t1825256583 *, const MethodInfo*))List_1_Clear_m820263956_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C"  bool List_1_Contains_m4162583874_gshared (List_1_t1825256583 * __this, KeyValuePair_2_t1028297614  ___item, const MethodInfo* method);
#define List_1_Contains_m4162583874(__this, ___item, method) ((  bool (*) (List_1_t1825256583 *, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_Contains_m4162583874_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m475567590_gshared (List_1_t1825256583 * __this, KeyValuePair_2U5BU5D_t1087903355* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m475567590(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t1825256583 *, KeyValuePair_2U5BU5D_t1087903355*, int32_t, const MethodInfo*))List_1_CopyTo_m475567590_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t1028297614  List_1_Find_m130660674_gshared (List_1_t1825256583 * __this, Predicate_1_t1599261512 * ___match, const MethodInfo* method);
#define List_1_Find_m130660674(__this, ___match, method) ((  KeyValuePair_2_t1028297614  (*) (List_1_t1825256583 *, Predicate_1_t1599261512 *, const MethodInfo*))List_1_Find_m130660674_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m3988573117_gshared (Object_t * __this /* static, unused */, Predicate_1_t1599261512 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m3988573117(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t1599261512 *, const MethodInfo*))List_1_CheckMatch_m3988573117_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m4217124834_gshared (List_1_t1825256583 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1599261512 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m4217124834(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t1825256583 *, int32_t, int32_t, Predicate_1_t1599261512 *, const MethodInfo*))List_1_GetIndex_m4217124834_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C"  Enumerator_t4206006871  List_1_GetEnumerator_m2232942975_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2232942975(__this, method) ((  Enumerator_t4206006871  (*) (List_1_t1825256583 *, const MethodInfo*))List_1_GetEnumerator_m2232942975_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m3363228138_gshared (List_1_t1825256583 * __this, KeyValuePair_2_t1028297614  ___item, const MethodInfo* method);
#define List_1_IndexOf_m3363228138(__this, ___item, method) ((  int32_t (*) (List_1_t1825256583 *, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_IndexOf_m3363228138_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m3133613629_gshared (List_1_t1825256583 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m3133613629(__this, ___start, ___delta, method) ((  void (*) (List_1_t1825256583 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m3133613629_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m221934774_gshared (List_1_t1825256583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m221934774(__this, ___index, method) ((  void (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_CheckIndex_m221934774_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m2060381661_gshared (List_1_t1825256583 * __this, int32_t ___index, KeyValuePair_2_t1028297614  ___item, const MethodInfo* method);
#define List_1_Insert_m2060381661(__this, ___index, ___item, method) ((  void (*) (List_1_t1825256583 *, int32_t, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_Insert_m2060381661_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m3797691538_gshared (List_1_t1825256583 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m3797691538(__this, ___collection, method) ((  void (*) (List_1_t1825256583 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m3797691538_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C"  bool List_1_Remove_m1599284669_gshared (List_1_t1825256583 * __this, KeyValuePair_2_t1028297614  ___item, const MethodInfo* method);
#define List_1_Remove_m1599284669(__this, ___item, method) ((  bool (*) (List_1_t1825256583 *, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_Remove_m1599284669_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m1807410733_gshared (List_1_t1825256583 * __this, Predicate_1_t1599261512 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1807410733(__this, ___match, method) ((  int32_t (*) (List_1_t1825256583 *, Predicate_1_t1599261512 *, const MethodInfo*))List_1_RemoveAll_m1807410733_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m4229201827_gshared (List_1_t1825256583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m4229201827(__this, ___index, method) ((  void (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_RemoveAt_m4229201827_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m3606754758_gshared (List_1_t1825256583 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m3606754758(__this, ___index, ___count, method) ((  void (*) (List_1_t1825256583 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m3606754758_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C"  void List_1_Reverse_m3957333481_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_Reverse_m3957333481(__this, method) ((  void (*) (List_1_t1825256583 *, const MethodInfo*))List_1_Reverse_m3957333481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C"  void List_1_Sort_m3397194329_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_Sort_m3397194329(__this, method) ((  void (*) (List_1_t1825256583 *, const MethodInfo*))List_1_Sort_m3397194329_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m273147372_gshared (List_1_t1825256583 * __this, Comparison_1_t3731972490 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m273147372(__this, ___comparison, method) ((  void (*) (List_1_t1825256583 *, Comparison_1_t3731972490 *, const MethodInfo*))List_1_Sort_m273147372_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t1087903355* List_1_ToArray_m3037501928_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_ToArray_m3037501928(__this, method) ((  KeyValuePair_2U5BU5D_t1087903355* (*) (List_1_t1825256583 *, const MethodInfo*))List_1_ToArray_m3037501928_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m3038858034_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m3038858034(__this, method) ((  void (*) (List_1_t1825256583 *, const MethodInfo*))List_1_TrimExcess_m3038858034_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m2599140634_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2599140634(__this, method) ((  int32_t (*) (List_1_t1825256583 *, const MethodInfo*))List_1_get_Capacity_m2599140634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1386812099_gshared (List_1_t1825256583 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1386812099(__this, ___value, method) ((  void (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1386812099_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C"  int32_t List_1_get_Count_m998164689_gshared (List_1_t1825256583 * __this, const MethodInfo* method);
#define List_1_get_Count_m998164689(__this, method) ((  int32_t (*) (List_1_t1825256583 *, const MethodInfo*))List_1_get_Count_m998164689_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t1028297614  List_1_get_Item_m3777921063_gshared (List_1_t1825256583 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3777921063(__this, ___index, method) ((  KeyValuePair_2_t1028297614  (*) (List_1_t1825256583 *, int32_t, const MethodInfo*))List_1_get_Item_m3777921063_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m1856449396_gshared (List_1_t1825256583 * __this, int32_t ___index, KeyValuePair_2_t1028297614  ___value, const MethodInfo* method);
#define List_1_set_Item_m1856449396(__this, ___index, ___value, method) ((  void (*) (List_1_t1825256583 *, int32_t, KeyValuePair_2_t1028297614 , const MethodInfo*))List_1_set_Item_m1856449396_gshared)(__this, ___index, ___value, method)
