/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTable : NSObject
+(void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3 ;
+(void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
+(BOOL)isTableFloating:(const WrdTableProperties*)arg1 tracked:(const WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3 ;
+(BOOL)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
@end

