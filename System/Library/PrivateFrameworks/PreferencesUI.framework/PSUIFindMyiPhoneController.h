/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface PSUIFindMyiPhoneController : NSObject {

	NSObject*<OS_dispatch_semaphore> _stateChangeSem;

}
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)locatorStateDidChange:(id)arg1 ;
-(BOOL)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(BOOL)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

