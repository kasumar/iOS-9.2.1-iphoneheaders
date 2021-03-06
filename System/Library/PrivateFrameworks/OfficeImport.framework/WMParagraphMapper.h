/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class WDParagraph, OIXMLElement;

@interface WMParagraphMapper : CMMapper {

	WDParagraph* wdParagraph;
	WMParagraphMapper* mCurrentMapper;
	OIXMLElement* mActiveNode;
	BOOL mIsDeleted;

}
+(void)mapPlaceholderAt:(id)arg1 rect:(CGRect)arg2 withState:(id)arg3 ;
-(BOOL)isTextFrame;
-(BOOL)containsOfficeArt;
-(BOOL)isCollapsable:(id)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)activeNode;
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
-(id)runAtIndex:(unsigned long long)arg1 ;
-(void)mapParagraphBodyWithState:(id)arg1 ;
-(id)initWithBlock:(id)arg1 parent:(id)arg2 ;
@end

