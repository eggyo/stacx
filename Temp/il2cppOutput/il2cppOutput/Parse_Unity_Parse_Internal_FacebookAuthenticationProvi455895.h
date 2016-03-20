#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct TaskCompletionSource_1_t2964035380;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.String
struct String_t;
// System.Action`1<System.Uri>
struct Action_1_t2925145666;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// Parse.Internal.FacebookAuthenticationProvider
struct  FacebookAuthenticationProvider_t455895  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.FacebookAuthenticationProvider::pendingTask
	TaskCompletionSource_1_t2964035380 * ___pendingTask_4;
	// System.Threading.CancellationToken Parse.Internal.FacebookAuthenticationProvider::pendingCancellationToken
	CancellationToken_t2348806009  ___pendingCancellationToken_5;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<LoginDialogUrlOverride>k__BackingField
	Uri_t2776692961 * ___U3CLoginDialogUrlOverrideU3Ek__BackingField_6;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::<ResponseUrlOverride>k__BackingField
	Uri_t2776692961 * ___U3CResponseUrlOverrideU3Ek__BackingField_7;
	// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.FacebookAuthenticationProvider::<Permissions>k__BackingField
	Object_t* ___U3CPermissionsU3Ek__BackingField_8;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_9;
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_10;
	// System.Action`1<System.Uri> Parse.Internal.FacebookAuthenticationProvider::Navigate
	Action_1_t2925145666 * ___Navigate_11;
};
struct FacebookAuthenticationProvider_t455895_StaticFields{
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::LoginDialogUrl
	Uri_t2776692961 * ___LoginDialogUrl_0;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::TokenExtensionUrl
	Uri_t2776692961 * ___TokenExtensionUrl_1;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::ResponseUrl
	Uri_t2776692961 * ___ResponseUrl_2;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::MeUrl
	Uri_t2776692961 * ___MeUrl_3;
};
