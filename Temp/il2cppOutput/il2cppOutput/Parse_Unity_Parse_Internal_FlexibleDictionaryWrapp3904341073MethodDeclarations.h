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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>
struct FlexibleDictionaryWrapper_2_t3904341073;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t3244538085;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t1991099408;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct IEnumerator_1_t1093075053;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904935901.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m503068180_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m503068180(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m503068180_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2325893516_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2325893516(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2325893516_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4131703893_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4131703893(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4131703893_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3424030700_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3424030700(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3424030700_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2235675049_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2235675049(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2235675049_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3668655583_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3668655583(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3668655583_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4093744744_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4093744744(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4093744744_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m2384896512_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2384896512(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2384896512_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m542718267_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m542718267(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m542718267_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m350626647_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m350626647(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m350626647_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m294143886_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m294143886(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m294143886_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3799772581_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3799772581(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3799772581_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4138808625_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4138808625(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3904341073 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4138808625_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4219910221_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4219910221(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4219910221_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3006346090_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3006346090(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3006346090_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2162050464_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2162050464(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3904341073 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2162050464_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3498239836_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3498239836(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3498239836_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4121279686_gshared (FlexibleDictionaryWrapper_2_t3904341073 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4121279686(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3904341073 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4121279686_gshared)(__this, method)
