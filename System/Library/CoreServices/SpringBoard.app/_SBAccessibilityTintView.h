/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlur.h>
#import <SpringBoard/SBWallpaperObserver.h>

@protocol _SBFakeBlurObserver;
@class NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {

	long long _variant;
	BOOL _fullscreen;
	id<_SBFakeBlurObserver> _observer;

}

@property (assign,nonatomic) id<_SBFakeBlurObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL fullscreen;                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(long long)effectiveStyle;
-(BOOL)fullscreen;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)_updateBackgroundColor;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(id)initWithVariant:(long long)arg1 ;
@end

