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

// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t67735429;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t2119324394;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Parse.Internal.ReflectionHelpers::GetProperties(System.Type)
extern "C"  Object_t* ReflectionHelpers_GetProperties_m1103466742 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Parse.Internal.ReflectionHelpers::GetMethod(System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * ReflectionHelpers_GetMethod_m2353573744 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___name, TypeU5BU5D_t3431720054* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsPrimitive(System.Type)
extern "C"  bool ReflectionHelpers_IsPrimitive_m4043362407 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Parse.Internal.ReflectionHelpers::GetInterfaces(System.Type)
extern "C"  Object_t* ReflectionHelpers_GetInterfaces_m2322221677 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsConstructedGenericType(System.Type)
extern "C"  bool ReflectionHelpers_IsConstructedGenericType_m4208204871 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> Parse.Internal.ReflectionHelpers::GetConstructors(System.Type)
extern "C"  Object_t* ReflectionHelpers_GetConstructors_m1533761177 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Parse.Internal.ReflectionHelpers::GetGenericTypeArguments(System.Type)
extern "C"  TypeU5BU5D_t3431720054* ReflectionHelpers_GetGenericTypeArguments_m2224194261 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo Parse.Internal.ReflectionHelpers::GetProperty(System.Type,System.String)
extern "C"  PropertyInfo_t * ReflectionHelpers_GetProperty_m1884740599 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::FindConstructor(System.Type,System.Type[])
extern "C"  ConstructorInfo_t3542137334 * ReflectionHelpers_FindConstructor_m1168507223 (Object_t * __this /* static, unused */, Type_t * ___self, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsNullable(System.Type)
extern "C"  bool ReflectionHelpers_IsNullable_m64027969 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
