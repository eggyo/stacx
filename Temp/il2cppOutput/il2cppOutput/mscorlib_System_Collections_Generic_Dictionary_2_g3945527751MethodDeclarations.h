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

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t3945527751;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t826226242;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t1424040407;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t1554156564;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t622198201;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t1973835735;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t1572697549;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23434059049.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3712555692.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C"  void Dictionary_2__ctor_m3452600328_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3452600328(__this, method) ((  void (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2__ctor_m3452600328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4103283327_gshared (Dictionary_2_t3945527751 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m4103283327(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m4103283327_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m2663457424_gshared (Dictionary_2_t3945527751 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m2663457424(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m2663457424_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2091936089_gshared (Dictionary_2_t3945527751 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m2091936089(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3945527751 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2091936089_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2954057581_gshared (Dictionary_2_t3945527751 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m2954057581(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m2954057581_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m208479561_gshared (Dictionary_2_t3945527751 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m208479561(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3945527751 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m208479561_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3612624454_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3612624454(__this, method) ((  Object_t* (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3612624454_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1310412806_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1310412806(__this, method) ((  Object_t* (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1310412806_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1970380238_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1970380238(__this, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1970380238_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2194096512_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1896404517_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3550438668_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3550438668(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3550438668_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2426209898_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2426209898(__this, ___key, method) ((  bool (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2426209898_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m883833443_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m883833443(__this, ___key, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m883833443_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298(__this, method) ((  bool (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m397824298_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694(__this, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2233308694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022(__this, method) ((  bool (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4072055022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2_t3434059049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3945527751 *, KeyValuePair_2_t3434059049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3090356601_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2_t3434059049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3945527751 *, KeyValuePair_2_t3434059049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3296644457_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2U5BU5D_t1554156564* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3945527751 *, KeyValuePair_2U5BU5D_t1554156564*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3617848605_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2_t3434059049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3945527751 *, KeyValuePair_2_t3434059049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1090730702_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020_gshared (Dictionary_2_t3945527751 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3945527751 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3485161020_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479(__this, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m418503479_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132(__this, method) ((  Object_t* (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1245766132_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127(__this, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1993490127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3850601328_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3850601328(__this, method) ((  int32_t (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_get_Count_m3850601328_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C"  float Dictionary_2_get_Item_m381614843_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m381614843(__this, ___key, method) ((  float (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m381614843_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1211762632_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1211762632(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m1211762632_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m201004928_gshared (Dictionary_2_t3945527751 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m201004928(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3945527751 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m201004928_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3683560503_gshared (Dictionary_2_t3945527751 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3683560503(__this, ___size, method) ((  void (*) (Dictionary_2_t3945527751 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3683560503_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m270031859_gshared (Dictionary_2_t3945527751 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m270031859(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3945527751 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m270031859_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3434059049  Dictionary_2_make_pair_m1133080895_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1133080895(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3434059049  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m1133080895_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_key_m2492964567_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m2492964567(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m2492964567_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C"  float Dictionary_2_pick_value_m4082243543_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m4082243543(__this /* static, unused */, ___key, ___value, method) ((  float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m4082243543_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3570187388_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2U5BU5D_t1554156564* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3570187388(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3945527751 *, KeyValuePair_2U5BU5D_t1554156564*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3570187388_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C"  void Dictionary_2_Resize_m4009191728_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m4009191728(__this, method) ((  void (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_Resize_m4009191728_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3696770477_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m3696770477(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m3696770477_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Comparer()
extern "C"  Object_t* Dictionary_2_get_Comparer_m2404613620_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_get_Comparer_m2404613620(__this, method) ((  Object_t* (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_get_Comparer_m2404613620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C"  void Dictionary_2_Clear_m858733619_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m858733619(__this, method) ((  void (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_Clear_m858733619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3659074905_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3659074905(__this, ___key, method) ((  bool (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m3659074905_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3591113945_gshared (Dictionary_2_t3945527751 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3591113945(__this, ___value, method) ((  bool (*) (Dictionary_2_t3945527751 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m3591113945_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m4215083942_gshared (Dictionary_2_t3945527751 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m4215083942(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3945527751 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m4215083942_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3184786046_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3184786046(__this, ___sender, method) ((  void (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m3184786046_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1720219639_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1720219639(__this, ___key, method) ((  bool (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1720219639_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3323133106_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3323133106(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3945527751 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m3323133106_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C"  KeyCollection_t1973835735 * Dictionary_2_get_Keys_m630862861_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m630862861(__this, method) ((  KeyCollection_t1973835735 * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_get_Keys_m630862861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C"  ValueCollection_t1572697549 * Dictionary_2_get_Values_m1635102029_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1635102029(__this, method) ((  ValueCollection_t1572697549 * (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_get_Values_m1635102029_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C"  Object_t * Dictionary_2_ToTKey_m1942823474_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1942823474(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1942823474_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C"  float Dictionary_2_ToTValue_m2394557682_gshared (Dictionary_2_t3945527751 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2394557682(__this, ___value, method) ((  float (*) (Dictionary_2_t3945527751 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m2394557682_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1831759322_gshared (Dictionary_2_t3945527751 * __this, KeyValuePair_2_t3434059049  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1831759322(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3945527751 *, KeyValuePair_2_t3434059049 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1831759322_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C"  Enumerator_t3712555693  Dictionary_2_GetEnumerator_m1179201549_gshared (Dictionary_2_t3945527751 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1179201549(__this, method) ((  Enumerator_t3712555693  (*) (Dictionary_2_t3945527751 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1179201549_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m771267612_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m771267612(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m771267612_gshared)(__this /* static, unused */, ___key, ___value, method)
