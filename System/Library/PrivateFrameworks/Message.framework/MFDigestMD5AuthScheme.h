/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAuthScheme.h>

@interface MFDigestMD5AuthScheme : MFAuthScheme
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
-(BOOL)hasEncryption;
-(id)humanReadableName;
@end
