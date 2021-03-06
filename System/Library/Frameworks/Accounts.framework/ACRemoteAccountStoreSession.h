/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	BOOL _hasConfiguredRemoteAccountStore;
	BOOL _notificationsEnabled;
	NSString* _spoofedBundleID;

}

@property (nonatomic,copy) NSString * spoofedBundleID;               //@synthesize spoofedBundleID=_spoofedBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setSpoofedBundleID:(NSString *)arg1 ;
-(void)_configureRemoteAccountStoreIfNecessary;
-(NSString *)spoofedBundleID;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connect;
-(void)disconnect;
-(id)initWithXPCConnection:(id)arg1 ;
@end

