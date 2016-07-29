/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DECItem;

@interface _DECPredictionItem : NSObject <NSSecureCoding> {

	unsigned _appDeeplinkHeuristic;
	_DECItem* _item;
	double _confidence;

}

@property (nonatomic,readonly) _DECItem * item;                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned appDeeplinkHeuristic;              //@synthesize appDeeplinkHeuristic=_appDeeplinkHeuristic - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 ;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 appDeeplinkHeuristic:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_DECItem *)item;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(id)initWithItem:(id)arg1 confidence:(double)arg2 appDeeplinkHeuristic:(unsigned)arg3 ;
-(unsigned)appDeeplinkHeuristic;
-(void)setAppDeeplinkHeuristic:(unsigned)arg1 ;
@end
