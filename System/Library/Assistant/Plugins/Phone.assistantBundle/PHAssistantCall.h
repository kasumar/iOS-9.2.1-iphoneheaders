/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCall.h>
#import <Accessibility/AFServiceCommand.h>

@class NSBundle, NSString;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	NSBundle* _voiceDialBundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_voiceDialBundle;
-(BOOL)_isEmailAddress;
-(BOOL)_isStarkActive;
-(id)_appPunchOutURL;
-(void)_addFaceTimeAvailabilityListener;
-(void)_removeFaceTimeAvailabilityListener;
-(BOOL)_faceTimeVideoIsAvailable;
-(BOOL)_shouldApplyInternationalAssist;
-(BOOL)_faceTimeAudioIsAvailable;
-(void)_performAppPunchOutWithURL:(id)arg1 withServiceHelper:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_countryCode;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
@end

