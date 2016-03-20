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

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1133177622;
// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_Expressions_Expression647304412.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C"  void MemberExpression__ctor_m652743440 (MemberExpression_t1133177622 * __this, Expression_t647304412 * ___expression, MemberInfo_t * ___member, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C"  Expression_t647304412 * MemberExpression_get_Expression_m2123424465 (MemberExpression_t1133177622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C"  MemberInfo_t * MemberExpression_get_Member_m3829779553 (MemberExpression_t1133177622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
