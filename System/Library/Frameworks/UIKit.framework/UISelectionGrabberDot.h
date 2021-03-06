/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(UISelectionGrabber *)grabber;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
@end

