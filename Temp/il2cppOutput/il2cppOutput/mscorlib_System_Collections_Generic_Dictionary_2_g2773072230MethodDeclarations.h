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

// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t2773072230;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t876714142;
// System.Collections.Generic.IDictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct IDictionary_2_t3948738017;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.ICollection`1<System.TimeZoneInfo/TimeType>
struct ICollection_1_t2748092833;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t3969783577;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t3744709976;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct KeyCollection_t801380214;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.TimeZoneInfo/TimeType>
struct ValueCollection_t400242028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22261603528.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_Core_System_TimeZoneInfo_TimeType2282261447.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2540100171.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor()
extern "C"  void Dictionary_2__ctor_m2272046684_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2272046684(__this, method) ((  void (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2__ctor_m2272046684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1683787475_gshared (Dictionary_2_t2773072230 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1683787475(__this, ___comparer, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1683787475_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m673530044_gshared (Dictionary_2_t2773072230 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m673530044(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m673530044_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1734428230_gshared (Dictionary_2_t2773072230 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1734428230(__this, ___capacity, method) ((  void (*) (Dictionary_2_t2773072230 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1734428230_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4072651969_gshared (Dictionary_2_t2773072230 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m4072651969(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m4072651969_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m4125666717_gshared (Dictionary_2_t2773072230 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m4125666717(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2773072230 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m4125666717_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4136585778_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4136585778(__this, method) ((  Object_t* (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4136585778_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1668845938_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1668845938(__this, method) ((  Object_t* (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1668845938_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m2851913762_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2851913762(__this, method) ((  Object_t * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2851913762_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m2800295916_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2800295916(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2800295916_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3610380369_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3610380369(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3610380369_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m762480480_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m762480480(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m762480480_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3827894806_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3827894806(__this, ___key, method) ((  bool (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3827894806_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m284771471_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m284771471(__this, ___key, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m284771471_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2478099710_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2478099710(__this, method) ((  bool (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2478099710_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2809105962_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2809105962(__this, method) ((  Object_t * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2809105962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m86174658_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m86174658(__this, method) ((  bool (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m86174658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1910644133_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2_t2261603528  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1910644133(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t2773072230 *, KeyValuePair_2_t2261603528 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1910644133_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m862101565_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2_t2261603528  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m862101565(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2773072230 *, KeyValuePair_2_t2261603528 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m862101565_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m644009545_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2U5BU5D_t3969783577* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m644009545(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2773072230 *, KeyValuePair_2U5BU5D_t3969783577*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m644009545_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2393223842_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2_t2261603528  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2393223842(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2773072230 *, KeyValuePair_2_t2261603528 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2393223842_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2957803112_gshared (Dictionary_2_t2773072230 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2957803112(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2773072230 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2957803112_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m783382499_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m783382499(__this, method) ((  Object_t * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m783382499_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2706166880_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2706166880(__this, method) ((  Object_t* (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2706166880_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m163590651_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m163590651(__this, method) ((  Object_t * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m163590651_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m266971332_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m266971332(__this, method) ((  int32_t (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_get_Count_m266971332_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(TKey)
extern "C"  TimeType_t2282261447  Dictionary_2_get_Item_m2215210407_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2215210407(__this, ___key, method) ((  TimeType_t2282261447  (*) (Dictionary_2_t2773072230 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m2215210407_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1735562012_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1735562012(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2773072230 *, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_set_Item_m1735562012_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2684397012_gshared (Dictionary_2_t2773072230 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2684397012(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t2773072230 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m2684397012_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m279736419_gshared (Dictionary_2_t2773072230 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m279736419(__this, ___size, method) ((  void (*) (Dictionary_2_t2773072230 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m279736419_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4253377311_gshared (Dictionary_2_t2773072230 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4253377311(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2773072230 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4253377311_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2261603528  Dictionary_2_make_pair_m3136311147_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m3136311147(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2261603528  (*) (Object_t * /* static, unused */, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_make_pair_m3136311147_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m3289881131_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m3289881131(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Object_t * /* static, unused */, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_pick_key_m3289881131_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::pick_value(TKey,TValue)
extern "C"  TimeType_t2282261447  Dictionary_2_pick_value_m2936006315_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2936006315(__this /* static, unused */, ___key, ___value, method) ((  TimeType_t2282261447  (*) (Object_t * /* static, unused */, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_pick_value_m2936006315_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2709208016_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2U5BU5D_t3969783577* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2709208016(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2773072230 *, KeyValuePair_2U5BU5D_t3969783577*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2709208016_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Resize()
extern "C"  void Dictionary_2_Resize_m1771767132_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1771767132(__this, method) ((  void (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_Resize_m1771767132_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m862121433_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m862121433(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2773072230 *, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_Add_m862121433_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Comparer()
extern "C"  Object_t* Dictionary_2_get_Comparer_m2170514848_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Comparer_m2170514848(__this, method) ((  Object_t* (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_get_Comparer_m2170514848_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Clear()
extern "C"  void Dictionary_2_Clear_m3973147271_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3973147271(__this, method) ((  void (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_Clear_m3973147271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3246702125_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3246702125(__this, ___key, method) ((  bool (*) (Dictionary_2_t2773072230 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m3246702125_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3419091885_gshared (Dictionary_2_t2773072230 * __this, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3419091885(__this, ___value, method) ((  bool (*) (Dictionary_2_t2773072230 *, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_ContainsValue_m3419091885_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m992282618_gshared (Dictionary_2_t2773072230 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m992282618(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2773072230 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m992282618_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1722864298_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1722864298(__this, ___sender, method) ((  void (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1722864298_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3093205667_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m3093205667(__this, ___key, method) ((  bool (*) (Dictionary_2_t2773072230 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m3093205667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3883571590_gshared (Dictionary_2_t2773072230 * __this, int32_t ___key, TimeType_t2282261447 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3883571590(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t2773072230 *, int32_t, TimeType_t2282261447 *, const MethodInfo*))Dictionary_2_TryGetValue_m3883571590_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Keys()
extern "C"  KeyCollection_t801380214 * Dictionary_2_get_Keys_m2962690617_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2962690617(__this, method) ((  KeyCollection_t801380214 * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_get_Keys_m2962690617_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Values()
extern "C"  ValueCollection_t400242028 * Dictionary_2_get_Values_m1864698105_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1864698105(__this, method) ((  ValueCollection_t400242028 * (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_get_Values_m1864698105_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m2739740038_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2739740038(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m2739740038_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ToTValue(System.Object)
extern "C"  TimeType_t2282261447  Dictionary_2_ToTValue_m1248320454_gshared (Dictionary_2_t2773072230 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1248320454(__this, ___value, method) ((  TimeType_t2282261447  (*) (Dictionary_2_t2773072230 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1248320454_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3185125510_gshared (Dictionary_2_t2773072230 * __this, KeyValuePair_2_t2261603528  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3185125510(__this, ___pair, method) ((  bool (*) (Dictionary_2_t2773072230 *, KeyValuePair_2_t2261603528 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3185125510_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::GetEnumerator()
extern "C"  Enumerator_t2540100172  Dictionary_2_GetEnumerator_m1608652705_gshared (Dictionary_2_t2773072230 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1608652705(__this, method) ((  Enumerator_t2540100172  (*) (Dictionary_2_t2773072230 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1608652705_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m3042409904_gshared (Object_t * __this /* static, unused */, int32_t ___key, TimeType_t2282261447  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3042409904(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Object_t * /* static, unused */, int32_t, TimeType_t2282261447 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3042409904_gshared)(__this /* static, unused */, ___key, ___value, method)
