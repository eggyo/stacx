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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct jvalue_t374581140;
struct jvalue_t374581140_marshaled;

extern "C" void jvalue_t374581140_marshal(const jvalue_t374581140& unmarshaled, jvalue_t374581140_marshaled& marshaled);
extern "C" void jvalue_t374581140_marshal_back(const jvalue_t374581140_marshaled& marshaled, jvalue_t374581140& unmarshaled);
extern "C" void jvalue_t374581140_marshal_cleanup(jvalue_t374581140_marshaled& marshaled);
