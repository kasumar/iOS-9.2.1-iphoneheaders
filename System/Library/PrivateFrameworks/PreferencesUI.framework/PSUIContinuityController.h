/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class SuggestedAppsController;

@interface PSUIContinuityController : PSListController {

	SuggestedAppsController* _suggestedAppsController;

}
-(id)init;
-(void)profileNotification:(id)arg1 ;
-(BOOL)isContinuityRestricted;
-(void)updateContinuitySpecifiers;
-(id)isContinuityEnabled:(id)arg1 ;
-(void)setContinuityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end
