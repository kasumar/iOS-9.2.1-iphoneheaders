/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXDrawable : NSObject
+(id)readDrawableFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualPropertiesFromDrawableXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 visualNodeName:(const char*)arg3 toDrawable:(id)arg4 drawingState:(id)arg5 ;
+(id)readDrawablesFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
@end
