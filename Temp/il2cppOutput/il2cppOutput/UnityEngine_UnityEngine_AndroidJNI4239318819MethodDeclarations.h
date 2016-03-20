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

// System.String
struct String_t;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t3760456605;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Int16[]
struct Int16U5BU5D_t3675865332;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.IntPtr[]
struct IntPtrU5BU5D_t2131596413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNI_FindClass_m1230259107 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedMethod_m352872801 (Object_t * __this /* static, unused */, IntPtr_t ___refMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedField_m576371562 (Object_t * __this /* static, unused */, IntPtr_t ___refField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
extern "C"  IntPtr_t AndroidJNI_ExceptionOccurred_m3001920724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
extern "C"  void AndroidJNI_ExceptionClear_m970305067 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewGlobalRef_m172051970 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteGlobalRef_m3178615354 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteLocalRef_m641765044 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_NewObject_m2867608803 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectClass_m798139855 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetMethodID_m2948332762 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetFieldID_m3253410731 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticMethodID_m2473492300 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticFieldID_m3515187961 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNI_NewStringUTF_m2984333834 (Object_t * __this /* static, unused */, String_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringUTFChars_m2788209029 (Object_t * __this /* static, unused */, IntPtr_t ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStringMethod_m3969973572 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallObjectMethod_m637661508 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallIntMethod_m2566231915 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallBooleanMethod_m2659085182 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallShortMethod_m1918107582 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallByteMethod_m4179587108 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallCharMethod_m1814770148 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallFloatMethod_m4115747916 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallDoubleMethod_m2741331268 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallLongMethod_m4476813 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallVoidMethod_m3567923620 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringField_m443868095 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectField_m1399131355 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetBooleanField_m3862375787 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetByteField_m3137655597 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
extern "C"  uint16_t AndroidJNI_GetCharField_m631396553 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetShortField_m3257591123 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetIntField_m2557591308 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetLongField_m2902181196 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetFloatField_m3256131653 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetDoubleField_m2203077439 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNI_SetStringField_m372505546 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectField_m3208409162 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, IntPtr_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNI_SetBooleanField_m1392330852 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNI_SetByteField_m2585488490 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNI_SetCharField_m1087495594 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNI_SetShortField_m1369434916 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, int16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNI_SetIntField_m2483905495 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNI_SetLongField_m1574088639 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNI_SetFloatField_m1773911506 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNI_SetDoubleField_m2028532682 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___fieldID, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStaticStringMethod_m1017965970 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallStaticObjectMethod_m3595893778 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallStaticIntMethod_m1635023773 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallStaticBooleanMethod_m4255357744 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallStaticShortMethod_m751555312 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallStaticByteMethod_m4090362162 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint16_t AndroidJNI_CallStaticCharMethod_m289365362 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallStaticFloatMethod_m3389844734 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallStaticDoubleMethod_m2003248530 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallStaticLongMethod_m3580480731 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallStaticVoidMethod_m1116615602 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___methodID, jvalueU5BU5D_t3760456605* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStaticStringField_m1861664525 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetStaticObjectField_m3723206057 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetStaticBooleanField_m4125732253 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetStaticByteField_m1987720379 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  uint16_t AndroidJNI_GetStaticCharField_m448194519 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetStaticShortField_m3116124933 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetStaticIntField_m642583742 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetStaticLongField_m724040346 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetStaticFloatField_m2480042103 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetStaticDoubleField_m2149996173 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNI_SetStaticStringField_m1775955800 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNI_SetStaticObjectField_m316892120 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, IntPtr_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNI_SetStaticBooleanField_m1488294002 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNI_SetStaticByteField_m1098274552 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNI_SetStaticCharField_m3895248952 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNI_SetStaticShortField_m2380950066 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, int16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNI_SetStaticIntField_m996691557 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNI_SetStaticLongField_m2715096817 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNI_SetStaticFloatField_m3066110084 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNI_SetStaticDoubleField_m3431982936 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, IntPtr_t ___fieldID, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNI_ToBooleanArray_m442048547 (Object_t * __this /* static, unused */, BooleanU5BU5D_t3804927312* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNI_ToByteArray_m1620048019 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNI_ToCharArray_m771488467 (Object_t * __this /* static, unused */, CharU5BU5D_t3416858730* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNI_ToShortArray_m2820620963 (Object_t * __this /* static, unused */, Int16U5BU5D_t3675865332* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNI_ToIntArray_m1134096790 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNI_ToLongArray_m3787458290 (Object_t * __this /* static, unused */, Int64U5BU5D_t753178071* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNI_ToFloatArray_m2734312239 (Object_t * __this /* static, unused */, SingleU5BU5D_t1219431280* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNI_ToDoubleArray_m1106831155 (Object_t * __this /* static, unused */, DoubleU5BU5D_t1048280995* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m3438267649 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t2131596413* ___array, IntPtr_t ___arrayClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3804927312* AndroidJNI_FromBooleanArray_m3435863496 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t58506160* AndroidJNI_FromByteArray_m1645613058 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t3416858730* AndroidJNI_FromCharArray_m325115202 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t3675865332* AndroidJNI_FromShortArray_m2832106632 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t1809983122* AndroidJNI_FromIntArray_m2891457973 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t753178071* AndroidJNI_FromLongArray_m2965481131 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t1219431280* AndroidJNI_FromFloatArray_m1756058774 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t1048280995* AndroidJNI_FromDoubleArray_m2441308386 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetArrayLength_m2368966142 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewObjectArray_m2427147689 (Object_t * __this /* static, unused */, int32_t ___size, IntPtr_t ___clazz, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNI_GetObjectArrayElement_m3151488507 (Object_t * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectArrayElement_m2717496490 (Object_t * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
