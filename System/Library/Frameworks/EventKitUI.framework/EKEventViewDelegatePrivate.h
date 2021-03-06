/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEventViewDelegatePrivate <EKEventViewDelegate>
@optional
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1;
-(BOOL)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewController:(id)arg1 didDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewControllerDidBeginEditingEventWithEditViewController:(id)arg1;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(BOOL)arg2;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(BOOL)eventViewControllerShouldHandleInlineEdit:(id)arg1;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1;
-(BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1;
-(BOOL)eventViewControllerShouldHideDeleteButton;
-(BOOL)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg1;
-(void)eventViewControllerWillDisappear:(id)arg1;
-(BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1;

@end

