/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	BOOL _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(void)setExclusive:(BOOL)arg1 ;
-(NSNumber *)protocols;
-(void)setProtocols:(NSNumber *)arg1 ;
-(BOOL)exclusive;
@end
