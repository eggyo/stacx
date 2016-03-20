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
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t1133177622  : public Expression_t647304412
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::expression
	Expression_t647304412 * ___expression_2;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::member
	MemberInfo_t * ___member_3;
};
