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

// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1101718811;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t3348369461;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t3519458768;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1522759584;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1133177622;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3502740905;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2813796726;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t915773227;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2423716918.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C"  void Expression__ctor_m3602002992 (Expression_t647304412 * __this, int32_t ___node_type, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C"  int32_t Expression_get_NodeType_m2139853313 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C"  Type_t * Expression_get_Type_m2445344496 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
extern "C"  String_t* Expression_ToString_m288908258 (Expression_t647304412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
extern "C"  bool Expression_IsAssignableToParameterType_m241263170 (Object_t * __this /* static, unused */, Type_t * ___type, ParameterInfo_t2610273829 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
extern "C"  MethodCallExpression_t1101718811 * Expression_Call_m4008432210 (Object_t * __this /* static, unused */, Expression_t647304412 * ___instance, MethodInfo_t * ___method, ExpressionU5BU5D_t3348369461* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  MethodCallExpression_t1101718811 * Expression_Call_m1073653075 (Object_t * __this /* static, unused */, Expression_t647304412 * ___instance, MethodInfo_t * ___method, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C"  ConstantExpression_t1522759584 * Expression_Constant_m3766942065 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.Reflection.FieldInfo)
extern "C"  MemberExpression_t1133177622 * Expression_Field_m3148139982 (Object_t * __this /* static, unused */, Expression_t647304412 * ___expression, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C"  bool Expression_CanAssign_m1866936114 (Object_t * __this /* static, unused */, Type_t * ___target, Type_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  Expression_t647304412 * Expression_CheckLambda_m4108637066 (Object_t * __this /* static, unused */, Type_t * ___delegateType, Expression_t647304412 * ___body, ReadOnlyCollection_1_t3502740905 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  Object_t* Expression_CreateArgumentList_m94411131 (Object_t * __this /* static, unused */, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C"  void Expression_CheckNonGenericMethod_m4141977740 (Object_t * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C"  ReadOnlyCollection_1_t3810449760 * Expression_CheckMethodArguments_m1168947587 (Object_t * __this /* static, unused */, MethodBase_t3461000640 * ___method, Object_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C"  UnaryExpression_t915773227 * Expression_Quote_m2067409795 (Object_t * __this /* static, unused */, Expression_t647304412 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
