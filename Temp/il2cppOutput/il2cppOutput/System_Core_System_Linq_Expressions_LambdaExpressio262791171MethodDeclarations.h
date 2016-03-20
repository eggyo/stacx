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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Type
struct Type_t;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3502740905;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C"  void LambdaExpression__ctor_m3808118843 (LambdaExpression_t262791171 * __this, Type_t * ___delegateType, Expression_t647304412 * ___body, ReadOnlyCollection_1_t3502740905 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C"  Expression_t647304412 * LambdaExpression_get_Body_m583480008 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C"  ReadOnlyCollection_1_t3502740905 * LambdaExpression_get_Parameters_m2076479516 (LambdaExpression_t262791171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
