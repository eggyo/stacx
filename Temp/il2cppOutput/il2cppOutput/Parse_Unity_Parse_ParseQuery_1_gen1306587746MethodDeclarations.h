﻿#pragma once

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
#include "Parse_Unity_Parse_ParseQuery_1_gen3272614696MethodDeclarations.h"

// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::get_ClassName()
#define ParseQuery_1_get_ClassName_m385432659(__this, method) ((  String_t* (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_get_ClassName_m824608863_gshared)(__this, method)
// Parse.Internal.IParseQueryController Parse.ParseQuery`1<Parse.ParseInstallation>::get_QueryController()
#define ParseQuery_1_get_QueryController_m2284692610(__this /* static, unused */, method) ((  Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ParseQuery_1_get_QueryController_m982212878_gshared)(__this /* static, unused */, method)
// Parse.Internal.IObjectSubclassingController Parse.ParseQuery`1<Parse.ParseInstallation>::get_SubclassingController()
#define ParseQuery_1_get_SubclassingController_m661720978(__this /* static, unused */, method) ((  Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ParseQuery_1_get_SubclassingController_m1173972126_gshared)(__this /* static, unused */, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
#define ParseQuery_1__ctor_m4259224619(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, ___redirectClassNameForKey, method) ((  void (*) (ParseQuery_1_t1306587746 *, ParseQuery_1_t1306587746 *, Object_t*, Object_t*, Object_t*, Nullable_1_t1438485399 , Nullable_1_t1438485399 , Object_t*, Object_t*, String_t*, const MethodInfo*))ParseQuery_1__ctor_m2277996895_gshared)(__this, ___source, ___where, ___replacementOrderBy, ___thenBy, ___skip, ___limit, ___includes, ___selectedKeys, ___redirectClassNameForKey, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeIncludes_m3799900195(__this, ___includes, method) ((  HashSet_1_t3667177573 * (*) (ParseQuery_1_t1306587746 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeIncludes_m2030865303_gshared)(__this, ___includes, method)
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
#define ParseQuery_1_MergeSelectedKeys_m1462603839(__this, ___selectedKeys, method) ((  HashSet_1_t3667177573 * (*) (ParseQuery_1_t1306587746 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeSelectedKeys_m1724998067_gshared)(__this, ___selectedKeys, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ParseQuery_1_MergeWhereClauses_m609344660(__this, ___where, method) ((  Object_t* (*) (ParseQuery_1_t1306587746 *, Object_t*, const MethodInfo*))ParseQuery_1_MergeWhereClauses_m1716450696_gshared)(__this, ___where, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor()
#define ParseQuery_1__ctor_m1619052952(__this, method) ((  void (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1__ctor_m663142884_gshared)(__this, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::.ctor(System.String)
#define ParseQuery_1__ctor_m2229218410(__this, ___className, method) ((  void (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1__ctor_m4146335646_gshared)(__this, ___className, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
#define ParseQuery_1_Or_m716093167(__this /* static, unused */, ___queries, method) ((  ParseQuery_1_t1306587746 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))ParseQuery_1_Or_m1057334971_gshared)(__this /* static, unused */, ___queries, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderBy(System.String)
#define ParseQuery_1_OrderBy_m1186392633(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_OrderBy_m1664749293_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::OrderByDescending(System.String)
#define ParseQuery_1_OrderByDescending_m2506027553(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_OrderByDescending_m68339157_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenBy(System.String)
#define ParseQuery_1_ThenBy_m4287790256(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_ThenBy_m8253820_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::ThenByDescending(System.String)
#define ParseQuery_1_ThenByDescending_m3703249880(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_ThenByDescending_m992215460_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Include(System.String)
#define ParseQuery_1_Include_m169301878(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_Include_m647658538_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Select(System.String)
#define ParseQuery_1_Select_m4037543432(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_Select_m4052974292_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Skip(System.Int32)
#define ParseQuery_1_Skip_m340422670(__this, ___count, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, int32_t, const MethodInfo*))ParseQuery_1_Skip_m1759776450_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::Limit(System.Int32)
#define ParseQuery_1_Limit_m3179812080(__this, ___count, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, int32_t, const MethodInfo*))ParseQuery_1_Limit_m4230106300_gshared)(__this, ___count, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::RedirectClassName(System.String)
#define ParseQuery_1_RedirectClassName_m4273838679(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_RedirectClassName_m1836150283_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereContains(System.String,System.String)
#define ParseQuery_1_WhereContains_m3743835316(__this, ___key, ___substring, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereContains_m4198246248_gshared)(__this, ___key, ___substring, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereDoesNotExist(System.String)
#define ParseQuery_1_WhereDoesNotExist_m1770621018(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_WhereDoesNotExist_m3627899918_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEndsWith(System.String,System.String)
#define ParseQuery_1_WhereEndsWith_m3694889813(__this, ___key, ___suffix, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereEndsWith_m4149300745_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereEqualTo_m99957546(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereEqualTo_m3162657270_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereExists(System.String)
#define ParseQuery_1_WhereExists_m1772637211(__this, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_WhereExists_m2447505103_gshared)(__this, ___key, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThan(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThan_m2824315326(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThan_m2443473546_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereGreaterThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereGreaterThanOrEqualTo_m690170548(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereGreaterThanOrEqualTo_m1271299944_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThan(System.String,System.Object)
#define ParseQuery_1_WhereLessThan_m3633802347(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThan_m4088213279_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereLessThanOrEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereLessThanOrEqualTo_m3634893479(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereLessThanOrEqualTo_m3499104883_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_WhereMatches_m3511965104(__this, ___key, ___regex, ___modifiers, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m3325152868_gshared)(__this, ___key, ___regex, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
#define ParseQuery_1_WhereMatches_m1960642676(__this, ___key, ___regex, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Regex_t3802381858 *, const MethodInfo*))ParseQuery_1_WhereMatches_m2738162728_gshared)(__this, ___key, ___regex, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String,System.String)
#define ParseQuery_1_WhereMatches_m63695856(__this, ___key, ___pattern, ___modifiers, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m898837948_gshared)(__this, ___key, ___pattern, ___modifiers, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereMatches(System.String,System.String)
#define ParseQuery_1_WhereMatches_m823955124(__this, ___key, ___pattern, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereMatches_m3886654848_gshared)(__this, ___key, ___pattern, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNear(System.String,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereNear_m1960934916(__this, ___key, ___point, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, ParseGeoPoint_t1702854195 , const MethodInfo*))ParseQuery_1_WhereNear_m563176376_gshared)(__this, ___key, ___point, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereNotEqualTo(System.String,System.Object)
#define ParseQuery_1_WhereNotEqualTo_m789936777(__this, ___key, ___value, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, Object_t *, const MethodInfo*))ParseQuery_1_WhereNotEqualTo_m3687145533_gshared)(__this, ___key, ___value, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereStartsWith(System.String,System.String)
#define ParseQuery_1_WhereStartsWith_m3201263516(__this, ___key, ___suffix, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, String_t*, const MethodInfo*))ParseQuery_1_WhereStartsWith_m1803504976_gshared)(__this, ___key, ___suffix, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
#define ParseQuery_1_WhereWithinGeoBox_m172878780(__this, ___key, ___southwest, ___northeast, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, ParseGeoPoint_t1702854195 , ParseGeoPoint_t1702854195 , const MethodInfo*))ParseQuery_1_WhereWithinGeoBox_m1846606704_gshared)(__this, ___key, ___southwest, ___northeast, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
#define ParseQuery_1_WhereWithinDistance_m282334988(__this, ___key, ___point, ___maxDistance, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, String_t*, ParseGeoPoint_t1702854195 , ParseGeoDistance_t1336427412 , const MethodInfo*))ParseQuery_1_WhereWithinDistance_m1523234776_gshared)(__this, ___key, ___point, ___maxDistance, method)
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::WhereRelatedTo(Parse.ParseObject,System.String)
#define ParseQuery_1_WhereRelatedTo_m1483475258(__this, ___parent, ___key, method) ((  ParseQuery_1_t1306587746 * (*) (ParseQuery_1_t1306587746 *, ParseObject_t725725555 *, String_t*, const MethodInfo*))ParseQuery_1_WhereRelatedTo_m566744838_gshared)(__this, ___parent, ___key, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync()
#define ParseQuery_1_FindAsync_m2126644626(__this, method) ((  Task_1_t3897056280 * (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_FindAsync_m1562559262_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<Parse.ParseInstallation>::FindAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FindAsync_m2521821937(__this, ___cancellationToken, method) ((  Task_1_t3897056280 * (*) (ParseQuery_1_t1306587746 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FindAsync_m550129021_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync()
#define ParseQuery_1_FirstOrDefaultAsync_m810099742(__this, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m1718271978_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstOrDefaultAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstOrDefaultAsync_m3407375997(__this, ___cancellationToken, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FirstOrDefaultAsync_m1774982985_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync()
#define ParseQuery_1_FirstAsync_m3600551230(__this, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_FirstAsync_m1151450098_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::FirstAsync(System.Threading.CancellationToken)
#define ParseQuery_1_FirstAsync_m2122911645(__this, ___cancellationToken, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_FirstAsync_m3456766289_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync()
#define ParseQuery_1_CountAsync_m2255246884(__this, method) ((  Task_1_t706269945 * (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_CountAsync_m2852126488_gshared)(__this, method)
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<Parse.ParseInstallation>::CountAsync(System.Threading.CancellationToken)
#define ParseQuery_1_CountAsync_m2533596931(__this, ___cancellationToken, method) ((  Task_1_t706269945 * (*) (ParseQuery_1_t1306587746 *, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_CountAsync_m1514408695_gshared)(__this, ___cancellationToken, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String)
#define ParseQuery_1_GetAsync_m4070288362(__this, ___objectId, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_GetAsync_m650478774_gshared)(__this, ___objectId, method)
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::GetAsync(System.String,System.Threading.CancellationToken)
#define ParseQuery_1_GetAsync_m2786864315(__this, ___objectId, ___cancellationToken, method) ((  Task_1_t1024901924 * (*) (ParseQuery_1_t1306587746 *, String_t*, CancellationToken_t2348806009 , const MethodInfo*))ParseQuery_1_GetAsync_m4081336431_gshared)(__this, ___objectId, ___cancellationToken, method)
// System.Object Parse.ParseQuery`1<Parse.ParseInstallation>::GetConstraint(System.String)
#define ParseQuery_1_GetConstraint_m3072346820(__this, ___key, method) ((  Object_t * (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_GetConstraint_m3966211000_gshared)(__this, ___key, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::BuildParameters(System.Boolean)
#define ParseQuery_1_BuildParameters_m2730569890(__this, ___includeClassName, method) ((  Object_t* (*) (ParseQuery_1_t1306587746 *, bool, const MethodInfo*))ParseQuery_1_BuildParameters_m3265412398_gshared)(__this, ___includeClassName, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::RegexQuote(System.String)
#define ParseQuery_1_RegexQuote_m1331361252(__this, ___input, method) ((  String_t* (*) (ParseQuery_1_t1306587746 *, String_t*, const MethodInfo*))ParseQuery_1_RegexQuote_m890348272_gshared)(__this, ___input, method)
// System.String Parse.ParseQuery`1<Parse.ParseInstallation>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_GetRegexOptions_m3873097352(__this, ___regex, ___modifiers, method) ((  String_t* (*) (ParseQuery_1_t1306587746 *, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_GetRegexOptions_m1073374356_gshared)(__this, ___regex, ___modifiers, method)
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<Parse.ParseInstallation>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
#define ParseQuery_1_EncodeRegex_m2488412966(__this, ___regex, ___modifiers, method) ((  Object_t* (*) (ParseQuery_1_t1306587746 *, Regex_t3802381858 *, String_t*, const MethodInfo*))ParseQuery_1_EncodeRegex_m3741190066_gshared)(__this, ___regex, ___modifiers, method)
// System.Void Parse.ParseQuery`1<Parse.ParseInstallation>::EnsureNotInstallationQuery()
#define ParseQuery_1_EnsureNotInstallationQuery_m405802405(__this, method) ((  void (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_EnsureNotInstallationQuery_m3536354521_gshared)(__this, method)
// System.Boolean Parse.ParseQuery`1<Parse.ParseInstallation>::Equals(System.Object)
#define ParseQuery_1_Equals_m3701056533(__this, ___obj, method) ((  bool (*) (ParseQuery_1_t1306587746 *, Object_t *, const MethodInfo*))ParseQuery_1_Equals_m2227611233_gshared)(__this, ___obj, method)
// System.Int32 Parse.ParseQuery`1<Parse.ParseInstallation>::GetHashCode()
#define ParseQuery_1_GetHashCode_m176831661(__this, method) ((  int32_t (*) (ParseQuery_1_t1306587746 *, const MethodInfo*))ParseQuery_1_GetHashCode_m3049517945_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__57_0(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.Internal.IObjectState>>)
#define ParseQuery_1_U3CFindAsyncU3Eb__57_0_m3750930499(__this, ___t, method) ((  Object_t* (*) (ParseQuery_1_t1306587746 *, Task_1_t755451964 *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__57_0_m2962471287_gshared)(__this, ___t, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FindAsync>b__57_1(Parse.Internal.IObjectState)
#define ParseQuery_1_U3CFindAsyncU3Eb__57_1_m864183175(__this, ___state, method) ((  ParseInstallation_t3166046766 * (*) (ParseQuery_1_t1306587746 *, Object_t *, const MethodInfo*))ParseQuery_1_U3CFindAsyncU3Eb__57_1_m2286961299_gshared)(__this, ___state, method)
// T Parse.ParseQuery`1<Parse.ParseInstallation>::<FirstOrDefaultAsync>b__59_0(System.Threading.Tasks.Task`1<Parse.Internal.IObjectState>)
#define ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__59_0_m323679752(__this, ___t, method) ((  ParseInstallation_t3166046766 * (*) (ParseQuery_1_t1306587746 *, Task_1_t2178264903 *, const MethodInfo*))ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__59_0_m1260549244_gshared)(__this, ___t, method)
