/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>

@protocol PSSplitViewControllerNavigationDelegate;
@class PSRootController;

@interface PSSplitViewController : UISplitViewController {

	PSRootController* _containerNavigationController;
	id<PSSplitViewControllerNavigationDelegate> _navigationDelegate;

}

@property (nonatomic,retain) PSRootController * containerNavigationController;                                   //@synthesize containerNavigationController=_containerNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarStyle;
-(void)popRecursivelyToRootController;
-(PSRootController *)containerNavigationController;
-(void)setupControllerForToolbar:(id)arg1 ;
-(void)showInitialViewController:(id)arg1 ;
-(void)setContainerNavigationController:(PSRootController *)arg1 ;
-(id<PSSplitViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<PSSplitViewControllerNavigationDelegate>)arg1 ;
@end
