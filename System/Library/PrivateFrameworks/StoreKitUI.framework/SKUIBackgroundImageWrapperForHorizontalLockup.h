/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIImageView.h>

@class SKUIHorizontalLockupView, SKUIImageView;

@interface SKUIBackgroundImageWrapperForHorizontalLockup : SKUIImageView {

	SKUIHorizontalLockupView* _lockup;
	SKUIImageView* _imageView;

}

@property (assign,nonatomic,__weak) SKUIHorizontalLockupView * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (assign,nonatomic,__weak) SKUIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(SKUIImageView *)imageView;
-(void)setImageView:(SKUIImageView *)arg1 ;
-(void)setLockup:(SKUIHorizontalLockupView *)arg1 ;
-(SKUIHorizontalLockupView *)lockup;
@end

