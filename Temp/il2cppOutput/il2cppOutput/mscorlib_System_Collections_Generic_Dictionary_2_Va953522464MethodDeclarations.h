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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t953522464;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t3326352666;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t1822140384;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.DateTime[]
struct DateTimeU5BU5D_t2411579761;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V3093380607.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1715349750_gshared (ValueCollection_t953522464 * __this, Dictionary_2_t3326352666 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1715349750(__this, ___dictionary, method) ((  void (*) (ValueCollection_t953522464 *, Dictionary_2_t3326352666 *, const MethodInfo*))ValueCollection__ctor_m1715349750_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3665566844_gshared (ValueCollection_t953522464 * __this, DateTime_t339033936  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3665566844(__this, ___item, method) ((  void (*) (ValueCollection_t953522464 *, DateTime_t339033936 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m3665566844_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3314263877_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3314263877(__this, method) ((  void (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m3314263877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m4220601770_gshared (ValueCollection_t953522464 * __this, DateTime_t339033936  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m4220601770(__this, ___item, method) ((  bool (*) (ValueCollection_t953522464 *, DateTime_t339033936 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m4220601770_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m41140431_gshared (ValueCollection_t953522464 * __this, DateTime_t339033936  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m41140431(__this, ___item, method) ((  bool (*) (ValueCollection_t953522464 *, DateTime_t339033936 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m41140431_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2088508819_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2088508819(__this, method) ((  Object_t* (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2088508819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m843167241_gshared (ValueCollection_t953522464 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m843167241(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t953522464 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m843167241_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2398390980_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2398390980(__this, method) ((  Object_t * (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2398390980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2495777629_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2495777629(__this, method) ((  bool (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2495777629_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2099328189_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2099328189(__this, method) ((  bool (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2099328189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m3756339881_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m3756339881(__this, method) ((  Object_t * (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m3756339881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m3419529149_gshared (ValueCollection_t953522464 * __this, DateTimeU5BU5D_t2411579761* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m3419529149(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t953522464 *, DateTimeU5BU5D_t2411579761*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m3419529149_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C"  Enumerator_t3093380609  ValueCollection_GetEnumerator_m357561376_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m357561376(__this, method) ((  Enumerator_t3093380609  (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_GetEnumerator_m357561376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m4167284867_gshared (ValueCollection_t953522464 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m4167284867(__this, method) ((  int32_t (*) (ValueCollection_t953522464 *, const MethodInfo*))ValueCollection_get_Count_m4167284867_gshared)(__this, method)
