/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface _UIModalItemAppViewController : UIViewController {

	UIWindow* _rotationDelegate;

}

@property (nonatomic,retain) UIWindow * rotationDelegate;              //@synthesize rotationDelegate=_rotationDelegate - In the implementation block
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(UIWindow *)rotationDelegate;
-(void)setRotationDelegate:(UIWindow *)arg1 ;
@end

