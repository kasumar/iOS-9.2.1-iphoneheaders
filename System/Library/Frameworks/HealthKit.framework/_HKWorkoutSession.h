/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, _HKWorkoutSessionDelegate;
@class NSObject, NSDate, NSUUID;

@interface _HKWorkoutSession : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _activityType;
	long long _locationType;
	id<_HKWorkoutSessionDelegate> _delegate;
	long long _state;
	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) unsigned long long activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) long long locationType;                                   //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic,__weak) id<_HKWorkoutSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
@property (readonly) NSDate * startDate;                                                 //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HKWorkoutSessionDelegate>)arg1 ;
-(id<_HKWorkoutSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)activityType;
-(NSUUID *)UUID;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)_validateWorkoutSession;
-(void)didChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(void)didFailWithError:(id)arg1 ;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(long long)locationType;
@end

