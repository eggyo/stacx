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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t2193249246;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t271112152;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_Val38140093.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1315698390_gshared (ValueCollection_t2193249246 * __this, Dictionary_2_t271112152 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1315698390(__this, ___dictionary, method) ((  void (*) (ValueCollection_t2193249246 *, Dictionary_2_t271112152 *, const MethodInfo*))ValueCollection__ctor_m1315698390_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2959938204_gshared (ValueCollection_t2193249246 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2959938204(__this, ___item, method) ((  void (*) (ValueCollection_t2193249246 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2959938204_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1034726757_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1034726757(__this, method) ((  void (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1034726757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1383714510_gshared (ValueCollection_t2193249246 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1383714510(__this, ___item, method) ((  bool (*) (ValueCollection_t2193249246 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1383714510_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m2540978931_gshared (ValueCollection_t2193249246 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m2540978931(__this, ___item, method) ((  bool (*) (ValueCollection_t2193249246 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m2540978931_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1319212837_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1319212837(__this, method) ((  Object_t* (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1319212837_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m2917766185_gshared (ValueCollection_t2193249246 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m2917766185(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t2193249246 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m2917766185_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2619680888_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2619680888(__this, method) ((  Object_t * (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m2619680888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3953857665_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3953857665(__this, method) ((  bool (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m3953857665_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1725125601_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1725125601(__this, method) ((  bool (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1725125601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1828248339_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1828248339(__this, method) ((  Object_t * (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1828248339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m3851629981_gshared (ValueCollection_t2193249246 * __this, ObjectU5BU5D_t11523773* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m3851629981(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t2193249246 *, ObjectU5BU5D_t11523773*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m3851629981_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
extern "C"  Enumerator_t38140095  ValueCollection_GetEnumerator_m3852311750_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m3852311750(__this, method) ((  Enumerator_t38140095  (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_GetEnumerator_m3852311750_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m3647743003_gshared (ValueCollection_t2193249246 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m3647743003(__this, method) ((  int32_t (*) (ValueCollection_t2193249246 *, const MethodInfo*))ValueCollection_get_Count_m3647743003_gshared)(__this, method)
