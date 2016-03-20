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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t1354660650;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t3326352666;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_K3093380607.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m2847819044_gshared (KeyCollection_t1354660650 * __this, Dictionary_2_t3326352666 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m2847819044(__this, ___dictionary, method) ((  void (*) (KeyCollection_t1354660650 *, Dictionary_2_t3326352666 *, const MethodInfo*))KeyCollection__ctor_m2847819044_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3230756274_gshared (KeyCollection_t1354660650 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3230756274(__this, ___item, method) ((  void (*) (KeyCollection_t1354660650 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3230756274_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2841335721_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2841335721(__this, method) ((  void (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m2841335721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m669419800_gshared (KeyCollection_t1354660650 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m669419800(__this, ___item, method) ((  bool (*) (KeyCollection_t1354660650 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m669419800_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2079481981_gshared (KeyCollection_t1354660650 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2079481981(__this, ___item, method) ((  bool (*) (KeyCollection_t1354660650 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2079481981_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2020363045_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2020363045(__this, method) ((  Object_t* (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2020363045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m888276635_gshared (KeyCollection_t1354660650 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m888276635(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t1354660650 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m888276635_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3119466838_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3119466838(__this, method) ((  Object_t * (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3119466838_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1948392057_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1948392057(__this, method) ((  bool (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1948392057_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2683516523_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2683516523(__this, method) ((  bool (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2683516523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m2437203479_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m2437203479(__this, method) ((  Object_t * (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m2437203479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m2313763801_gshared (KeyCollection_t1354660650 * __this, ObjectU5BU5D_t11523773* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m2313763801(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t1354660650 *, ObjectU5BU5D_t11523773*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m2313763801_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C"  Enumerator_t3093380607  KeyCollection_GetEnumerator_m2614299772_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m2614299772(__this, method) ((  Enumerator_t3093380607  (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_GetEnumerator_m2614299772_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m1236955569_gshared (KeyCollection_t1354660650 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1236955569(__this, method) ((  int32_t (*) (KeyCollection_t1354660650 *, const MethodInfo*))KeyCollection_get_Count_m1236955569_gshared)(__this, method)
