/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {

	NSLock* _releaseLock;
	int _referenceCount;
	BOOL _calledDealloc;

}
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(void)invalidateThreadsWithWeakLinks;
@end

