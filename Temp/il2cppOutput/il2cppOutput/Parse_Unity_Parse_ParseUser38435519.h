#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>
struct IDictionary_2_t1710100678;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Object
struct Object_t;

#include "Parse_Unity_Parse_ParseObject725725555.h"

// Parse.ParseUser
struct  ParseUser_t38435519  : public ParseObject_t725725555
{
};
struct ParseUser_t38435519_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider> Parse.ParseUser::authProviders
	Object_t* ___authProviders_10;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseUser::readOnlyKeys
	HashSet_1_t3667177573 * ___readOnlyKeys_11;
	// System.Object Parse.ParseUser::isRevocableSessionEnabledMutex
	Object_t * ___isRevocableSessionEnabledMutex_12;
	// System.Boolean Parse.ParseUser::isRevocableSessionEnabled
	bool ___isRevocableSessionEnabled_13;
};
