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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t219715413;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1451756654;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t2573724739;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t3595260918;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154470.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3663457018_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3663457018(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3663457018_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4079261798_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4079261798(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4079261798_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2330899003_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2330899003(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2330899003_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m545049426_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m545049426(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m545049426_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3339531267_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3339531267(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3339531267_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m107913029_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m107913029(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m107913029_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m10855630_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m10855630(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m10855630_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m3309807130_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3309807130(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3309807130_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2689804961_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2689804961(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2689804961_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3511015485_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3511015485(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3511015485_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1259831912_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1259831912(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1259831912_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3750454655_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3750454655(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3750454655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2367667351_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2367667351(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715413 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2367667351_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m53408935_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53408935(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53408935_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1421877456_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1421877456(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1421877456_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2537417722_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2537417722(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715413 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2537417722_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m20562934_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m20562934(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m20562934_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2808883372_gshared (FlexibleDictionaryWrapper_2_t219715413 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2808883372(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t219715413 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2808883372_gshared)(__this, method)
