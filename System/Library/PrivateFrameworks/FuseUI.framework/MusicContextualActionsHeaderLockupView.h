/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityHorizontalLockupView.h>

@class MusicDownloadProgressButton, UIImageView, MusicContextualActionsHeaderBlendingHighlightView, UIButton;

@interface MusicContextualActionsHeaderLockupView : MusicEntityHorizontalLockupView {

	MusicDownloadProgressButton* _downloadProgressButton;
	BOOL _highlighted;
	UIImageView* _disclosureImageView;
	MusicContextualActionsHeaderBlendingHighlightView* _highlightView;
	UIButton* _likeButton;
	UIButton* _radioButton;
	UIButton* _shareButton;
	BOOL _supportsRadio;
	BOOL _supportsSharing;
	BOOL _supportsSelection;
	long long _downloadProgressType;
	double _downloadProgress;
	unsigned long long _likeState;

}

@property (assign,nonatomic,__weak) id<MusicContextualActionsHeaderLockupViewDelegate> delegate; 
@property (assign,nonatomic) long long downloadProgressType;                                                  //@synthesize downloadProgressType=_downloadProgressType - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                                         //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long likeState;                                                    //@synthesize likeState=_likeState - In the implementation block
@property (assign,nonatomic) BOOL supportsRadio;                                                              //@synthesize supportsRadio=_supportsRadio - In the implementation block
@property (assign,nonatomic) BOOL supportsSharing;                                                            //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) BOOL supportsSelection;                                                          //@synthesize supportsSelection=_supportsSelection - In the implementation block
+(double)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_touchForEvent:(id)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)_shareButtonAction:(id)arg1 ;
-(void)music_inheritedLayoutInsetsDidChange;
-(UIEdgeInsets)music_inheritedLayoutInsets;
-(void)_configureArtworkCatalog:(id)arg1 ;
-(void)setDownloadProgressType:(long long)arg1 ;
-(void)setSupportsRadio:(BOOL)arg1 ;
-(void)setSupportsSelection:(BOOL)arg1 ;
-(void)setSupportsSharing:(BOOL)arg1 ;
-(void)setLikeState:(unsigned long long)arg1 ;
-(long long)downloadProgressType;
-(unsigned long long)likeState;
-(void)_downloadProgressButtonAction:(id)arg1 ;
-(void)_likeButtonAction:(id)arg1 ;
-(void)_radioButtonAction:(id)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 ;
-(BOOL)supportsRadio;
-(BOOL)supportsSharing;
-(BOOL)supportsSelection;
@end

