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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t2388211977;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2345314148_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2345314148(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2345314148_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3608957500_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3608957500(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3608957500_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m637305917_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m637305917(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m637305917_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3632649760_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3632649760(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3632649760_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1782622401_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1782622401(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1782622401_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2854447047_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2854447047(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2854447047_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3682539584_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3682539584(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3682539584_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m2702547098_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2702547098(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2702547098_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3161728651_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3161728651(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3161728651_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2192872615_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2192872615(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2192872615_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m939108414_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m939108414(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m939108414_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3669618365_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3669618365(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3669618365_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1197732481_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1197732481(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211977 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1197732481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m729444593_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m729444593(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m729444593_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1607085394_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1607085394(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1607085394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3931745464_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3931745464(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211977 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3931745464_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4164317418_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4164317418(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4164317418_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2905543766_gshared (FlexibleDictionaryWrapper_2_t2388211977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2905543766(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2388211977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2905543766_gshared)(__this, method)
