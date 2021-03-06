/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUIItem, UIImageView, SKUIItemOfferButton, SKUIItemState, UILabel, SKUIGiftTheme, UIImage, SKUIItemArtworkContext;

@interface SKUIGiftItemView : UIView {

	NSString* _artistName;
	NSString* _categoryName;
	SKUIClientContext* _clientContext;
	SKUIItem* _item;
	UIImageView* _itemImageView;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemState* _itemState;
	long long _itemStyle;
	long long _numberOfUserRatings;
	NSString* _price;
	UIImageView* _starRatingImageView;
	UILabel* _subtitleLabel1;
	UILabel* _subtitleLabel2;
	SKUIGiftTheme* _theme;
	UILabel* _titleLabel;
	float _userRating;
	UILabel* _userRatingCountLabel;

}

@property (nonatomic,readonly) long long giftItemStyle;                              //@synthesize itemStyle=_itemStyle - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                                    //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                  //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * price;                                         //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings;                          //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                                       //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,retain) SKUIItemState * itemState;                              //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIItem *)item;
-(NSString *)title;
-(NSString *)price;
-(NSString *)artistName;
-(NSString *)categoryName;
-(long long)numberOfUserRatings;
-(float)userRating;
-(void)_reloadUserRatingViews;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(id)_titleColor;
-(SKUIItemOfferButton *)itemOfferButton;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(SKUIItemState *)itemState;
-(SKUIItemArtworkContext *)artworkContext;
-(id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3 ;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setPrice:(NSString *)arg1 ;
-(CGSize)_imageSize;
-(id)_newLabel;
-(void)_reloadItemState:(BOOL)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)_reloadSubtitles;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(id)_subtitleColor;
-(double)_paddingRight;
-(UIEdgeInsets)_imageEdgeInsets;
-(double)_paddingLeft;
-(void)_enumerateMetadataViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)_userRatingColor;
-(long long)giftItemStyle;
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
@end

