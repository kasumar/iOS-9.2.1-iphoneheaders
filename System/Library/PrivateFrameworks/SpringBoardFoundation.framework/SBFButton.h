/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIButton.h>

@interface SBFButton : UIButton
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_drawingAsSelected;
-(void)_touchUpInside;
-(void)_updateForStateChange;
@end

