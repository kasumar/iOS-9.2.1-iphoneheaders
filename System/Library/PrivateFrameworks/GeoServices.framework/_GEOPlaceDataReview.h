/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemReview.h>

@class NSString, NSDate, GEOPDPlace, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {

	GEOPDPlace* _placeData;
	GEOPDReview* _review;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
-(void)dealloc;
-(double)_score;
-(double)_maxScore;
-(id)_date;
-(double)_normalizedScore;
-(id)_localizedSnippet;
-(id)initWithPlaceData:(id)arg1 review:(id)arg2 ;
-(id)_reviewerName;
-(id)_reviewerImageURLString;
-(id)_identifier;
@end

