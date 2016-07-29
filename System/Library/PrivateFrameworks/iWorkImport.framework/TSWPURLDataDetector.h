/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPDataDetectorProtocol.h>

@class NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newArrayByScanningString:(id)arg1 scanRange:(NSRange)arg2 ;
+(id)detectorIdentifier;
+(NSRange)calculateScanRangeForString:(id)arg1 changedRange:(NSRange)arg2 ;
+(id)scanString:(id)arg1 scanRange:(NSRange)arg2 ;
+(void)initURLCharacterSets;
+(NSRange)expandValidRange:(NSRange)arg1 inString:(id)arg2 ;
+(id)newURLFromString:(id)arg1 ;
+(void)setInvalidURLSchemes:(id)arg1 ;
@end
