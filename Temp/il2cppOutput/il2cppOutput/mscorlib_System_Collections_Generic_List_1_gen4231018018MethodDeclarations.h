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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t4231018018;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t2011246109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t622198201;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t3899890435;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t2302237101;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t1554156564;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t4005022947;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t1842766629;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2316801010.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C"  void List_1__ctor_m2073031080_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1__ctor_m2073031080(__this, method) ((  void (*) (List_1_t4231018018 *, const MethodInfo*))List_1__ctor_m2073031080_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1__ctor_m3316548055_gshared (List_1_t4231018018 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3316548055(__this, ___collection, method) ((  void (*) (List_1_t4231018018 *, Object_t*, const MethodInfo*))List_1__ctor_m3316548055_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2461559545_gshared (List_1_t4231018018 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2461559545(__this, ___capacity, method) ((  void (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1__ctor_m2461559545_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C"  void List_1__cctor_m3652325125_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m3652325125(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m3652325125_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2439695026_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2439695026(__this, method) ((  Object_t* (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2439695026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m1224308892_gshared (List_1_t4231018018 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1224308892(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4231018018 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1224308892_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3823818795_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3823818795(__this, method) ((  Object_t * (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3823818795_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m984260978_gshared (List_1_t4231018018 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m984260978(__this, ___item, method) ((  int32_t (*) (List_1_t4231018018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m984260978_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m2306515342_gshared (List_1_t4231018018 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m2306515342(__this, ___item, method) ((  bool (*) (List_1_t4231018018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m2306515342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m1744359114_gshared (List_1_t4231018018 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1744359114(__this, ___item, method) ((  int32_t (*) (List_1_t4231018018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1744359114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m2074319421_gshared (List_1_t4231018018 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m2074319421(__this, ___index, ___item, method) ((  void (*) (List_1_t4231018018 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2074319421_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m504442827_gshared (List_1_t4231018018 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m504442827(__this, ___item, method) ((  void (*) (List_1_t4231018018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m504442827_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2213312527_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2213312527(__this, method) ((  bool (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2213312527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m2506728206_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m2506728206(__this, method) ((  bool (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m2506728206_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3287087040_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3287087040(__this, method) ((  Object_t * (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3287087040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m3662025597_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3662025597(__this, method) ((  bool (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3662025597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1403422684_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1403422684(__this, method) ((  bool (*) (List_1_t4231018018 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1403422684_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m3155294535_gshared (List_1_t4231018018 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3155294535(__this, ___index, method) ((  Object_t * (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3155294535_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m1170090708_gshared (List_1_t4231018018 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1170090708(__this, ___index, ___value, method) ((  void (*) (List_1_t4231018018 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1170090708_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C"  void List_1_Add_m611203543_gshared (List_1_t4231018018 * __this, KeyValuePair_2_t3434059049  ___item, const MethodInfo* method);
#define List_1_Add_m611203543(__this, ___item, method) ((  void (*) (List_1_t4231018018 *, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_Add_m611203543_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m4030797458_gshared (List_1_t4231018018 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m4030797458(__this, ___newCount, method) ((  void (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m4030797458_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C"  void List_1_CheckRange_m2232393237_gshared (List_1_t4231018018 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m2232393237(__this, ___idx, ___count, method) ((  void (*) (List_1_t4231018018 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m2232393237_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m677553552_gshared (List_1_t4231018018 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m677553552(__this, ___collection, method) ((  void (*) (List_1_t4231018018 *, Object_t*, const MethodInfo*))List_1_AddCollection_m677553552_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m4233493072_gshared (List_1_t4231018018 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m4233493072(__this, ___enumerable, method) ((  void (*) (List_1_t4231018018 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m4233493072_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m1611383367_gshared (List_1_t4231018018 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1611383367(__this, ___collection, method) ((  void (*) (List_1_t4231018018 *, Object_t*, const MethodInfo*))List_1_AddRange_m1611383367_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t2302237101 * List_1_AsReadOnly_m954690654_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m954690654(__this, method) ((  ReadOnlyCollection_1_t2302237101 * (*) (List_1_t4231018018 *, const MethodInfo*))List_1_AsReadOnly_m954690654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C"  void List_1_Clear_m3774131667_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_Clear_m3774131667(__this, method) ((  void (*) (List_1_t4231018018 *, const MethodInfo*))List_1_Clear_m3774131667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C"  bool List_1_Contains_m4277347013_gshared (List_1_t4231018018 * __this, KeyValuePair_2_t3434059049  ___item, const MethodInfo* method);
#define List_1_Contains_m4277347013(__this, ___item, method) ((  bool (*) (List_1_t4231018018 *, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_Contains_m4277347013_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m2616195591_gshared (List_1_t4231018018 * __this, KeyValuePair_2U5BU5D_t1554156564* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m2616195591(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t4231018018 *, KeyValuePair_2U5BU5D_t1554156564*, int32_t, const MethodInfo*))List_1_CopyTo_m2616195591_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C"  KeyValuePair_2_t3434059049  List_1_Find_m4227952735_gshared (List_1_t4231018018 * __this, Predicate_1_t4005022947 * ___match, const MethodInfo* method);
#define List_1_Find_m4227952735(__this, ___match, method) ((  KeyValuePair_2_t3434059049  (*) (List_1_t4231018018 *, Predicate_1_t4005022947 *, const MethodInfo*))List_1_Find_m4227952735_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m900562108_gshared (Object_t * __this /* static, unused */, Predicate_1_t4005022947 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m900562108(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t4005022947 *, const MethodInfo*))List_1_CheckMatch_m900562108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m882363289_gshared (List_1_t4231018018 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4005022947 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m882363289(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t4231018018 *, int32_t, int32_t, Predicate_1_t4005022947 *, const MethodInfo*))List_1_GetIndex_m882363289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C"  Enumerator_t2316801010  List_1_GetEnumerator_m553089410_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m553089410(__this, method) ((  Enumerator_t2316801010  (*) (List_1_t4231018018 *, const MethodInfo*))List_1_GetEnumerator_m553089410_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m2556035859_gshared (List_1_t4231018018 * __this, KeyValuePair_2_t3434059049  ___item, const MethodInfo* method);
#define List_1_IndexOf_m2556035859(__this, ___item, method) ((  int32_t (*) (List_1_t4231018018 *, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_IndexOf_m2556035859_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m2341263710_gshared (List_1_t4231018018 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m2341263710(__this, ___start, ___delta, method) ((  void (*) (List_1_t4231018018 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m2341263710_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m2362562775_gshared (List_1_t4231018018 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m2362562775(__this, ___index, method) ((  void (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_CheckIndex_m2362562775_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m1468196414_gshared (List_1_t4231018018 * __this, int32_t ___index, KeyValuePair_2_t3434059049  ___item, const MethodInfo* method);
#define List_1_Insert_m1468196414(__this, ___index, ___item, method) ((  void (*) (List_1_t4231018018 *, int32_t, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_Insert_m1468196414_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m3115570227_gshared (List_1_t4231018018 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m3115570227(__this, ___collection, method) ((  void (*) (List_1_t4231018018 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m3115570227_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C"  bool List_1_Remove_m2578173952_gshared (List_1_t4231018018 * __this, KeyValuePair_2_t3434059049  ___item, const MethodInfo* method);
#define List_1_Remove_m2578173952(__this, ___item, method) ((  bool (*) (List_1_t4231018018 *, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_Remove_m2578173952_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m3429821078_gshared (List_1_t4231018018 * __this, Predicate_1_t4005022947 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m3429821078(__this, ___match, method) ((  int32_t (*) (List_1_t4231018018 *, Predicate_1_t4005022947 *, const MethodInfo*))List_1_RemoveAll_m3429821078_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3637016580_gshared (List_1_t4231018018 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3637016580(__this, ___index, method) ((  void (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3637016580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m219925543_gshared (List_1_t4231018018 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m219925543(__this, ___index, ___count, method) ((  void (*) (List_1_t4231018018 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m219925543_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C"  void List_1_Reverse_m3650821096_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_Reverse_m3650821096(__this, method) ((  void (*) (List_1_t4231018018 *, const MethodInfo*))List_1_Reverse_m3650821096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C"  void List_1_Sort_m1137175738_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_Sort_m1137175738(__this, method) ((  void (*) (List_1_t4231018018 *, const MethodInfo*))List_1_Sort_m1137175738_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m1868452237_gshared (List_1_t4231018018 * __this, Comparison_1_t1842766629 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1868452237(__this, ___comparison, method) ((  void (*) (List_1_t4231018018 *, Comparison_1_t1842766629 *, const MethodInfo*))List_1_Sort_m1868452237_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C"  KeyValuePair_2U5BU5D_t1554156564* List_1_ToArray_m2943497665_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_ToArray_m2943497665(__this, method) ((  KeyValuePair_2U5BU5D_t1554156564* (*) (List_1_t4231018018 *, const MethodInfo*))List_1_ToArray_m2943497665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C"  void List_1_TrimExcess_m2828867795_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m2828867795(__this, method) ((  void (*) (List_1_t4231018018 *, const MethodInfo*))List_1_TrimExcess_m2828867795_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m3872143811_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m3872143811(__this, method) ((  int32_t (*) (List_1_t4231018018 *, const MethodInfo*))List_1_get_Capacity_m3872143811_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1240986276_gshared (List_1_t4231018018 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1240986276(__this, ___value, method) ((  void (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1240986276_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C"  int32_t List_1_get_Count_m1745007816_gshared (List_1_t4231018018 * __this, const MethodInfo* method);
#define List_1_get_Count_m1745007816(__this, method) ((  int32_t (*) (List_1_t4231018018 *, const MethodInfo*))List_1_get_Count_m1745007816_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t3434059049  List_1_get_Item_m199101162_gshared (List_1_t4231018018 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m199101162(__this, ___index, method) ((  KeyValuePair_2_t3434059049  (*) (List_1_t4231018018 *, int32_t, const MethodInfo*))List_1_get_Item_m199101162_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m3997077397_gshared (List_1_t4231018018 * __this, int32_t ___index, KeyValuePair_2_t3434059049  ___value, const MethodInfo* method);
#define List_1_set_Item_m3997077397(__this, ___index, ___value, method) ((  void (*) (List_1_t4231018018 *, int32_t, KeyValuePair_2_t3434059049 , const MethodInfo*))List_1_set_Item_m3997077397_gshared)(__this, ___index, ___value, method)
