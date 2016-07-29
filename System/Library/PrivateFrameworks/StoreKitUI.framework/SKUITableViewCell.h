/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell {

	SKUIBorderView* _bottomBorderView;
	SKUIBorderView* _topBorderView;
	double _titlePaddingLeft;
	UIEdgeInsets _textLabelInsets;
	double _borderPaddingLeft;

}

@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
@property (assign,nonatomic) double borderPaddingLeft;                  //@synthesize borderPaddingLeft=_borderPaddingLeft - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textLabelInsets;              //@synthesize textLabelInsets=_textLabelInsets - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBorderPaddingLeft:(double)arg1 ;
-(void)setTextLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(void)_reloadBorderVisibility;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(double)borderPaddingLeft;
-(UIEdgeInsets)textLabelInsets;
@end
