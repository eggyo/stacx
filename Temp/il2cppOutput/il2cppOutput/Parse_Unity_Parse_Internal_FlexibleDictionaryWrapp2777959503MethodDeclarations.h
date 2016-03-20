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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t2777959503;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t804865322;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t985820439;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t2948369586;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21465263138.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2248082328_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2248082328(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2248082328_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2217459336_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, DateTime_t339033936  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2217459336(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, DateTime_t339033936 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2217459336_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m732648409_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m732648409(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m732648409_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m164090480_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m164090480(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m164090480_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3539830693_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3539830693(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3539830693_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2609320547_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, DateTime_t339033936 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2609320547(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, DateTime_t339033936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2609320547_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1085755628_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1085755628(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1085755628_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
extern "C"  DateTime_t339033936  FlexibleDictionaryWrapper_2_get_Item_m4164106620_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4164106620(__this, ___key, method) ((  DateTime_t339033936  (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4164106620_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2916649407_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, String_t* ___key, DateTime_t339033936  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2916649407(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, String_t*, DateTime_t339033936 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2916649407_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2095640795_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, KeyValuePair_2_t1465263138  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2095640795(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, KeyValuePair_2_t1465263138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2095640795_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3458411658_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3458411658(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3458411658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3895053473_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, KeyValuePair_2_t1465263138  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3895053473(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, KeyValuePair_2_t1465263138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3895053473_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2656381365_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, KeyValuePair_2U5BU5D_t985820439* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2656381365(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2777959503 *, KeyValuePair_2U5BU5D_t985820439*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2656381365_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1559567433_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1559567433(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1559567433_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1789825006_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1789825006(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1789825006_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1429189532_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, KeyValuePair_2_t1465263138  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1429189532(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2777959503 *, KeyValuePair_2_t1465263138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1429189532_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3698677720_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3698677720(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3698677720_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m507577418_gshared (FlexibleDictionaryWrapper_2_t2777959503 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m507577418(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2777959503 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m507577418_gshared)(__this, method)
