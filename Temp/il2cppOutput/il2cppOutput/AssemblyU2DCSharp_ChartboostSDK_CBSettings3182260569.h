#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ChartboostSDK.CBSettings
struct CBSettings_t3182260569;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

// ChartboostSDK.CBSettings
struct  CBSettings_t3182260569  : public ScriptableObject_t184905905
{
	// System.String ChartboostSDK.CBSettings::iOSAppId
	String_t* ___iOSAppId_26;
	// System.String ChartboostSDK.CBSettings::iOSAppSecret
	String_t* ___iOSAppSecret_27;
	// System.String ChartboostSDK.CBSettings::androidAppId
	String_t* ___androidAppId_28;
	// System.String ChartboostSDK.CBSettings::androidAppSecret
	String_t* ___androidAppSecret_29;
	// System.String ChartboostSDK.CBSettings::amazonAppId
	String_t* ___amazonAppId_30;
	// System.String ChartboostSDK.CBSettings::amazonAppSecret
	String_t* ___amazonAppSecret_31;
	// System.Boolean ChartboostSDK.CBSettings::isLoggingEnabled
	bool ___isLoggingEnabled_32;
	// System.String[] ChartboostSDK.CBSettings::androidPlatformLabels
	StringU5BU5D_t2956870243* ___androidPlatformLabels_33;
	// System.Int32 ChartboostSDK.CBSettings::selectedAndroidPlatformIndex
	int32_t ___selectedAndroidPlatformIndex_34;
};
struct CBSettings_t3182260569_StaticFields{
	// System.Boolean ChartboostSDK.CBSettings::credentialsWarning
	bool ___credentialsWarning_24;
	// ChartboostSDK.CBSettings ChartboostSDK.CBSettings::instance
	CBSettings_t3182260569 * ___instance_25;
};
