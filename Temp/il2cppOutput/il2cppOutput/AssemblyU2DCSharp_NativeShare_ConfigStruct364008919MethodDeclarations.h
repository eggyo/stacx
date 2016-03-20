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
struct ConfigStruct_t364008919;
struct ConfigStruct_t364008919_marshaled;

extern "C" void ConfigStruct_t364008919_marshal(const ConfigStruct_t364008919& unmarshaled, ConfigStruct_t364008919_marshaled& marshaled);
extern "C" void ConfigStruct_t364008919_marshal_back(const ConfigStruct_t364008919_marshaled& marshaled, ConfigStruct_t364008919& unmarshaled);
extern "C" void ConfigStruct_t364008919_marshal_cleanup(ConfigStruct_t364008919_marshaled& marshaled);
