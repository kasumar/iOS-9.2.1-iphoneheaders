/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceWillPublish:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;

@end

