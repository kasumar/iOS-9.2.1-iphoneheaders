/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;
	double _wasted_size;
	double _total_size;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(void)_logStatistics:(int)arg1 ;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
@end

