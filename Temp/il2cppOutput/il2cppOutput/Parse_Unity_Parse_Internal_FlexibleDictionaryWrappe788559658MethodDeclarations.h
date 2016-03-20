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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>
struct FlexibleDictionaryWrapper_2_t788559658;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t1000348000;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t3917488969;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t3143852264;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21660745816.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m868697819_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m868697819(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m868697819_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3467549477_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3467549477(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3467549477_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m284341172_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m284341172(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m284341172_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1237400087_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1237400087(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1237400087_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1728735978_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1728735978(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1728735978_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3766477310_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3766477310(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3766477310_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3463763447_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3463763447(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3463763447_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Item(System.String)
extern "C"  double FlexibleDictionaryWrapper_2_get_Item_m2648755267_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2648755267(__this, ___key, method) ((  double (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2648755267_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m447219522_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m447219522(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m447219522_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m716256286_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m716256286(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m716256286_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4272218919_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4272218919(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4272218919_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1897329830_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1897329830(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1897329830_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3578413624_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, KeyValuePair_2U5BU5D_t3917488969* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3578413624(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t788559658 *, KeyValuePair_2U5BU5D_t3917488969*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3578413624_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4215660762_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4215660762(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4215660762_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m104330633_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m104330633(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m104330633_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m81860833_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m81860833(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t788559658 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m81860833_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2079919891_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2079919891(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2079919891_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1565265229_gshared (FlexibleDictionaryWrapper_2_t788559658 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1565265229(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t788559658 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1565265229_gshared)(__this, method)
