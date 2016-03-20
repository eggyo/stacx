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

// Parse.ParseObject
struct ParseObject_t725725555;
// System.Action`1<Parse.Internal.MutableObjectState>
struct Action_1_t933852373;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// Parse.Internal.IParseObjectController
struct IParseObjectController_t797443597;
// Parse.Internal.IObjectSubclassingController
struct IObjectSubclassingController_t1167871654;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t3597879911;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t3539089246;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t2879548009;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t2892217869;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1191556941;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t4056296927;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// Parse.ParseACL
struct ParseACL_t1119934136;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t3161233831;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2898121368;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_Parse_ParseObject725725555.h"
#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_Tasks_Task2616336456.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_Parse_ParseACL1119934136.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "System_System_ComponentModel_PropertyChangedEventH2898121368.h"

// System.Void Parse.ParseObject::MutateState(System.Action`1<Parse.Internal.MutableObjectState>)
extern "C"  void ParseObject_MutateState_m3298013823 (ParseObject_t725725555 * __this, Action_1_t933852373 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.ParseObject::get_State()
extern "C"  Object_t * ParseObject_get_State_m245816418 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseObjectController Parse.ParseObject::get_ObjectController()
extern "C"  Object_t * ParseObject_get_ObjectController_m1960201576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectSubclassingController Parse.ParseObject::get_SubclassingController()
extern "C"  Object_t * ParseObject_get_SubclassingController_m2331891842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor()
extern "C"  void ParseObject__ctor_m3935236552 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
extern "C"  void ParseObject__ctor_m1118294586 (ParseObject_t725725555 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
extern "C"  ParseObject_t725725555 * ParseObject_Create_m490018470 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
extern "C"  ParseObject_t725725555 * ParseObject_CreateWithoutData_m216313734 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.String,System.String)
extern "C"  String_t* ParseObject_GetFieldForPropertyName_m2476234352 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
extern "C"  void ParseObject_SetDefaultValues_m3076371261 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
extern "C"  void ParseObject_Revert_m1873014944 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::HandleFetchResult(Parse.Internal.IObjectState)
extern "C"  void ParseObject_HandleFetchResult_m1990610430 (ParseObject_t725725555 * __this, Object_t * ___serverState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::HandleFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C"  void ParseObject_HandleFailedSave_m2519149133 (ParseObject_t725725555 * __this, Object_t* ___operationsBeforeSave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::HandleSave(Parse.Internal.IObjectState)
extern "C"  void ParseObject_HandleSave_m1221262738 (ParseObject_t725725555 * __this, Object_t * ___serverState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(Parse.Internal.IObjectState)
extern "C"  void ParseObject_MergeFromServer_m3683026632 (ParseObject_t725725555 * __this, Object_t * ___serverState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
extern "C"  void ParseObject_MergeFromObject_m2665552852 (ParseObject_t725725555 * __this, ParseObject_t725725555 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
extern "C"  bool ParseObject_get_HasDirtyChildren_m2912477616 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseObject::DeepTraversal(System.Object,System.Boolean,System.Boolean)
extern "C"  Object_t* ParseObject_DeepTraversal_m1236658034 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, bool ___yieldRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseObject::DeepTraversalInternal(System.Object,System.Boolean,System.Collections.Generic.ICollection`1<System.Object>)
extern "C"  Object_t* ParseObject_DeepTraversalInternal_m2448455009 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, Object_t* ___seen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
extern "C"  Object_t* ParseObject_FindUnsavedChildren_m894456509 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
extern "C"  Object_t* ParseObject_CollectFetchedObjects_m1295428065 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C"  Object_t* ParseObject_ToJSONObjectForSaving_m2989707591 (Object_t * __this /* static, unused */, Object_t* ___operations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
extern "C"  Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m754218837 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
extern "C"  Object_t* ParseObject_StartSave_m4122040945 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObject_SaveAsync_m1489468139 (ParseObject_t725725555 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
extern "C"  Task_t2616336456 * ParseObject_SaveAsync_m3783968286 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObject_SaveAsync_m359764093 (ParseObject_t725725555 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_1_t2879548009 * ParseObject_FetchAsyncInternal_m3017267083 (ParseObject_t725725555 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObject_DeepSaveAsync_m264362791 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
extern "C"  Task_1_t2879548009 * ParseObject_FetchAsyncInternal_m1276976413 (ParseObject_t725725555 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_1_t2879548009 * ParseObject_FetchIfNeededAsyncInternal_m1590410617 (ParseObject_t725725555 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
extern "C"  Task_1_t2879548009 * ParseObject_FetchIfNeededAsyncInternal_m1719112715 (ParseObject_t725725555 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObject_DeleteAsync_m1986573309 (ParseObject_t725725555 * __this, Task_t2616336456 * ___toAwait, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
extern "C"  Task_t2616336456 * ParseObject_DeleteAsync_m1357877936 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseObject_DeleteAsync_m205568143 (ParseObject_t725725555 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
extern "C"  void ParseObject_CollectDirtyChildren_m4120086727 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
extern "C"  void ParseObject_CollectDirtyChildren_m2001387555 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
extern "C"  bool ParseObject_CanBeSerializedAsValue_m4204677020 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
extern "C"  bool ParseObject_get_CanBeSerialized_m2181569376 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
extern "C"  void ParseObject_Remove_m3172110274 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParseObject_ApplyOperations_m4080754337 (ParseObject_t725725555 * __this, Object_t* ___operations, Object_t* ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
extern "C"  void ParseObject_RebuildEstimatedData_m2924709735 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
extern "C"  void ParseObject_PerformOperation_m2889691807 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
extern "C"  void ParseObject_OnSettingValue_m888093880 (ParseObject_t725725555 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
extern "C"  Object_t * ParseObject_get_Item_m4070486815 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
extern "C"  void ParseObject_set_Item_m2299138308 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
extern "C"  void ParseObject_Set_m2731934024 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
extern "C"  void ParseObject_Increment_m1349116173 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
extern "C"  void ParseObject_Increment_m3084002411 (ParseObject_t725725555 * __this, String_t* ___key, int64_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
extern "C"  void ParseObject_Increment_m1003162313 (ParseObject_t725725555 * __this, String_t* ___key, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
extern "C"  void ParseObject_AddToList_m3059203760 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
extern "C"  void ParseObject_AddUniqueToList_m1754834335 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
extern "C"  bool ParseObject_ContainsKey_m3603729360 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
extern "C"  bool ParseObject_get_IsDataAvailable_m2993822462 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
extern "C"  bool ParseObject_CheckIsDataAvailable_m4227541477 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
extern "C"  void ParseObject_CheckGetAccess_m1942013268 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
extern "C"  void ParseObject_CheckKeyIsMutable_m3724465815 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
extern "C"  bool ParseObject_IsKeyMutable_m3263090913 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
extern "C"  bool ParseObject_HasSameId_m1890039118 (ParseObject_t725725555 * __this, ParseObject_t725725555 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
extern "C"  Object_t* ParseObject_get_CurrentOperations_m603069006 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
extern "C"  Object_t* ParseObject_get_Keys_m327716455 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
extern "C"  ParseACL_t1119934136 * ParseObject_get_ACL_m2232070954 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
extern "C"  void ParseObject_set_ACL_m900514913 (ParseObject_t725725555 * __this, ParseACL_t1119934136 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
extern "C"  bool ParseObject_get_IsNew_m2425248671 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
extern "C"  void ParseObject_set_IsNew_m708947798 (ParseObject_t725725555 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
extern "C"  Nullable_1_t3225071844  ParseObject_get_UpdatedAt_m3676322737 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
extern "C"  Nullable_1_t3225071844  ParseObject_get_CreatedAt_m3756194654 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
extern "C"  bool ParseObject_get_IsDirty_m2618837457 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
extern "C"  void ParseObject_set_IsDirty_m4009213448 (ParseObject_t725725555 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
extern "C"  bool ParseObject_IsKeyDirty_m1984251957 (ParseObject_t725725555 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
extern "C"  bool ParseObject_CheckIsDirty_m3576903559 (ParseObject_t725725555 * __this, bool ___considerChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
extern "C"  String_t* ParseObject_get_ObjectId_m1306577276 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
extern "C"  void ParseObject_set_ObjectId_m1433172015 (ParseObject_t725725555 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
extern "C"  void ParseObject_SetObjectIdInternal_m495415139 (ParseObject_t725725555 * __this, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
extern "C"  String_t* ParseObject_get_ClassName_m2234104387 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
extern "C"  void ParseObject_Add_m4022206825 (ParseObject_t725725555 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C"  Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m595855680 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m1964199617 (ParseObject_t725725555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
extern "C"  ParseQuery_1_t3161233831 * ParseObject_GetQuery_m1583649317 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void ParseObject_OnFieldsChanged_m489106393 (ParseObject_t725725555 * __this, Object_t* ___fieldNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
extern "C"  void ParseObject_OnPropertyChanged_m3080299036 (ParseObject_t725725555 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void ParseObject_add_PropertyChanged_m3072906719 (ParseObject_t725725555 * __this, PropertyChangedEventHandler_t2898121368 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C"  void ParseObject_remove_PropertyChanged_m2351450758 (ParseObject_t725725555 * __this, PropertyChangedEventHandler_t2898121368 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
extern "C"  void ParseObject__cctor_m1251152613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__49_1(System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>)
extern "C"  ParseObject_t725725555 * ParseObject_U3CFetchAsyncInternalU3Eb__49_1_m82438856 (ParseObject_t725725555 * __this, Task_1_t2178264903 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__61_1(System.Threading.Tasks.Task)
extern "C"  bool ParseObject_U3CDeleteAsyncU3Eb__61_1_m1941761762 (ParseObject_t725725555 * __this, Task_t2616336456 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
