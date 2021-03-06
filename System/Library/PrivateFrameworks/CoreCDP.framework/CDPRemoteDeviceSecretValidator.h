/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol;
@interface CDPRemoteDeviceSecretValidator : NSObject {

	id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
	unsigned long long _failedAttempts;

}

@property (nonatomic,readonly) unsigned long long failedAttempts;              //@synthesize failedAttempts=_failedAttempts - In the implementation block
-(id)initWithContext:(id)arg1 validator:(id)arg2 ;
-(unsigned long long)failedAttempts;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)cancelValidationWithError:(id)arg1 ;
-(void)resetAccountCDPState;
@end

