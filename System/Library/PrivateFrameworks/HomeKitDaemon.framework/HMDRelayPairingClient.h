/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPRelayPairingClient.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, NSObject, NSString;

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate> {

	HMDRelayManager* _relayManager;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,__weak,readonly) HMDRelayManager * relayManager;                 //@synthesize relayManager=_relayManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessoryBagURL;
-(void)close;
-(void)open;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMDRelayManager *)relayManager;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(void)_closeWithError:(id)arg1 ;
-(id)accessoryBagURL;
-(id)initWithRelayManager:(id)arg1 ;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end
