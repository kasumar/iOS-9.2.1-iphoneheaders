/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIView, SKUIColorScheme, NSString, UIColor;

@interface SKUIProductPageTableExpandableHeaderView : UIControl {

	UILabel* _actionLabel;
	UIView* _bottomBorderView;
	UILabel* _titleLabel;
	UIView* _topBorderView;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,copy) NSString * actionString; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(NSString *)actionString;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(void)setActionString:(NSString *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end

