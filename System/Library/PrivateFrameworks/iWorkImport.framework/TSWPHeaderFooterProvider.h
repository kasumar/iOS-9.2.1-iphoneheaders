/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPHeaderFooterProvider <NSObject>
@required
-(BOOL)isHeaderFooterEmpty:(int)arg1;
-(BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
-(BOOL)usesSingleHeaderFooter;
-(int)headerFooterTypeForModel:(id)arg1;
-(int)headerFragmentIndexForModel:(id)arg1;
-(id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
-(id)headerFooterFragmentEnumerator;
-(double)bodyWidth;
-(id)documentRoot;

@end
