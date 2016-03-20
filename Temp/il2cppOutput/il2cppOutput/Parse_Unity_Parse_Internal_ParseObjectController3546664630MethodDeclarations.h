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

// Parse.Internal.ParseObjectController
struct ParseObjectController_t3546664630;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>>
struct IList_1_t49789921;
// System.Collections.Generic.IList`1<Parse.Internal.IObjectState>
struct IList_1_t2190934763;
// System.Collections.Generic.IList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IList_1_t446218340;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task>
struct IList_1_t487861474;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct IList_1_t3675817583;
// System.Collections.Generic.IList`1<Parse.Internal.ParseCommand>
struct IList_1_t128033690;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseObjectController::.ctor(Parse.Internal.IParseCommandRunner)
extern "C"  void ParseObjectController__ctor_m541972692 (ParseObjectController_t3546664630 * __this, Object_t * ___commandRunner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseObjectController::FetchAsync(Parse.Internal.IObjectState,System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseObjectController_FetchAsync_m369965970 (ParseObjectController_t3546664630 * __this, Object_t * ___state, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState> Parse.Internal.ParseObjectController::SaveAsync(Parse.Internal.IObjectState,System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2178264903 * ParseObjectController_SaveAsync_m437783896 (ParseObjectController_t3546664630 * __this, Object_t * ___state, Object_t* ___operations, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>> Parse.Internal.ParseObjectController::SaveAllAsync(System.Collections.Generic.IList`1<Parse.Internal.IObjectState>,System.Collections.Generic.IList`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>,System.String,System.Threading.CancellationToken)
extern "C"  Object_t* ParseObjectController_SaveAllAsync_m2641529326 (ParseObjectController_t3546664630 * __this, Object_t* ___states, Object_t* ___operationsList, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.ParseObjectController::DeleteAsync(Parse.Internal.IObjectState,System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObjectController_DeleteAsync_m1069757979 (ParseObjectController_t3546664630 * __this, Object_t * ___state, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task> Parse.Internal.ParseObjectController::DeleteAllAsync(System.Collections.Generic.IList`1<Parse.Internal.IObjectState>,System.String,System.Threading.CancellationToken)
extern "C"  Object_t* ParseObjectController_DeleteAllAsync_m3771135584 (ParseObjectController_t3546664630 * __this, Object_t* ___states, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.Internal.ParseObjectController::ExecuteBatchRequests(System.Collections.Generic.IList`1<Parse.Internal.ParseCommand>,System.String,System.Threading.CancellationToken)
extern "C"  Object_t* ParseObjectController_ExecuteBatchRequests_m2738957275 (ParseObjectController_t3546664630 * __this, Object_t* ___requests, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.Internal.ParseObjectController::ExecuteBatchRequest(System.Collections.Generic.IList`1<Parse.Internal.ParseCommand>,System.String,System.Threading.CancellationToken)
extern "C"  Object_t* ParseObjectController_ExecuteBatchRequest_m1200423854 (ParseObjectController_t3546664630 * __this, Object_t* ___requests, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
