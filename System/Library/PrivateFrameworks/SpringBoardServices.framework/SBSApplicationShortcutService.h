/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SBSApplicationShortcutClient, NSObject;

@interface SBSApplicationShortcutService : NSObject {

	SBSApplicationShortcutClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

