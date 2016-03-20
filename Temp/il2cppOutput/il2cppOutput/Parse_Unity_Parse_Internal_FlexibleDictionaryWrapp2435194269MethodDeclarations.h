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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>
struct FlexibleDictionaryWrapper_2_t2435194269;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1410982188_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1410982188(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1410982188_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2892645748_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2892645748(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2892645748_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1610373381_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1610373381(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1610373381_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m894383208_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m894383208(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m894383208_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m600897273_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m600897273(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m600897273_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m634553999_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m634553999(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m634553999_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3468536072_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3468536072(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3468536072_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1181675794_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1181675794(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1181675794_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m947222099_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m947222099(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m947222099_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1258540655_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1258540655(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1258540655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2906983286_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2906983286(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2906983286_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m969490165_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m969490165(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m969490165_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3604171337_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3604171337(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194269 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3604171337_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1907443369_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1907443369(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1907443369_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m736091162_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m736091162(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m736091162_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m384805616_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m384805616(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194269 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m384805616_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m416591842_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m416591842(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m416591842_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m166971934_gshared (FlexibleDictionaryWrapper_2_t2435194269 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m166971934(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2435194269 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m166971934_gshared)(__this, method)
