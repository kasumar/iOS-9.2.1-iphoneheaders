/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(void)documentScrollToTop:(id)arg1;
-(id)impressionableViewElementsForDocument:(id)arg1;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentDidUpdate:(id)arg1;
-(void)documentNeedsUpdate:(id)arg1;

@end
