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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_ParseClient_Configuration2731713750.h"
#include "mscorlib_System_String968488902.h"

// System.String Parse.ParseClient/Configuration::get_ApplicationId()
extern "C"  String_t* Configuration_get_ApplicationId_m2780751480 (Configuration_t2731713750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient/Configuration::set_ApplicationId(System.String)
extern "C"  void Configuration_set_ApplicationId_m185250497 (Configuration_t2731713750 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient/Configuration::get_Server()
extern "C"  String_t* Configuration_get_Server_m2977094488 (Configuration_t2731713750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient/Configuration::set_Server(System.String)
extern "C"  void Configuration_set_Server_m1544411987 (Configuration_t2731713750 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient/Configuration::get_WindowsKey()
extern "C"  String_t* Configuration_get_WindowsKey_m2300473521 (Configuration_t2731713750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient/Configuration::set_WindowsKey(System.String)
extern "C"  void Configuration_set_WindowsKey_m1657864730 (Configuration_t2731713750 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Configuration_t2731713750;
struct Configuration_t2731713750_marshaled;

extern "C" void Configuration_t2731713750_marshal(const Configuration_t2731713750& unmarshaled, Configuration_t2731713750_marshaled& marshaled);
extern "C" void Configuration_t2731713750_marshal_back(const Configuration_t2731713750_marshaled& marshaled, Configuration_t2731713750& unmarshaled);
extern "C" void Configuration_t2731713750_marshal_cleanup(Configuration_t2731713750_marshaled& marshaled);
