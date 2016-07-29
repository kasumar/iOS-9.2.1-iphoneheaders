/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FAFamilyNotifierRemoteObjectProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FAFamilyNotificationDelegate;
@class NSXPCConnection, NSLock, NSXPCListener, NSString;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	NSString* _identifier;
	NSString* _serviceName;
	id<FAFamilyNotificationDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (__weak) id<FAFamilyNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(void)setDelegate:(id<FAFamilyNotificationDelegate>)arg1 ;
-(id<FAFamilyNotificationDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)agentConnection;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)removeAllNotifications;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg1 ;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)_agentConnectionFailedToBootstrap;
-(void)didActivateNotification:(id)arg1 ;
-(void)didDismissNotification:(id)arg1 ;
-(void)didClearNotification:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2 ;
-(void)deliverNotification:(id)arg1 ;
-(id)_pendingNotificationsForAllClients;
-(id)pendingNotifications;
@end
