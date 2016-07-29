/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>
#import <libobjc.A.dylib/SSEventMonitorDelegate.h>

@class SSEventMonitor, NSMutableDictionary, NSString;

@interface PLStoreAgent : PLAgent <SSEventMonitorDelegate> {

	SSEventMonitor* _monitor;
	NSMutableDictionary* _currentDownloads;

}

@property (retain) SSEventMonitor * monitor;                            //@synthesize monitor=_monitor - In the implementation block
@property (retain) NSMutableDictionary * currentDownloads;              //@synthesize currentDownloads=_currentDownloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)defaults;
-(id)init;
-(void)log;
-(SSEventMonitor *)monitor;
-(void)setMonitor:(SSEventMonitor *)arg1 ;
-(void)initOperatorDependancies;
-(void)logAssetDownloadWithState:(id)arg1 info:(id)arg2 ;
-(NSMutableDictionary *)currentDownloads;
-(void)logAppUpdatePollWithState:(id)arg1 ;
-(void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)setCurrentDownloads:(NSMutableDictionary *)arg1 ;
@end
