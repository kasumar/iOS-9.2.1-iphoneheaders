/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractFixedAxisBoundsScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	HKValueRange* _defaultAxisBounds;
	NSDictionary* _axisBoundsOverrides;
	BOOL _shouldExpandBoundsForOutliers;

}

@property (assign,nonatomic) BOOL shouldExpandBoundsForOutliers;                //@synthesize shouldExpandBoundsForOutliers=_shouldExpandBoundsForOutliers - In the implementation block
@property (nonatomic,readonly) HKValueRange * defaultAxisBounds;                //@synthesize defaultAxisBounds=_defaultAxisBounds - In the implementation block
@property (nonatomic,readonly) NSDictionary * axisBoundsOverrides;              //@synthesize axisBoundsOverrides=_axisBoundsOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)_valueRangeForZoomLevel:(long long)arg1 ;
-(BOOL)shouldExpandBoundsForOutliers;
-(void)setShouldExpandBoundsForOutliers:(BOOL)arg1 ;
-(HKValueRange *)defaultAxisBounds;
-(NSDictionary *)axisBoundsOverrides;
@end
