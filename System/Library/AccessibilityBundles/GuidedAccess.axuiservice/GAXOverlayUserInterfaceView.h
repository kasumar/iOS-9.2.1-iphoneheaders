/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXOverlayUserInterfaceViewDelegate;
@interface GAXOverlayUserInterfaceView : UIView {

	id<GAXOverlayUserInterfaceViewDelegate> _delegate;

}

@property (assign,nonatomic) id<GAXOverlayUserInterfaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<GAXOverlayUserInterfaceViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<GAXOverlayUserInterfaceViewDelegate>)delegate;
@end

