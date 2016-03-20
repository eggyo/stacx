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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>
struct FlexibleDictionaryWrapper_2_t2366486181;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3244525207;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2927714134;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t1093062175;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904923023.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m36187860_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m36187860(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36187860_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3892793548_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3892793548(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3892793548_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1754853909_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1754853909(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1754853909_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4214361132_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4214361132(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4214361132_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m685569001_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m685569001(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m685569001_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m826020767_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m826020767(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m826020767_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1402261032_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1402261032(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1402261032_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1709085696_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1709085696(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1709085696_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m309445115_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m309445115(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m309445115_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4178713623_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4178713623(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4178713623_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4115908302_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4115908302(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4115908302_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2311725029_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2311725029(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2311725029_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2493021681_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2493021681(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2366486181 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2493021681_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m877459725_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m877459725(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m877459725_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2342881578_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2342881578(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2342881578_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3197372384_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3197372384(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2366486181 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3197372384_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m858528476_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m858528476(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m858528476_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2298465670_gshared (FlexibleDictionaryWrapper_2_t2366486181 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2298465670(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2366486181 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2298465670_gshared)(__this, method)
