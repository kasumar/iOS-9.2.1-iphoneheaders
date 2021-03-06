/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCurrentlySelectedSearchEngineWithCompletion:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistory;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOrigins;
-(void)deleteSafariPersistentURLCacheStorage;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 ;
@end

