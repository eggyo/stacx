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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>
struct FlexibleDictionaryWrapper_2_t2081204816;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1310919677_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1310919677(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1310919677_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2680336195_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2680336195(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2680336195_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4259329494_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4259329494(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4259329494_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2236209593_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2236209593(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2236209593_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2300091272_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2300091272(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2300091272_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2555888288_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2555888288(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2555888288_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1733335449_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1733335449(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1733335449_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1773925793_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1773925793(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1773925793_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m707909092_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m707909092(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m707909092_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1158478144_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1158478144(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1158478144_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3589337925_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3589337925(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3589337925_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2031452612_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2031452612(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2031452612_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2629812954_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2629812954(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204816 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2629812954_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m389472376_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m389472376(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m389472376_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3118029355_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3118029355(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3118029355_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m381441407_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m381441407(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204816 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m381441407_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3381773553_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3381773553(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3381773553_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4273667951_gshared (FlexibleDictionaryWrapper_2_t2081204816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4273667951(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2081204816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4273667951_gshared)(__this, method)
