/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class NSString;

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id _userInfo;
	CGPoint _min;
	CGPoint _max;

}

@property (nonatomic,readonly) CGPoint min;                         //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) CGPoint max;                         //@synthesize max=_max - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id userInfo; 
-(CGPoint)max;
-(NSString *)description;
-(id)userInfo;
-(CGPoint)min;
-(id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 ;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(double)startXValue;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 ;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(double)endXValue;
-(id)initWithMin:(CGPoint)arg1 max:(CGPoint)arg2 userInfo:(id)arg3 ;
@end

