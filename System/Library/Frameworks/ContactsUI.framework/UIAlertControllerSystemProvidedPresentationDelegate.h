/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>
@optional
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_didBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_willPerformSystemProvidedPresentationOfAlertController:(id)arg1;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(BOOL)arg2;
-(void)_didPerformSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(BOOL)arg2;

@required
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;

@end

