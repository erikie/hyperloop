/**
 * Copyright (c) 2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * This generated code and related technologies are covered by patents
 * or patents pending by Appcelerator, Inc.
 */

/**
 * for backwards Ti.current support, we remap all the JS* to Ti*
 * so that we can compile against a older version of titanium
 */

#define JSGlobalContextRef TiGlobalContextRef
#define JSContextGetGlobalObject TiContextGetGlobalObject
#define JSGlobalContextRelease TiGlobalContextRelease
#define JSGlobalContextRetain TiGlobalContextRetain
#define JSGlobalContextCreate TiGlobalContextCreate
#define JSGlobalContextCreateInGroup TiGlobalContextCreateInGroup
#define JSContextGetGroup TiContextGetGroup
#define JSContextRef TiContextRef
#define JSObjectRef TiObjectRef
#define JSValueRef TiValueRef
#define JSStringRef TiStringRef
#define JSValueMakeUndefined TiValueMakeUndefined
#define JSValueMakeNull TiValueMakeNull
#define JSValueMakeNumber TiValueMakeNumber
#define JSValueMakeBoolean TiValueMakeBoolean
#define JSValueMakeString TiValueMakeString
#define JSValueMakeFromJSONString TiValueMakeFromJSONString
#define JSValueToObject TiValueToObject
#define JSValueToNumber TiValueToNumber
#define JSValueToStringCopy TiValueToStringCopy
#define JSValueToBoolean TiValueToBoolean
#define JSObjectMakeFunction TiObjectMakeFunction
#define JSObjectMakeFunctionWithCallback TiObjectMakeFunctionWithCallback
#define JSObjectCallAsFunction TiObjectCallAsFunction
#define JSObjectSetPrivate TiObjectSetPrivate
#define JSObjectGetPrivate TiObjectGetPrivate
#define JSValueProtect TiValueProtect
#define JSValueUnprotect TiValueUnprotect
#define JSStringRelease TiStringRelease
#define JSStringCreateWithUTF8CString TiStringCreateWithUTF8CString
#define JSValueIsUndefined TiValueIsUndefined
#define JSValueIsNull TiValueIsNull
#define JSValueIsBoolean TiValueIsBoolean
#define JSValueIsNumber TiValueIsNumber
#define JSValueIsString TiValueIsString
#define JSValueIsObject TiValueIsObject
#define JSValueIsArray TiValueIsArray
#define JSValueIsDate TiValueIsDate
#define JSObjectIsFunction TiObjectIsFunction
#define JSValueIsObjectOfClass TiValueIsObjectOfClass
#define JSValueIsEqual TiValueIsEqual
#define JSValueIsStrictEqual TiValueIsStrictEqual
#define JSValueIsInstanceOfConstructor TiValueIsInstanceOfConstructor
#define JSValueCreateJSONString TiValueCreateJSONString
#define JSStringGetUTF8CString TiStringGetUTF8CString
#define JSValueToStringCopy TiValueToStringCopy
#define JSStringGetMaximumUTF8CStringSize TiStringGetMaximumUTF8CStringSize
#define JSStringGetCharactersPtr TiStringGetCharactersPtr
#define JSStringCreateWithCharacters TiStringCreateWithCharacters
#define JSStringRetain TiStringRetain
#define JSStringGetLength TiStringGetLength
#define JSStringIsEqual TiStringIsEqual
#define JSStringIsEqualToUTF8CString TiStringIsEqualToUTF8CString
#define JSObjectSetProperty TiObjectSetProperty
#define JSObjectGetProperty TiObjectGetProperty
#define JSObjectMake TiObjectMake
#define JSObjectMakeError TiObjectMakeError
#define JSObjectMakeArray TiObjectMakeArray
#define JSObjectHasProperty TiObjectHasProperty
#define JSObjectCallAsFunctionCallback TiObjectCallAsFunctionCallback
#define JSObjectCallAsConstructorCallback TiObjectCallAsConstructorCallback
#define JSObjectInitializeCallback TiObjectInitializeCallback
#define JSObjectFinalizeCallback TiObjectFinalizeCallback
#define JSObjectConvertToTypeCallback TiObjectConvertToTypeCallback
#define JSObjectHasInstanceCallback TiObjectHasInstanceCallback
#define kJSPropertyAttributeNone kTiPropertyAttributeNone
#define kJSPropertyAttributeReadOnly kTiPropertyAttributeReadOnly
#define kJSPropertyAttributeDontEnum kTiPropertyAttributeDontEnum
#define kJSPropertyAttributeDontDelete kTiPropertyAttributeDontDelete
#define JSClassRef TiClassRef
#define JSClassCreate TiClassCreate
#define JSClassRetain TiClassRetain
#define JSClassRelease TiClassRelease
#define JSStaticValue TiStaticValue
#define JSStaticFunction TiStaticFunction
#define JSClassDefinition TiClassDefinition
#define kJSClassDefinitionEmpty kTiClassDefinitionEmpty
#define JSObjectGetPropertyAtIndex TiObjectGetPropertyAtIndex
#define JSObjectCopyPropertyNames TiObjectCopyPropertyNames
#define JSPropertyNameArrayRef TiPropertyNameArrayRef
#define JSEvaluateScript TiEvalScript
#define JSCheckScriptSyntax TiCheckScriptSyntax
#define JSGarbageCollect TiGarbageCollect
#define JSContextGroupRef TiContextGroupRef
#define JSContextGroupCreate TiContextGroupCreate
#define JSContextGroupRetain TiContextGroupRetain
#define JSContextGroupRelease TiContextGroupRelease
#define JSPropertyNameArrayRef TiPropertyNameArrayRef
#define JSPropertyNameAccumulatorRef TiPropertyNameAccumulatorRef
#define JSPropertyNameArrayGetCount TiPropertyNameArrayGetCount
#define JSPropertyNameArrayGetNameAtIndex TiPropertyNameArrayGetNameAtIndex
#define JSPropertyNameArrayRelease TiPropertyNameArrayRelease
#define JSType TiType
#define kJSTypeUndefined kTITypeUndefined
#define kJSTypeNull kTITypeNull
#define kJSTypeBoolean kTITypeBoolean
#define kJSTypeNumber kTITypeNumber
#define kJSTypeString kTITypeString
#define kJSTypeObject kTITypeObject
#define JSValueGetType TiValueGetType
#define JSStartProfiling TiStartProfiling
#define JSEndProfiling TiEndProfiling
