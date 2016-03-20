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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t377903515;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t2880731747;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21963335622.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1861697076_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1861697076(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1861697076_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m325229932_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m325229932(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m325229932_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2620999541_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2620999541(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2620999541_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2063406220_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2063406220(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2063406220_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1123336841_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1123336841(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1123336841_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1960763647_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1960763647(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1960763647_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3157821320_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3157821320(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3157821320_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m3850742560_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3850742560(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3850742560_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2303547739_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2303547739(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2303547739_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1709255543_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1709255543(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1709255543_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1629246318_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1629246318(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1629246318_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4177856133_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4177856133(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4177856133_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m658928977_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m658928977(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t377903515 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m658928977_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4172796589_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4172796589(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4172796589_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1917785738_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1917785738(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1917785738_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m513283712_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m513283712(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t377903515 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m513283712_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m729296636_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m729296636(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m729296636_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m289529062_gshared (FlexibleDictionaryWrapper_2_t377903515 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m289529062(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t377903515 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m289529062_gshared)(__this, method)
