/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownAppToHome.h>

@class SBLockScreenViewController, SBLockToAppStatusBarAnimator, SBIconAnimator, SBWindowSelfHostWrapper, SBWorkspaceTransitionRequest;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome {

	SBLockScreenViewController* _lockScreenViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconAnimator* _iconAnimator;
	SBWindowSelfHostWrapper* _alertWindowHostWrapper;
	SBWorkspaceTransitionRequest* _transitionRequest;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)cleanupZoom;
-(BOOL)_shouldDismissBanner;
-(void)dealloc;
@end
