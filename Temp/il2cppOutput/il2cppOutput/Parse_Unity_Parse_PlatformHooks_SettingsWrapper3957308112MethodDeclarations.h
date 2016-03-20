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

// Parse.PlatformHooks/SettingsWrapper
struct SettingsWrapper_t3957308112;
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

// Parse.PlatformHooks/SettingsWrapper Parse.PlatformHooks/SettingsWrapper::get_Wrapper()
extern "C"  SettingsWrapper_t3957308112 * SettingsWrapper_get_Wrapper_m3517141396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::.ctor()
extern "C"  void SettingsWrapper__ctor_m144492444 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks/SettingsWrapper::Load()
extern "C"  String_t* SettingsWrapper_Load_m2050029707 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Save()
extern "C"  void SettingsWrapper_Save_m785045605 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.String,System.Object)
extern "C"  void SettingsWrapper_Add_m611492373 (SettingsWrapper_t3957308112 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::ContainsKey(System.String)
extern "C"  bool SettingsWrapper_ContainsKey_m92539004 (SettingsWrapper_t3957308112 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.PlatformHooks/SettingsWrapper::get_Keys()
extern "C"  Object_t* SettingsWrapper_get_Keys_m4231477395 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.String)
extern "C"  bool SettingsWrapper_Remove_m1897478434 (SettingsWrapper_t3957308112 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::TryGetValue(System.String,System.Object&)
extern "C"  bool SettingsWrapper_TryGetValue_m2257833752 (SettingsWrapper_t3957308112 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> Parse.PlatformHooks/SettingsWrapper::get_Values()
extern "C"  Object_t* SettingsWrapper_get_Values_m1001455315 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.PlatformHooks/SettingsWrapper::get_Item(System.String)
extern "C"  Object_t * SettingsWrapper_get_Item_m4235054515 (SettingsWrapper_t3957308112 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::set_Item(System.String,System.Object)
extern "C"  void SettingsWrapper_set_Item_m1371208664 (SettingsWrapper_t3957308112 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  void SettingsWrapper_Add_m1030811696 (SettingsWrapper_t3957308112 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Clear()
extern "C"  void SettingsWrapper_Clear_m1845593031 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool SettingsWrapper_Contains_m439215824 (SettingsWrapper_t3957308112 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C"  void SettingsWrapper_CopyTo_m2291248780 (SettingsWrapper_t3957308112 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.PlatformHooks/SettingsWrapper::get_Count()
extern "C"  int32_t SettingsWrapper_get_Count_m2491066758 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::get_IsReadOnly()
extern "C"  bool SettingsWrapper_get_IsReadOnly_m3435078737 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool SettingsWrapper_Remove_m2901829365 (SettingsWrapper_t3957308112 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.PlatformHooks/SettingsWrapper::GetEnumerator()
extern "C"  Object_t* SettingsWrapper_GetEnumerator_m1916183043 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks/SettingsWrapper::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SettingsWrapper_System_Collections_IEnumerable_GetEnumerator_m365517421 (SettingsWrapper_t3957308112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
