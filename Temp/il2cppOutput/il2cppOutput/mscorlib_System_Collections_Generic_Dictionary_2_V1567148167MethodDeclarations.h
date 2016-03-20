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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>
struct ValueCollection_t1567148167;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>
struct Dictionary_2_t3939978369;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t1694111789;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V3707006310.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m15849969_gshared (ValueCollection_t1567148167 * __this, Dictionary_2_t3939978369 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m15849969(__this, ___dictionary, method) ((  void (*) (ValueCollection_t1567148167 *, Dictionary_2_t3939978369 *, const MethodInfo*))ValueCollection__ctor_m15849969_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2086723617_gshared (ValueCollection_t1567148167 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2086723617(__this, ___item, method) ((  void (*) (ValueCollection_t1567148167 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2086723617_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3854959978_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3854959978(__this, method) ((  void (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3854959978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3389692069_gshared (ValueCollection_t1567148167 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3389692069(__this, ___item, method) ((  bool (*) (ValueCollection_t1567148167 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3389692069_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3079378570_gshared (ValueCollection_t1567148167 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3079378570(__this, ___item, method) ((  bool (*) (ValueCollection_t1567148167 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3079378570_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1453529208_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1453529208(__this, method) ((  Object_t* (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1453529208_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m1353476590_gshared (ValueCollection_t1567148167 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1353476590(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t1567148167 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1353476590_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m208202601_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m208202601(__this, method) ((  Object_t * (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m208202601_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1664867928_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1664867928(__this, method) ((  bool (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1664867928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2191190072_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2191190072(__this, method) ((  bool (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2191190072_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m819271076_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m819271076(__this, method) ((  Object_t * (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m819271076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m3326929400_gshared (ValueCollection_t1567148167 * __this, BooleanU5BU5D_t3804927312* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m3326929400(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t1567148167 *, BooleanU5BU5D_t3804927312*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m3326929400_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t3707006312  ValueCollection_GetEnumerator_m874469595_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m874469595(__this, method) ((  Enumerator_t3707006312  (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_GetEnumerator_m874469595_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Boolean>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m636030_gshared (ValueCollection_t1567148167 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m636030(__this, method) ((  int32_t (*) (ValueCollection_t1567148167 *, const MethodInfo*))ValueCollection_get_Count_m636030_gshared)(__this, method)
