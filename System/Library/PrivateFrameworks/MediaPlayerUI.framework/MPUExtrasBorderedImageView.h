/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIColor;

@interface MPUExtrasBorderedImageView : UIImageView {

	BOOL _shouldDeferSettingTransform;
	BOOL _shouldUseTransformWhenReplicatingState;
	BOOL _shouldSkipImageWhenReplicatingState;
	CGAffineTransform _deferredTransform;

}

@property (nonatomic,copy) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) CGAffineTransform deferredTransform;                      //@synthesize deferredTransform=_deferredTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferSettingTransform;                         //@synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTransformWhenReplicatingState;              //@synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipImageWhenReplicatingState;                 //@synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState - In the implementation block
-(void)setTransform:(CGAffineTransform)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)replicateStateFromImageView:(id)arg1 ;
-(BOOL)shouldDeferSettingTransform;
-(void)setDeferredTransform:(CGAffineTransform)arg1 ;
-(BOOL)shouldSkipImageWhenReplicatingState;
-(BOOL)shouldUseTransformWhenReplicatingState;
-(CGAffineTransform)deferredTransform;
-(void)setShouldDeferSettingTransform:(BOOL)arg1 ;
-(void)setShouldUseTransformWhenReplicatingState:(BOOL)arg1 ;
-(void)setShouldSkipImageWhenReplicatingState:(BOOL)arg1 ;
@end
