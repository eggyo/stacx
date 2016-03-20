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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t2297465465;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t384223800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1161783141;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643989.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3661280662_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3661280662(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3661280662_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1672406858_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1672406858(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1672406858_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3152817263_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3152817263(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3152817263_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m861938258_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m861938258(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m861938258_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3773901135_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3773901135(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3773901135_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1017946745_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1017946745(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1017946745_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3908509682_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3908509682(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3908509682_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m765996456_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m765996456(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m765996456_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2501544509_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2501544509(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2501544509_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3508839129_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3508839129(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3508839129_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m876878156_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m876878156(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m876878156_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1265954763_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1265954763(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1265954763_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1450416179_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1450416179(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2297465465 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1450416179_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m736733951_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m736733951(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m736733951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1572015108_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1572015108(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1572015108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3428686150_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3428686150(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2297465465 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3428686150_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1530786808_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1530786808(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1530786808_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3432689544_gshared (FlexibleDictionaryWrapper_2_t2297465465 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3432689544(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2297465465 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3432689544_gshared)(__this, method)
