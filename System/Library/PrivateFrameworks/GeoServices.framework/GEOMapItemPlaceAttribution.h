/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * checkInURLs; 
@property (nonatomic,readonly) NSURL * webURL; 
-(NSURL *)webURL;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(id)urlsForDealWithIdentifier:(id)arg1 ;
-(NSArray *)checkInURLs;
@end
