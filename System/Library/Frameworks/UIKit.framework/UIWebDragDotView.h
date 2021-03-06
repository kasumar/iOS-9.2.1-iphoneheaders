/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface UIWebDragDotView : UIView {

	UIColor* m_insertionPointColor;
	UIColor* m_selectionBarColor;
	UIImageView* m_dot;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}

@property (assign,nonatomic) BOOL showsBall; 
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isVertical;
-(BOOL)isPointedDown;
-(BOOL)isPointedUp;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(void)setEdge:(CGRect)arg1 ;
-(void)setShowsBall:(BOOL)arg1 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(BOOL)showsBall;
@end

