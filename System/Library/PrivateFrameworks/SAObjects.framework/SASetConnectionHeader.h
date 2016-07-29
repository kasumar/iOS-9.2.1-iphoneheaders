/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * aceHostHeader; 
@property (nonatomic,retain) SAConnectionPolicy * connectionPolicy; 
@property (assign,nonatomic) BOOL reconnectNow; 
+(id)setConnectionHeader;
+(id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(SAConnectionPolicy *)connectionPolicy;
-(NSString *)aceHostHeader;
-(void)setAceHostHeader:(NSString *)arg1 ;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(BOOL)reconnectNow;
-(void)setReconnectNow:(BOOL)arg1 ;
-(id)encodedClassName;
@end
