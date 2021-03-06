/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(SUMaskProvider *)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
@end

