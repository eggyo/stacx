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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>
struct FlexibleDictionaryWrapper_2_t4063273997;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2316357954_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2316357954(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2316357954_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m692694814_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m692694814(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m692694814_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1895661699_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1895661699(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1895661699_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4282460570_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4282460570(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4282460570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m712546491_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m712546491(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m712546491_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3463157645_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3463157645(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3463157645_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1070305558_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1070305558(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1070305558_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m4218207442_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4218207442(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4218207442_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1038583529_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1038583529(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1038583529_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2163916421_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2163916421(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2163916421_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1861290272_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1861290272(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1861290272_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3587386423_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3587386423(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3587386423_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m596811999_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m596811999(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4063273997 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m596811999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4244004703_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4244004703(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4244004703_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2064034072_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2064034072(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2064034072_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3283615922_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3283615922(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4063273997 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3283615922_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2673676974_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2673676974(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2673676974_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2601321204_gshared (FlexibleDictionaryWrapper_2_t4063273997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2601321204(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4063273997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2601321204_gshared)(__this, method)
