/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {

	BOOL _valid;
	BOOL _registered;
	int _cmActivityToken;
	int _cmActivityPollingToken;
	CMNetworkActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) CMNetworkActivityMonitor * activityMonitor; 
+(id)registeredObserverForActivityMonitor:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)unregisterObservations;
-(CMNetworkActivityMonitor *)activityMonitor;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/id)arg2 ;
-(void)registerObservations;
-(id)initForActivityMonitor:(id)arg1 ;
@end
