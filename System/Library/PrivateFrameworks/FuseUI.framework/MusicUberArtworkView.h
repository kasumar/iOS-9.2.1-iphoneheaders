/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSArray;

@interface MusicUberArtworkView : UIImageView {

	CGRect _focusRect;
	NSArray* _focusRegions;

}

@property (nonatomic,copy) NSArray * focusRegions;              //@synthesize focusRegions=_focusRegions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setFocusRegions:(NSArray *)arg1 ;
-(NSArray *)focusRegions;
-(void)_musicArtworkViewCommonInitialization;
-(void)_updateFocusRect;
@end

