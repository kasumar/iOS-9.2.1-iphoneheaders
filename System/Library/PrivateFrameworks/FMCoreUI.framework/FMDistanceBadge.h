/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <FMCoreUI/FMDynamicTypeLabel.h>

@class UIColor;

@interface FMDistanceBadge : FMDynamicTypeLabel {

	UIColor* _badgeColor;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIColor * badgeColor;              //@synthesize badgeColor=_badgeColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;               //@synthesize insets=_insets - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)prepareForInterfaceBuilder;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)_commonSetup;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
@end
