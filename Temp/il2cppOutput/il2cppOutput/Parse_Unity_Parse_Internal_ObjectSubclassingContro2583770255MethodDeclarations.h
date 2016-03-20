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

// Parse.Internal.ObjectSubclassingController
struct ObjectSubclassingController_t2583770255;
// System.Collections.Generic.IDictionary`2<System.Type,System.Action>
struct IDictionary_2_t3725737449;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Parse.ParseObject
struct ParseObject_t725725555;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22038602960.h"

// System.Void Parse.Internal.ObjectSubclassingController::.ctor(System.Collections.Generic.IDictionary`2<System.Type,System.Action>)
extern "C"  void ObjectSubclassingController__ctor_m1412498054 (ObjectSubclassingController_t2583770255 * __this, Object_t* ___actions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ObjectSubclassingController::GetClassName(System.Type)
extern "C"  String_t* ObjectSubclassingController_GetClassName_m863207131 (ObjectSubclassingController_t2583770255 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.Internal.ObjectSubclassingController::GetType(System.String)
extern "C"  Type_t * ObjectSubclassingController_GetType_m1069780184 (ObjectSubclassingController_t2583770255 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ObjectSubclassingController::IsTypeValid(System.String,System.Type)
extern "C"  bool ObjectSubclassingController_IsTypeValid_m1185669717 (ObjectSubclassingController_t2583770255 * __this, String_t* ___className, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassingController::RegisterSubclass(System.Type)
extern "C"  void ObjectSubclassingController_RegisterSubclass_m2412449232 (ObjectSubclassingController_t2583770255 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassingController::UnregisterSubclass(System.Type)
extern "C"  void ObjectSubclassingController_UnregisterSubclass_m2377668887 (ObjectSubclassingController_t2583770255 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.Internal.ObjectSubclassingController::Instantiate(System.String)
extern "C"  ParseObject_t725725555 * ObjectSubclassingController_Instantiate_m631067808 (ObjectSubclassingController_t2583770255 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.Internal.ObjectSubclassingController::GetPropertyMappings(System.String)
extern "C"  Object_t* ObjectSubclassingController_GetPropertyMappings_m1688486509 (ObjectSubclassingController_t2583770255 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ObjectSubclassingController::.cctor()
extern "C"  void ObjectSubclassingController__cctor_m1203474743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ObjectSubclassingController::<.ctor>b__4_0(System.Collections.Generic.KeyValuePair`2<System.Type,System.Action>)
extern "C"  String_t* ObjectSubclassingController_U3C_ctorU3Eb__4_0_m2220662593 (ObjectSubclassingController_t2583770255 * __this, KeyValuePair_2_t2038602960  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
