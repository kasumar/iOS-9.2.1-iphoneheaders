/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextViewDelegate.h>

@class TIAboutKeyboardPrivacyController, NSString;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate> {

	TIAboutKeyboardPrivacyController* _aboutPrivacyController;

}

@property (nonatomic,retain) TIAboutKeyboardPrivacyController * aboutPrivacyController;              //@synthesize aboutPrivacyController=_aboutPrivacyController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(id)specifiers;
-(void)dismissForDone;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)showAddSystemKeyboardSheet:(id)arg1 ;
-(void)showAddExtensionKeyboardSheet:(id)arg1 ;
-(void)handleSoleInputModeAddition:(id)arg1 ;
@end
