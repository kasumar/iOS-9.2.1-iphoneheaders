/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {

	NSString* _generatedCode;
	UIButton* _footerButton;
	UILabel* _footerLabel;
	double _keyboardHeight;
	BOOL _showsAdvancedSettings;
	int _mode;
	int _securityCodeType;
	NSString* _firstPasscodeEntry;

}

@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) BOOL showsAdvancedSettings;                 //@synthesize showsAdvancedSettings=_showsAdvancedSettings - In the implementation block
@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(id)_configureTextEntryCell;
-(void)showAdvancedOptions;
-(void)generateRandomCode;
-(void)forgotSecurityCode;
-(void)updateNextButton;
-(void)animatePasscodeFieldLeft:(BOOL)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)dismissAlerts;
-(BOOL)showsAdvancedSettings;
-(void)setShowsAdvancedSettings:(BOOL)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(id)placeholderText;
-(id)specifiers;
@end

