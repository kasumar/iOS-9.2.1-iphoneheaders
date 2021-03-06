/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDObserverQueryServer : HDQueryServer {

	BOOL _deliverOnUnlock;
	NSNumber* _anchor;

}

@property (nonatomic,readonly) BOOL deliverOnUnlock;              //@synthesize deliverOnUnlock=_deliverOnUnlock - In the implementation block
@property (nonatomic,readonly) NSNumber * anchor;                 //@synthesize anchor=_anchor - In the implementation block
-(NSNumber *)anchor;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(void)_queue_stop;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)deliverOnUnlock;
@end

