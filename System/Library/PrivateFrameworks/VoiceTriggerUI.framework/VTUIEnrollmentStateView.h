/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSLayoutConstraint, UIButton;

@interface VTUIEnrollmentStateView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	NSLayoutConstraint* _imageViewHeightCapConstraint;
	UIButton* _finishEnrollmentButton;

}

@property (nonatomic,readonly) UIButton * finishEnrollmentButton;              //@synthesize finishEnrollmentButton=_finishEnrollmentButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)footerView;
-(void)_setupUI;
-(UIButton *)finishEnrollmentButton;
-(void)fadeInSubviews;
-(void)setInstructionText:(id)arg1 ;
-(void)_positionFooter;
@end

