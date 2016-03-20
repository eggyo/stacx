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

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t915773227;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_ExpressionType2423716918.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
extern "C"  void UnaryExpression__ctor_m2606472637 (UnaryExpression_t915773227 * __this, int32_t ___node_type, Expression_t647304412 * ___operand, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern "C"  Expression_t647304412 * UnaryExpression_get_Operand_m2913394743 (UnaryExpression_t915773227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
