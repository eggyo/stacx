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

// Parse.ParseException
struct ParseException_t1839361213;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseException_ErrorCode2333003765.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Parse.ParseException::.ctor(Parse.ParseException/ErrorCode,System.String,System.Exception)
extern "C"  void ParseException__ctor_m1349999463 (ParseException_t1839361213 * __this, int32_t ___code, String_t* ___message, Exception_t1967233988 * ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseException/ErrorCode Parse.ParseException::get_Code()
extern "C"  int32_t ParseException_get_Code_m3715815010 (ParseException_t1839361213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseException::set_Code(Parse.ParseException/ErrorCode)
extern "C"  void ParseException_set_Code_m3800776513 (ParseException_t1839361213 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
