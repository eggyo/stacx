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

// Parse.Internal.ParseObjectController/<>c
struct U3CU3Ec_t59692;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t3306624148;
// Parse.Internal.ParseCommand
struct ParseCommand_t2256508672;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1509325269;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_Internal_ParseCommand2256508672.h"

// System.Void Parse.Internal.ParseObjectController/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m3662473520 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseObjectController/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3597379101 (U3CU3Ec_t59692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.Internal.ParseObjectController/<>c::<FetchAsync>b__2_0(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C"  Object_t * U3CU3Ec_U3CFetchAsyncU3Eb__2_0_m835336555 (U3CU3Ec_t59692 * __this, Task_1_t3306624148 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.Internal.ParseObjectController/<>c::<SaveAsync>b__3_0(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C"  Object_t * U3CU3Ec_U3CSaveAsyncU3Eb__3_0_m3601298803 (U3CU3Ec_t59692 * __this, Task_1_t3306624148 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.ParseCommand Parse.Internal.ParseObjectController/<>c::<SaveAllAsync>b__4_0(Parse.Internal.IObjectState,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C"  ParseCommand_t2256508672 * U3CU3Ec_U3CSaveAllAsyncU3Eb__4_0_m4260290431 (U3CU3Ec_t59692 * __this, Object_t * ___item, Object_t* ___ops, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.Internal.ParseObjectController/<>c::<SaveAllAsync>b__4_1(System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C"  Object_t * U3CU3Ec_U3CSaveAllAsyncU3Eb__4_1_m2861768272 (U3CU3Ec_t59692 * __this, Task_1_t1509325269 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ParseObjectController/<>c::<DeleteAllAsync>b__6_0(Parse.Internal.IObjectState)
extern "C"  bool U3CU3Ec_U3CDeleteAllAsyncU3Eb__6_0_m1684429535 (U3CU3Ec_t59692 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.ParseCommand Parse.Internal.ParseObjectController/<>c::<DeleteAllAsync>b__6_1(Parse.Internal.IObjectState)
extern "C"  ParseCommand_t2256508672 * U3CU3Ec_U3CDeleteAllAsyncU3Eb__6_1_m3528148709 (U3CU3Ec_t59692 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Parse.Internal.ParseObjectController/<>c::<ExecuteBatchRequest>b__9_0(Parse.Internal.ParseCommand)
extern "C"  Dictionary_2_t2474804324 * U3CU3Ec_U3CExecuteBatchRequestU3Eb__9_0_m1213201509 (U3CU3Ec_t59692 * __this, ParseCommand_t2256508672 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
