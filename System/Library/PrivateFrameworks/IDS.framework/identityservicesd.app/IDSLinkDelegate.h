/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSLinkDelegate <NSObject>
@optional
-(void)link:(id)arg1 hostAwakeDidChange:(BOOL)arg2;
-(void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceID:(id)arg3;

@required
-(BOOL)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(/*function pointer*/void**)arg3;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2;

@end

