/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKHealthQueryChartCacheDataSource.h>

@class HKUnitController, HKQuantityType;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {

	HKUnitController* _unitController;
	/*^block*/id _mappingFunction;
	unsigned long long _statisticsOptions;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(unsigned long long)statisticsOptions;
-(HKQuantityType *)quantityType;
-(/*^block*/id)mappingFunction;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(/*^block*/id)_createMappingFunction;
-(id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 dataUnitGroup:(id)arg3 healthStore:(id)arg4 ;
@end
