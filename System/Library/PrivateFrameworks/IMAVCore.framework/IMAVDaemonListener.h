/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {

	NSMutableArray* _handlers;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;

}

@property (nonatomic,readonly) BOOL isSetupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(BOOL)isSetupComplete;
@end

