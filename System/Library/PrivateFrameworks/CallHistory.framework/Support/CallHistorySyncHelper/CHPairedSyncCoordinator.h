/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistorySyncHelper/CallHistorySyncHelper-Structs.h>
#import <CallHistory/CHLogger.h>
#import <CallHistorySyncHelper/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NSObject.h>

@protocol CHPairedSyncProtocol;
@class NSString, PSYSyncCoordinator;

@interface CHPairedSyncCoordinator : CHLogger <PSYSyncCoordinatorDelegate, NSObject> {

	id<CHPairedSyncProtocol> _delegate;
	PSYSyncCoordinator* _coordinator;

}

@property (retain) id<CHPairedSyncProtocol> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (retain) PSYSyncCoordinator * coordinator;                //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initialSyncFailedWithError:(id)arg1 ;
-(void)setCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)initialSyncComplete;
-(void)setDelegate:(id<CHPairedSyncProtocol>)arg1 ;
-(id<CHPairedSyncProtocol>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(PSYSyncCoordinator *)coordinator;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
@end
