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

// NativeShare
struct NativeShare_t3407556072;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_NativeShare_ConfigStruct364008919.h"
#include "AssemblyU2DCSharp_NativeShare_SocialSharingStruct3983109444.h"

// System.Void NativeShare::.ctor()
extern "C"  void NativeShare__ctor_m568423043 (NativeShare_t3407556072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::ShareScreenshotWithText(System.String)
extern "C"  void NativeShare_ShareScreenshotWithText_m2757420329 (NativeShare_t3407556072 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::Share(System.String,System.String,System.String,System.String)
extern "C"  void NativeShare_Share_m3051472502 (NativeShare_t3407556072 * __this, String_t* ___shareText, String_t* ___imagePath, String_t* ___url, String_t* ___subject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::showAlertMessage(NativeShare/ConfigStruct&)
extern "C"  void NativeShare_showAlertMessage_m1147432225 (Object_t * __this /* static, unused */, ConfigStruct_t364008919 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::showSocialSharing(NativeShare/SocialSharingStruct&)
extern "C"  void NativeShare_showSocialSharing_m963533802 (Object_t * __this /* static, unused */, SocialSharingStruct_t3983109444 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::CallSocialShare(System.String,System.String)
extern "C"  void NativeShare_CallSocialShare_m2532950217 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NativeShare::CallSocialShareAdvanced(System.String,System.String,System.String,System.String)
extern "C"  void NativeShare_CallSocialShareAdvanced_m736861887 (Object_t * __this /* static, unused */, String_t* ___defaultTxt, String_t* ___subject, String_t* ___url, String_t* ___img, const MethodInfo* method) IL2CPP_METHOD_ATTR;
