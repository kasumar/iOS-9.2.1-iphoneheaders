/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate {

	double _distance;

}

@property (readonly) double distance;              //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(id)title;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3 ;
-(id)_titleWithPlacemark:(id)arg1 ;
-(id)initWithDistance:(double)arg1 ;
-(double)distance;
@end

