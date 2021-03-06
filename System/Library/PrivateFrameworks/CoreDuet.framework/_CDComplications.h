/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, CDDevice, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	BOOL _admissionReady;
	CDSession* session;
	CDDevice* remoteDevice;
	int deviceChangeToken;
	int dataChangeToken;
	NSMutableDictionary* meterTokens;
	NSDictionary* _activeComplications;
	NSMutableArray* localAttributes;
	NSMutableArray* remoteAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
@property (assign) BOOL admissionReady;                                              //@synthesize admissionReady=_admissionReady - In the implementation block
+(id)initializeForAdmissionChecking:(BOOL)arg1 ;
-(id)initForAdmission:(BOOL)arg1 ;
-(BOOL)admissionReady;
-(void)setupForAdmissions;
-(void)readOutActiveComplications;
-(NSDictionary *)activeComplications;
-(void)updateRemoteDevice;
-(BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
-(void)setAdmissionReady:(BOOL)arg1 ;
@end

