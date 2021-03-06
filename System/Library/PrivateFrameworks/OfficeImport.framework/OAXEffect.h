/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXEffect : NSObject
+(void)writeShadowBase:(id)arg1 to:(id)arg2 ;
+(id)presetShadowTypeEnumMap;
+(void)readOuterShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readPresetShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readGlow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)writeOuterShadow:(id)arg1 includeRotateWithShape:(BOOL)arg2 to:(id)arg3 ;
+(void)writePresetShadow:(id)arg1 to:(id)arg2 ;
+(void)writeReflection:(id)arg1 to:(id)arg2 ;
+(void)writeGlow:(id)arg1 to:(id)arg2 ;
+(id)updateIncomingEffects:(id)arg1 ;
+(id)updateOutgoingEffects:(id)arg1 ;
+(id)readEffectsFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(BOOL)isEmpty:(id)arg1 ;
@end

