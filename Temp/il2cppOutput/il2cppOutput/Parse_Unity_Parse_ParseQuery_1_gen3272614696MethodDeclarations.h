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

// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t3272614696;
// System.String
struct String_t;
// Parse.Internal.IParseQueryController
struct IParseQueryController_t2436791042;
// Parse.Internal.IObjectSubclassingController
struct IObjectSubclassingController_t1167871654;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<System.Object>>
struct IEnumerable_1_t1849801756;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// Parse.ParseObject
struct ParseObject_t725725555;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t1568115935;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t2990928874;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t706269945;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.Internal.IObjectState>>
struct Task_1_t755451964;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>
struct Task_1_t2178264903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "Parse_Unity_Parse_ParseGeoDistance1336427412.h"
#include "Parse_Unity_Parse_ParseObject725725555.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.String Parse.ParseQuery`1<System.Object>::get_ClassName()
extern "C"  String_t* ParseQuery_1_get_ClassName_m824608863_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_get_ClassName_m824608863(__this, method) ((  String_t* (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_get_ClassName_m824608863_gshared)(__this, method)
// Parse.Internal.IParseQueryController Parse.ParseQuery`1<System.Object>::get_QueryController()
extern "C"  Object_t * ParseQuery_1_get_QueryController_m982212878_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ParseQuery_1_get_QueryController_m982212878(__this /* static, unused */, method) ((  Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ParseQuery_1_get_QueryController_m982212878_gshared)(__this /* static, unused */, method)
// Parse.Internal.IObjectSubclassingController Parse.ParseQuery`1<System.Object>::get_SubclassingController()
extern "C"  Object_t * ParseQuery_1_get_SubclassingController_m1173972126_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ParseQuery_1_get_SubclassingController_m1173972126(__this /* static, unused */, method) ((  Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ParseQuery_1_get_SubclassingController_m1173972126_gshared)(__this /* static, unused */, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
extern "C"  void ParseQuery_1__ctor_m2277996895_gshared (ParseQuery_1_t3272614696 * __this, ParseQuery_1_t3272614696 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t1438485399  ___skip, Nullable_1_t1438485399  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, String_t* ___redirectClassNameForKey, const MethodInfo* method);
#define ParseQuery_1__ctor_m2277996895(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, ___redirectClassNameForKey, method) ((  void (*) (ParseQuery_1_t3272614696 *, ParseQuery_1_t3272614696 *, Object_t*, Object_t*, Object_t*, Nullable_1_t1438485399 , Nullable_1_t1438485399 , Object_t*, Object_t*, String_t*, const MethodInfo*))ParseQuery_1__ctor_m2277996895_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, ___redirectClassNameForKey, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  HashSet_1_t3667177573 * ParseQuery_1_MergeIncludes_m2030865303_gshared (ParseQuery_1_t3272614696 * __this, Object_t* ___includes, const MethodInfo* method);
#define ParseQuery_1_MergeIncludes_m2030865303(__this, ___includes, method) ((  HashSet_1_t3667177573 * (*) (ParseQuery_1_t3272614696 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m2030865303_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  HashSet_1_t3667177573 * ParseQuery_1_MergeSelectedKeys_m1724998067_gshared (ParseQuery_1_t3272614696 * __this, Object_t* ___selectedKeys, const MethodInfo* method);
#define ParseQuery_1_MergeSelectedKeys_m1724998067(__this, ___selectedKeys, method) ((  HashSet_1_t3667177573 * (*) (ParseQuery_1_t3272614696 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m1724998067_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Object_t* ParseQuery_1_MergeWhereClauses_m1716450696_gshared (ParseQuery_1_t3272614696 * __this, Object_t* ___where, const MethodInfo* method);
#define ParseQuery_1_MergeWhereClauses_m1716450696(__this, ___where, method) ((  Object_t* (*) (ParseQuery_1_t3272614696 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m1716450696_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern "C"  void ParseQuery_1__ctor_m663142884_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1__ctor_m663142884(__this, method) ((  void (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1__ctor_m663142884_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern "C"  void ParseQuery_1__ctor_m4146335646_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___className, const MethodInfo* method);
#define ParseQuery_1__ctor_m4146335646(__this, ___className, method) ((  void (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m4146335646_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_Or_m1057334971_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method);
#define ParseQuery_1_Or_m1057334971(__this /* static, unused */, ___queries, method) ((  ParseQuery_1_t3272614696 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m1057334971_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_OrderBy_m1664749293_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderBy_m1664749293(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m1664749293_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_OrderByDescending_m68339157_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_OrderByDescending_m68339157(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m68339157_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_ThenBy_m8253820_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenBy_m8253820(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m8253820_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_ThenByDescending_m992215460_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_ThenByDescending_m992215460(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m992215460_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_Include_m647658538_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Include_m647658538(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m647658538_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_Select_m4052974292_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_Select_m4052974292(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m4052974292_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_Skip_m1759776450_gshared (ParseQuery_1_t3272614696 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Skip_m1759776450(__this, ___count, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m1759776450_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_Limit_m4230106300_gshared (ParseQuery_1_t3272614696 * __this, int32_t ___count, const MethodInfo* method);
#define ParseQuery_1_Limit_m4230106300(__this, ___count, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m4230106300_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::RedirectClassName(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_RedirectClassName_m1836150283_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_RedirectClassName_m1836150283(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_RedirectClassName_m1836150283_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereContains_m4198246248_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method);
#define ParseQuery_1_WhereContains_m4198246248(__this, ___key, ___substring, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m4198246248_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereDoesNotExist_m3627899918_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereDoesNotExist_m3627899918(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m3627899918_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereEndsWith_m4149300745_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereEndsWith_m4149300745(__this, ___key, ___suffix, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m4149300745_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereEqualTo_m3162657270_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereEqualTo_m3162657270(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m3162657270_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereExists_m2447505103_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereExists_m2447505103(__this, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m2447505103_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereGreaterThan_m2443473546_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThan_m2443473546(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m2443473546_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereGreaterThanOrEqualTo_m1271299944_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m1271299944(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m1271299944_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereLessThan_m4088213279_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThan_m4088213279(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m4088213279_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereLessThanOrEqualTo_m3499104883_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereLessThanOrEqualTo_m3499104883(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m3499104883_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereMatches_m3325152868_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Regex_t3802381858 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m3325152868(__this, ___key, ___regex, ___modifiers, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m3325152868_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereMatches_m2738162728_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Regex_t3802381858 * ___regex, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m2738162728(__this, ___key, ___regex, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Regex_t3802381858 *, const MethodInfo*))ParseQuery_1_WhereMatches_m2738162728_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereMatches_m898837948_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m898837948(__this, ___key, ___pattern, ___modifiers, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m898837948_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereMatches_m3886654848_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method);
#define ParseQuery_1_WhereMatches_m3886654848(__this, ___key, ___pattern, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m3886654848_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereNear_m563176376_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, ParseGeoPoint_t1702854195  ___point, const MethodInfo* method);
#define ParseQuery_1_WhereNear_m563176376(__this, ___key, ___point, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, ParseGeoPoint_t1702854195 , const MethodInfo*))ParseQuery_1_WhereNear_m563176376_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereNotEqualTo_m3687145533_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define ParseQuery_1_WhereNotEqualTo_m3687145533(__this, ___key, ___value, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m3687145533_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereStartsWith_m1803504976_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method);
#define ParseQuery_1_WhereStartsWith_m1803504976(__this, ___key, ___suffix, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m1803504976_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereWithinGeoBox_m1846606704_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, ParseGeoPoint_t1702854195  ___southwest, ParseGeoPoint_t1702854195  ___northeast, const MethodInfo* method);
#define ParseQuery_1_WhereWithinGeoBox_m1846606704(__this, ___key, ___southwest, ___northeast, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, ParseGeoPoint_t1702854195 , ParseGeoPoint_t1702854195 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m1846606704_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereWithinDistance_m1523234776_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, ParseGeoPoint_t1702854195  ___point, ParseGeoDistance_t1336427412  ___maxDistance, const MethodInfo* method);
#define ParseQuery_1_WhereWithinDistance_m1523234776(__this, ___key, ___point, ___maxDistance, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, String_t*, ParseGeoPoint_t1702854195 , ParseGeoDistance_t1336427412 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m1523234776_gshared)(__this, ___key, ___point, ___maxDistance, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern "C"  ParseQuery_1_t3272614696 * ParseQuery_1_WhereRelatedTo_m566744838_gshared (ParseQuery_1_t3272614696 * __this, ParseObject_t725725555 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_WhereRelatedTo_m566744838(__this, ___parent, ___key, method) ((  ParseQuery_1_t3272614696 * (*) (ParseQuery_1_t3272614696 *, ParseObject_t725725555 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m566744838_gshared)(__this, ___parent, ___key, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C"  Task_1_t1568115935 * ParseQuery_1_FindAsync_m1562559262_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m1562559262(__this, method) ((  Task_1_t1568115935 * (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_FindAsync_m1562559262_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t1568115935 * ParseQuery_1_FindAsync_m550129021_gshared (ParseQuery_1_t3272614696 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FindAsync_m550129021(__this, ___cancellationToken, method) ((  Task_1_t1568115935 * (*) (ParseQuery_1_t3272614696 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FindAsync_m550129021_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C"  Task_1_t2990928874 * ParseQuery_1_FirstOrDefaultAsync_m1718271978_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m1718271978(__this, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m1718271978_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2990928874 * ParseQuery_1_FirstOrDefaultAsync_m1774982985_gshared (ParseQuery_1_t3272614696 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstOrDefaultAsync_m1774982985(__this, ___cancellationToken, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m1774982985_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C"  Task_1_t2990928874 * ParseQuery_1_FirstAsync_m1151450098_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m1151450098(__this, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_FirstAsync_m1151450098_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t2990928874 * ParseQuery_1_FirstAsync_m3456766289_gshared (ParseQuery_1_t3272614696 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_FirstAsync_m3456766289(__this, ___cancellationToken, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FirstAsync_m3456766289_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C"  Task_1_t706269945 * ParseQuery_1_CountAsync_m2852126488_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m2852126488(__this, method) ((  Task_1_t706269945 * (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_CountAsync_m2852126488_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern "C"  Task_1_t706269945 * ParseQuery_1_CountAsync_m1514408695_gshared (ParseQuery_1_t3272614696 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_CountAsync_m1514408695(__this, ___cancellationToken, method) ((  Task_1_t706269945 * (*) (ParseQuery_1_t3272614696 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_CountAsync_m1514408695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C"  Task_1_t2990928874 * ParseQuery_1_GetAsync_m650478774_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___objectId, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m650478774(__this, ___objectId, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m650478774_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t2990928874 * ParseQuery_1_GetAsync_m4081336431_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___objectId, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method);
#define ParseQuery_1_GetAsync_m4081336431(__this, ___objectId, ___cancellationToken, method) ((  Task_1_t2990928874 * (*) (ParseQuery_1_t3272614696 *, String_t*, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_GetAsync_m4081336431_gshared)(__this, ___objectId, ___cancellationToken, method)
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern "C"  Object_t * ParseQuery_1_GetConstraint_m3966211000_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___key, const MethodInfo* method);
#define ParseQuery_1_GetConstraint_m3966211000(__this, ___key, method) ((  Object_t * (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m3966211000_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern "C"  Object_t* ParseQuery_1_BuildParameters_m3265412398_gshared (ParseQuery_1_t3272614696 * __this, bool ___includeClassName, const MethodInfo* method);
#define ParseQuery_1_BuildParameters_m3265412398(__this, ___includeClassName, method) ((  Object_t* (*) (ParseQuery_1_t3272614696 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m3265412398_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern "C"  String_t* ParseQuery_1_RegexQuote_m890348272_gshared (ParseQuery_1_t3272614696 * __this, String_t* ___input, const MethodInfo* method);
#define ParseQuery_1_RegexQuote_m890348272(__this, ___input, method) ((  String_t* (*) (ParseQuery_1_t3272614696 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m890348272_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern "C"  String_t* ParseQuery_1_GetRegexOptions_m1073374356_gshared (ParseQuery_1_t3272614696 * __this, Regex_t3802381858 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_GetRegexOptions_m1073374356(__this, ___regex, ___modifiers, method) ((  String_t* (*) (ParseQuery_1_t3272614696 *, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m1073374356_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern "C"  Object_t* ParseQuery_1_EncodeRegex_m3741190066_gshared (ParseQuery_1_t3272614696 * __this, Regex_t3802381858 * ___regex, String_t* ___modifiers, const MethodInfo* method);
#define ParseQuery_1_EncodeRegex_m3741190066(__this, ___regex, ___modifiers, method) ((  Object_t* (*) (ParseQuery_1_t3272614696 *, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m3741190066_gshared)(__this, ___regex, ___modifiers, method)
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern "C"  void ParseQuery_1_EnsureNotInstallationQuery_m3536354521_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_EnsureNotInstallationQuery_m3536354521(__this, method) ((  void (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m3536354521_gshared)(__this, method)
// System.Boolean Parse.ParseQuery`1<System.Object>::Equals(System.Object)
extern "C"  bool ParseQuery_1_Equals_m2227611233_gshared (ParseQuery_1_t3272614696 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseQuery_1_Equals_m2227611233(__this, ___obj, method) ((  bool (*) (ParseQuery_1_t3272614696 *, Object_t *, const MethodInfo*))ParseQuery_1_Equals_m2227611233_gshared)(__this, ___obj, method)
// System.Int32 Parse.ParseQuery`1<System.Object>::GetHashCode()
extern "C"  int32_t ParseQuery_1_GetHashCode_m3049517945_gshared (ParseQuery_1_t3272614696 * __this, const MethodInfo* method);
#define ParseQuery_1_GetHashCode_m3049517945(__this, method) ((  int32_t (*) (ParseQuery_1_t3272614696 *, const MethodInfo*))ParseQuery_1_GetHashCode_m3049517945_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__57_0(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.Internal.IObjectState>>)
extern "C"  Object_t* ParseQuery_1_U3CFindAsyncU3Eb__57_0_m2962471287_gshared (ParseQuery_1_t3272614696 * __this, Task_1_t755451964 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__57_0_m2962471287(__this, ___t, method) ((  Object_t* (*) (ParseQuery_1_t3272614696 *, Task_1_t755451964 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__57_0_m2962471287_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<System.Object>::<FindAsync>b__57_1(Parse.Internal.IObjectState)
extern "C"  Object_t * ParseQuery_1_U3CFindAsyncU3Eb__57_1_m2286961299_gshared (ParseQuery_1_t3272614696 * __this, Object_t * ___state, const MethodInfo* method);
#define ParseQuery_1_U3CFindAsyncU3Eb__57_1_m2286961299(__this, ___state, method) ((  Object_t * (*) (ParseQuery_1_t3272614696 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__57_1_m2286961299_gshared)(__this, ___state, method)
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__59_0(System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>)
extern "C"  Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__59_0_m1260549244_gshared (ParseQuery_1_t3272614696 * __this, Task_1_t2178264903 * ___t, const MethodInfo* method);
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__59_0_m1260549244(__this, ___t, method) ((  Object_t * (*) (ParseQuery_1_t3272614696 *, Task_1_t2178264903 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__59_0_m1260549244_gshared)(__this, ___t, method)
