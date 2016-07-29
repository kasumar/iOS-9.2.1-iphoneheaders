/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSAutosave.h>
#import <libobjc.A.dylib/MSDAutosaveProtocol.h>

@class NSString;

@interface MFDAutosave : MSAutosave <MSDAutosaveProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)endpointInfo;
-(void)_autosavedMessageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)hasAutosavedMessageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)autosavedMessageDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
@end
