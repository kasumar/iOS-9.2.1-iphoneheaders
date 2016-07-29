/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPartitioner.h>

@class TSWPTOCInfo;

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner> {

	TSWPTOCInfo* _info;

}

@property (nonatomic,readonly) TSWPTOCInfo * info;              //@synthesize info=_info - In the implementation block
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(TSWPTOCInfo *)info;
@end
