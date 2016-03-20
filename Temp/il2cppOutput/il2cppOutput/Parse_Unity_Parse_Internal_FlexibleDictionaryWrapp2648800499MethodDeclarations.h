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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2648800499;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t1451756712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t707842529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t3595260976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154528.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m708267136_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m708267136(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m708267136_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3480114848_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3480114848(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3480114848_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3028193729_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3028193729(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3028193729_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2950199000_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2950199000(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2950199000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1363491005_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1363491005(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1363491005_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3336454731_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3336454731(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3336454731_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m667190996_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m667190996(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m667190996_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m2710660180_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2710660180(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2710660180_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2775138471_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2775138471(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2775138471_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m555825603_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m555825603(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m555825603_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1040774306_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1040774306(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1040774306_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2874017721_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2874017721(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2874017721_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4067690653_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4067690653(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800499 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4067690653_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1598601697_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1598601697(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1598601697_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m770871254_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m770871254(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m770871254_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2715276468_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2715276468(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800499 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2715276468_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2216320048_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2216320048(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2216320048_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1231489330_gshared (FlexibleDictionaryWrapper_2_t2648800499 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1231489330(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2648800499 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1231489330_gshared)(__this, method)
