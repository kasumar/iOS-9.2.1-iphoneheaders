/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {

	NSString* _hsaCode;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end
