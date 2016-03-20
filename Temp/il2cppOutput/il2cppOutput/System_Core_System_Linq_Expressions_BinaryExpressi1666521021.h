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
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t1666521021  : public Expression_t647304412
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t647304412 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t647304412 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t262791171 * ___conversion_4;
};
