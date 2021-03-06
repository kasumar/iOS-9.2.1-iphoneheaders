/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {

	UIDimmingView* _dimmingView;
	UIDropShadowView* _dropShadowView;
	BOOL _layoutStateShouldAvoidKeyboard;

}
-(double)_dropShadowCornerRadius;
-(long long)presentationStyle;
-(unsigned long long)dropShadowAutoresizingMask;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldHideBottomCorner;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(void)containerViewDidLayoutSubviews;
-(BOOL)shouldRemovePresentersView;
-(BOOL)shouldPresentInFullscreen;
-(id)_presentationView;
-(id)presentedView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldChangeStatusBarViewController;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 ;
@end

