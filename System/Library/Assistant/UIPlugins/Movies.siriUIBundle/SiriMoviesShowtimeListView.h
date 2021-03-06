/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class NSSet, NSArray, UILabel;

@interface SiriMoviesShowtimeListView : UIView {

	BOOL _hasLeadingTypeLabel;
	NSSet* _showtimes;
	NSArray* _labelGroups;
	UILabel* _moreShowtimesIndicator;

}

@property (nonatomic,copy) NSSet * showtimes;                                                                //@synthesize showtimes=_showtimes - In the implementation block
@property (setter=_setLabelGroups:,getter=_labelGroups,nonatomic,copy) NSArray * labelGroups;                //@synthesize labelGroups=_labelGroups - In the implementation block
@property (getter=_moreShowtimesIndicator,nonatomic,readonly) UILabel * moreShowtimesIndicator;              //@synthesize moreShowtimesIndicator=_moreShowtimesIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasLeadingTypeLabel;                                                       //@synthesize hasLeadingTypeLabel=_hasLeadingTypeLabel - In the implementation block
-(void)setHasLeadingTypeLabel:(BOOL)arg1 ;
-(id)_mediumFont;
-(BOOL)_isShowtimeAnnotationLabel:(id)arg1 ;
-(id)_moreShowtimesIndicator;
-(void)_setLabelGroups:(id)arg1 ;
-(id)_labelGroups;
-(id)_createShowtimeLabelAsAnnotation:(BOOL)arg1 ;
-(void)_calculateLabelFramesForSize:(CGSize)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_labelStringForAllTheSameShowtimes;
-(BOOL)hasLeadingTypeLabel;
-(double)ascenderHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_defaultFont;
-(NSSet *)showtimes;
-(void)setShowtimes:(NSSet *)arg1 ;
@end

