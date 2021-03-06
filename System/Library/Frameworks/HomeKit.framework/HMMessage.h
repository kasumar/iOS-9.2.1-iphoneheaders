/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSDictionary;

@interface HMMessage : NSObject {

	BOOL _remoteSource;
	BOOL _internalMessage;
	BOOL _entitledMessage;
	BOOL _locationAuthorizedMessage;
	NSString* _name;
	NSUUID* _identifier;
	NSDictionary* _messagePayload;
	/*^block*/id _responseHandler;
	id _transport;

}

@property (nonatomic,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * messagePayload;                                                  //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,readonly) id responseHandler;                                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,readonly) id transport;                                                                   //@synthesize transport=_transport - In the implementation block
@property (getter=isRemoteSource,nonatomic,readonly) BOOL remoteSource;                                        //@synthesize remoteSource=_remoteSource - In the implementation block
@property (getter=isInternalMessage,nonatomic,readonly) BOOL internalMessage;                                  //@synthesize internalMessage=_internalMessage - In the implementation block
@property (getter=isEntitledMessage,nonatomic,readonly) BOOL entitledMessage;                                  //@synthesize entitledMessage=_entitledMessage - In the implementation block
@property (getter=isLocationAuthorizedMessage,nonatomic,readonly) BOOL locationAuthorizedMessage;              //@synthesize locationAuthorizedMessage=_locationAuthorizedMessage - In the implementation block
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)uuidFromRemoteMessageForKey:(id)arg1 ;
-(id)predicateForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)nullForKey:(id)arg1 ;
-(id)errorForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)locationForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(NSString *)name;
-(NSUUID *)identifier;
-(id)responseHandler;
-(NSDictionary *)messagePayload;
-(BOOL)isRemoteSource;
-(id)transport;
-(BOOL)isInternalMessage;
-(BOOL)isEntitledMessage;
-(BOOL)isLocationAuthorizedMessage;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 remoteSource:(BOOL)arg6 internalMessage:(BOOL)arg7 entitledMessage:(BOOL)arg8 locationAuthorizedMessage:(BOOL)arg9 ;
@end

