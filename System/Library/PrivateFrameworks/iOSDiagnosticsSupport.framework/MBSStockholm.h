/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFContactlessPaymentSessionDelegate.h>

@protocol OS_dispatch_semaphore, NFSession;
@class NSObject, NFContactlessPaymentSession, NSString;

@interface MBSStockholm : NSObject <NFContactlessPaymentSessionDelegate> {

	NSObject*<OS_dispatch_semaphore> _start_timeout_sema;
	BOOL _cardEmulationSuspended;
	NSObject*<NFSession> _sessionController;
	NFContactlessPaymentSession* _paymentSession;

}

@property (nonatomic,retain) NSObject*<NFSession> sessionController;                    //@synthesize sessionController=_sessionController - In the implementation block
@property (nonatomic,retain) NFContactlessPaymentSession * paymentSession;              //@synthesize paymentSession=_paymentSession - In the implementation block
@property (assign,nonatomic) BOOL cardEmulationSuspended;                               //@synthesize cardEmulationSuspended=_cardEmulationSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NFContactlessPaymentSession *)paymentSession;
-(BOOL)startCardEmulationWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)stopCardEmulationWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)setPaymentSession:(NFContactlessPaymentSession *)arg1 ;
-(void)setSessionController:(NSObject*<NFSession>)arg1 ;
-(NSObject*<NFSession>)sessionController;
-(BOOL)pingStockholm:(id*)arg1 ;
-(BOOL)pingRotterdam:(id*)arg1 ;
-(BOOL)cardEmulationSuspended;
-(void)setCardEmulationSuspended:(BOOL)arg1 ;
@end

