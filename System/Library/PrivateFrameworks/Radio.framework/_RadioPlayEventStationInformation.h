/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _RadioPlayEventStationInformation : NSObject {

	NSString* _stationHash;
	long long _stationID;

}

@property (nonatomic,copy) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;               //@synthesize stationID=_stationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)stationID;
-(NSString *)stationHash;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
@end

