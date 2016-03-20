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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>
struct FlexibleDictionaryWrapper_2_t3392150310;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t3321177450;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t3953378263;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t1169714418;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23981575266.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1675499611_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1675499611(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1675499611_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m12958117_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m12958117(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m12958117_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m512928564_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m512928564(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m512928564_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1674953879_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1674953879(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1674953879_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m472761194_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m472761194(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m472761194_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2435332478_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2435332478(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2435332478_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1977674103_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1977674103(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1977674103_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m2596955459_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2596955459(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2596955459_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2864707778_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2864707778(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2864707778_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1523058078_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1523058078(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1523058078_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3150512551_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3150512551(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3150512551_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2403544358_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2403544358(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2403544358_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1524609976_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1524609976(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3392150310 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1524609976_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m335330394_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m335330394(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m335330394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m360664329_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m360664329(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m360664329_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3653333345_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3653333345(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3392150310 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3653333345_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m404481299_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m404481299(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m404481299_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4030869197_gshared (FlexibleDictionaryWrapper_2_t3392150310 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4030869197(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3392150310 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4030869197_gshared)(__this, method)
