/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraphProperties : NSObject
+(void)mapWordProperties:(WrdParagraphProperties*)arg1 reader:(id)arg2 toProperties:(id)arg3 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdParagraphProperties*)arg2 tracked:(WrdParagraphProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(WrdParagraphProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(id)formattingChangeDate:(const WrdDateTime*)arg1 ;
@end
