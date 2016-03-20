#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3502740905;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t262791171  : public Expression_t647304412
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t647304412 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t3502740905 * ___parameters_3;
};
