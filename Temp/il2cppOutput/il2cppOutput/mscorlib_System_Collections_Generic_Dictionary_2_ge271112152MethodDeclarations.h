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

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t271112152;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t876714237;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t1446777939;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3313246268;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3189065375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t1242749898;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t2594387432;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t2193249246;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24054610746.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enu38140093.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2092906555_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2092906555(__this, method) ((  void (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2__ctor_m2092906555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m600651570_gshared (Dictionary_2_t271112152 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m600651570(__this, ___comparer, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m600651570_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1456055357_gshared (Dictionary_2_t271112152 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1456055357(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1456055357_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m241921292_gshared (Dictionary_2_t271112152 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m241921292(__this, ___capacity, method) ((  void (*) (Dictionary_2_t271112152 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m241921292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1819150304_gshared (Dictionary_2_t271112152 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1819150304(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1819150304_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3506522876_gshared (Dictionary_2_t271112152 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m3506522876(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t271112152 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3506522876_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2993972669_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2993972669(__this, method) ((  Object_t* (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2993972669_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66871001_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66871001(__this, method) ((  Object_t* (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66871001_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m766599609_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m766599609(__this, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m766599609_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m53392483_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m53392483(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m53392483_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1329552082_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1329552082(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1329552082_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m4186564671_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m4186564671(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m4186564671_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3598738835_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3598738835(__this, ___key, method) ((  bool (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3598738835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m584431888_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m584431888(__this, ___key, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m584431888_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2137418401_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2137418401(__this, method) ((  bool (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2137418401_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1419102163_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1419102163(__this, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1419102163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3823609765_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3823609765(__this, method) ((  bool (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3823609765_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3802504614_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2_t4054610746  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3802504614(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t271112152 *, KeyValuePair_2_t4054610746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3802504614_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m346614304_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2_t4054610746  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m346614304(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t271112152 *, KeyValuePair_2_t4054610746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m346614304_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m183545866_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2U5BU5D_t3189065375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m183545866(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t271112152 *, KeyValuePair_2U5BU5D_t3189065375*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m183545866_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2611681605_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2_t4054610746  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2611681605(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t271112152 *, KeyValuePair_2_t4054610746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2611681605_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1730230633_gshared (Dictionary_2_t271112152 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1730230633(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t271112152 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1730230633_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28324280_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28324280(__this, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28324280_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2355729263_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2355729263(__this, method) ((  Object_t* (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2355729263_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2751483516_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2751483516(__this, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2751483516_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2076077787_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2076077787(__this, method) ((  int32_t (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_get_Count_m2076077787_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m2855820492_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2855820492(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m2855820492_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1464003259_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1464003259(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t271112152 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1464003259_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m911521715_gshared (Dictionary_2_t271112152 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m911521715(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t271112152 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m911521715_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1991311460_gshared (Dictionary_2_t271112152 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1991311460(__this, ___size, method) ((  void (*) (Dictionary_2_t271112152 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1991311460_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1378442592_gshared (Dictionary_2_t271112152 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1378442592(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t271112152 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1378442592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4054610746  Dictionary_2_make_pair_m3749318132_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m3749318132(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t4054610746  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m3749318132_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C"  int64_t Dictionary_2_pick_key_m3934124618_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m3934124618(__this /* static, unused */, ___key, ___value, method) ((  int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m3934124618_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m2076913958_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2076913958(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m2076913958_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2269915759_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2U5BU5D_t3189065375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2269915759(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t271112152 *, KeyValuePair_2U5BU5D_t3189065375*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2269915759_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m513390429_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m513390429(__this, method) ((  void (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_Resize_m513390429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m869535450_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m869535450(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t271112152 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m869535450_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Comparer()
extern "C"  Object_t* Dictionary_2_get_Comparer_m2635999133_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_get_Comparer_m2635999133(__this, method) ((  Object_t* (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_get_Comparer_m2635999133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m3794007142_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3794007142(__this, method) ((  void (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_Clear_m3794007142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3324097680_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3324097680(__this, ___key, method) ((  bool (*) (Dictionary_2_t271112152 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m3324097680_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2993701008_gshared (Dictionary_2_t271112152 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2993701008(__this, ___value, method) ((  bool (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m2993701008_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2075514457_gshared (Dictionary_2_t271112152 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2075514457(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t271112152 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m2075514457_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2607403435_gshared (Dictionary_2_t271112152 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2607403435(__this, ___sender, method) ((  void (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m2607403435_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1258547808_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1258547808(__this, ___key, method) ((  bool (*) (Dictionary_2_t271112152 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m1258547808_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2839051497_gshared (Dictionary_2_t271112152 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2839051497(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t271112152 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m2839051497_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C"  KeyCollection_t2594387432 * Dictionary_2_get_Keys_m1395579346_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1395579346(__this, method) ((  KeyCollection_t2594387432 * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_get_Keys_m1395579346_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C"  ValueCollection_t2193249246 * Dictionary_2_get_Values_m2890118254_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2890118254(__this, method) ((  ValueCollection_t2193249246 * (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_get_Values_m2890118254_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C"  int64_t Dictionary_2_ToTKey_m3383983525_gshared (Dictionary_2_t271112152 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3383983525(__this, ___key, method) ((  int64_t (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m3383983525_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m389228097_gshared (Dictionary_2_t271112152 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m389228097(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t271112152 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m389228097_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m547493955_gshared (Dictionary_2_t271112152 * __this, KeyValuePair_2_t4054610746  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m547493955(__this, ___pair, method) ((  bool (*) (Dictionary_2_t271112152 *, KeyValuePair_2_t4054610746 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m547493955_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C"  Enumerator_t38140094  Dictionary_2_GetEnumerator_m2430111302_gshared (Dictionary_2_t271112152 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2430111302(__this, method) ((  Enumerator_t38140094  (*) (Dictionary_2_t271112152 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2430111302_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m3260596285_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3260596285(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3260596285_gshared)(__this /* static, unused */, ___key, ___value, method)
