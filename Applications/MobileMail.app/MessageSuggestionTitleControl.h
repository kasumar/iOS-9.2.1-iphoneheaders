/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, NSLayoutConstraint;

@interface MessageSuggestionTitleControl : UIControl {

	UIImageView* _iconStack;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _actionLabel;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelPaddingConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;

}

@property (nonatomic,retain,readonly) UIImageView * iconStack;                                       //@synthesize iconStack=_iconStack - In the implementation block
@property (nonatomic,retain,readonly) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * subtitleLabel;                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * actionLabel;                                         //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * topMarginConstraint;                      //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * interLabelPaddingConstraint;              //@synthesize interLabelPaddingConstraint=_interLabelPaddingConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * bottomMarginConstraint;                   //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(BOOL)requiresConstraintBasedLayout;
+(id)titleFont;
+(id)subtitleFont;
-(UIImageView *)iconStack;
-(NSLayoutConstraint *)interLabelPaddingConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(UILabel *)actionLabel;
-(void)setIconImage:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end
