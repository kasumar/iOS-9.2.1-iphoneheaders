/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDSession, NSString;

@interface CDDevice : NSObject {

	CDSession* _session;
	int remoteDataNotificationToken;
	unsigned _identifier;
	NSString* _modelIdentifier;
	BOOL _defaultPaired;
	BOOL _isDefaultPaired;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign) BOOL isDefaultPaired;                      //@synthesize isDefaultPaired=_isDefaultPaired - In the implementation block
@property (readonly) CDSession * session;                     //@synthesize session=_session - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 ;
-(BOOL)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(BOOL)requestLogDataWithError:(id*)arg1 ;
-(BOOL)isDefaultPaired;
-(void)setIsDefaultPaired:(BOOL)arg1 ;
-(CDSession *)session;
-(NSString *)modelIdentifier;
@end

