/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol FBSceneHostView;
@class SBWindow, SBAlert, UIView, SBDisableAppStatusBarAlphaChangesAssertion, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeAlertToHostedApp : SBUIMainScreenAnimationController {

	SBWindow* _transitionWindow;
	SBAlert* _deactivatingAlert;
	UIView*<FBSceneHostView> _viewToAnimate;
	BOOL _reallyFinishedAnimating;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	long long _launchingOrientation;
	UIView* _fakeStatusBarViewContainer;
	BOOL _appIsTranslucent;

}

@property (setter=_setViewToAnimate:,getter=_viewToAnimate,nonatomic,retain) UIView * viewToAnimate;              //@synthesize viewToAnimate=_viewToAnimate - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_noteAnimationDidFinish;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(id)_viewToAnimate;
-(void)_maybeReportAnimationFinished;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_deactivatingAlert;
-(BOOL)_areApplicationLaunchesFinished;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_reallyFinishedAnimating;
-(void)_showFakeStatusBarIfNecessary;
-(void)_removeFakeStatusBarIfNecessary;
-(BOOL)_shouldAnimateWallpaper;
-(void)_setViewToAnimate:(id)arg1 ;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end
