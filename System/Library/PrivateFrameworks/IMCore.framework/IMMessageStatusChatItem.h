/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem {

	long long _statusType;
	NSDate* _time;
	long long _expireStatusType;
	NSDate* _timeAdded;
	NSDate* _timeStale;
	unsigned long long _count;

}

@property (nonatomic,readonly) long long messageStatusType; 
@property (nonatomic,readonly) long long statusType;                     //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,retain,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain,readonly) NSString * errorText; 
@property (nonatomic,readonly) long long expireStatusType;               //@synthesize expireStatusType=_expireStatusType - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isFromMe;
-(long long)statusType;
-(long long)expireStatusType;
-(NSString *)errorText;
-(long long)messageStatusType;
@end

