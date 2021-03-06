/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUMarqueeView, UILabel, UIImageView, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingTitlesView : UIView {

	MPUMarqueeView* _titleMarqueeView;
	MPUMarqueeView* _detailMarqueeView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIImageView* _explicitImageView;
	BOOL _needsLabelUpdate;
	BOOL _explicit;
	long long _style;
	NSDictionary* _titleTextAttributes;
	NSDictionary* _detailTextAttributes;
	NSString* _albumText;
	NSString* _artistText;
	NSString* _stationNameText;
	double _textMargin;
	double _titleLeading;
	NSString* _titleText;
	UIImage* _explicitImage;
	UIEdgeInsets _titleMarqueeEdgeInsets;
	UIEdgeInsets _detailMarqueeEdgeInsets;

}

@property (assign,nonatomic) long long style;                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;                       //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * detailTextAttributes;                      //@synthesize detailTextAttributes=_detailTextAttributes - In the implementation block
@property (nonatomic,copy) NSString * albumText;                                       //@synthesize albumText=_albumText - In the implementation block
@property (nonatomic,copy) NSString * artistText;                                      //@synthesize artistText=_artistText - In the implementation block
@property (assign,getter=isExplicit,nonatomic) BOOL explicit;                          //@synthesize explicit=_explicit - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled; 
@property (nonatomic,copy) NSString * stationNameText;                                 //@synthesize stationNameText=_stationNameText - In the implementation block
@property (assign,nonatomic) double textMargin;                                        //@synthesize textMargin=_textMargin - In the implementation block
@property (assign,nonatomic) double titleLeading;                                      //@synthesize titleLeading=_titleLeading - In the implementation block
@property (nonatomic,readonly) double titleBaselineOffsetFromBottom; 
@property (nonatomic,copy) NSString * titleText;                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIImage * explicitImage;                                  //@synthesize explicitImage=_explicitImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleMarqueeEdgeInsets;                      //@synthesize titleMarqueeEdgeInsets=_titleMarqueeEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets detailMarqueeEdgeInsets;                     //@synthesize detailMarqueeEdgeInsets=_detailMarqueeEdgeInsets - In the implementation block
+(Class)labelClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setStyle:(long long)arg1 ;
-(id)_titleLabel;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(id)_detailLabel;
-(void)setExplicitImage:(UIImage *)arg1 ;
-(NSDictionary *)detailTextAttributes;
-(void)setDetailTextAttributes:(NSDictionary *)arg1 ;
-(void)_updateAttributedTitleLabel;
-(void)setAlbumText:(NSString *)arg1 ;
-(void)setArtistText:(NSString *)arg1 ;
-(void)setExplicit:(BOOL)arg1 ;
-(void)setStationNameText:(NSString *)arg1 ;
-(void)setTextMargin:(double)arg1 ;
-(double)titleBaselineOffsetFromBottom;
-(void)resetMarqueePositions;
-(id)_titleMarqueeView;
-(id)_detailMarqueeView;
-(NSString *)albumText;
-(NSString *)artistText;
-(BOOL)isExplicit;
-(NSString *)stationNameText;
-(double)textMargin;
-(double)titleLeading;
-(void)setTitleLeading:(double)arg1 ;
-(UIImage *)explicitImage;
-(UIEdgeInsets)titleMarqueeEdgeInsets;
-(void)setTitleMarqueeEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)detailMarqueeEdgeInsets;
-(void)setDetailMarqueeEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(BOOL)isMarqueeEnabled;
@end

