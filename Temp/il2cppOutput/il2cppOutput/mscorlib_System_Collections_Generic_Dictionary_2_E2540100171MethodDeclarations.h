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

// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t2773072230;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2540100171.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22261603528.h"
#include "System_Core_System_TimeZoneInfo_TimeType2282261447.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m1240169982_gshared (Enumerator_t2540100172 * __this, Dictionary_2_t2773072230 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1240169982(__this, ___dictionary, method) ((  void (*) (Enumerator_t2540100172 *, Dictionary_2_t2773072230 *, const MethodInfo*))Enumerator__ctor_m1240169982_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m3810439459_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m3810439459(__this, method) ((  Object_t * (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m3810439459_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3836055543_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m3836055543(__this, method) ((  void (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m3836055543_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t130027246  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1164294784_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1164294784(__this, method) ((  DictionaryEntry_t130027246  (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1164294784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3432990655_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3432990655(__this, method) ((  Object_t * (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3432990655_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1617572497_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1617572497(__this, method) ((  Object_t * (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1617572497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1444428003_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1444428003(__this, method) ((  bool (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_MoveNext_m1444428003_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C"  KeyValuePair_2_t2261603528  Enumerator_get_Current_m3810530541_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m3810530541(__this, method) ((  KeyValuePair_2_t2261603528  (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_get_Current_m3810530541_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m3700634352_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m3700634352(__this, method) ((  int32_t (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_get_CurrentKey_m3700634352_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C"  TimeType_t2282261447  Enumerator_get_CurrentValue_m2544587796_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m2544587796(__this, method) ((  TimeType_t2282261447  (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_get_CurrentValue_m2544587796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C"  void Enumerator_Reset_m506723152_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_Reset_m506723152(__this, method) ((  void (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_Reset_m506723152_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C"  void Enumerator_VerifyState_m3792801625_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m3792801625(__this, method) ((  void (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_VerifyState_m3792801625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1199999105_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1199999105(__this, method) ((  void (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_VerifyCurrent_m1199999105_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C"  void Enumerator_Dispose_m4153073696_gshared (Enumerator_t2540100172 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m4153073696(__this, method) ((  void (*) (Enumerator_t2540100172 *, const MethodInfo*))Enumerator_Dispose_m4153073696_gshared)(__this, method)
