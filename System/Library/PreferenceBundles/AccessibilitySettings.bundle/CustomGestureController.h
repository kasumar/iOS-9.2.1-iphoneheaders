/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AXNamedItemsListController.h>
#import <AccessibilitySettings/ASTGestureRecorderMainViewControllerDelegate.h>

@class NSMutableArray, ASTGestureRecorderMainViewController, AXAssertion, NSArray, NSString;

@interface CustomGestureController : AXNamedItemsListController <ASTGestureRecorderMainViewControllerDelegate> {

	NSMutableArray* _hiddenSpecifiers;
	ASTGestureRecorderMainViewController* _gestureRecorderMainViewController;
	id _appDidResignActiveNotificationHandlerToken;
	AXAssertion* _disableSystemGesturesAssertion;

}

@property (nonatomic,readonly) NSArray * customGestureSpecifiers; 
@property (nonatomic,readonly) SEL customGesturesGetter; 
@property (nonatomic,readonly) SEL customGesturesSetter; 
@property (nonatomic,readonly) NSString * customGesturesTitle; 
@property (nonatomic,readonly) NSString * customGesturesExplanatoryText; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfCustomGestures; 
@property (nonatomic,retain) id appDidResignActiveNotificationHandlerToken;                   //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                    //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SEL)customGesturesSetter;
-(BOOL)_isGestureNameSpecifier:(id)arg1 ;
-(unsigned long long)maximumNumberOfCustomGestures;
-(void)createCustomGesture;
-(NSString *)customGesturesExplanatoryText;
-(void)handleExternalSettingsChange;
-(NSArray *)customGestureSpecifiers;
-(NSString *)customGesturesTitle;
-(id)specifierForKey:(id)arg1 withSpecifiers:(id)arg2 ;
-(id)setName:(id)arg1 forItem:(id)arg2 ;
-(id)appDidResignActiveNotificationHandlerToken;
-(SEL)customGesturesGetter;
-(id)_customGestures;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(BOOL)_shouldDisableCreateNewGestureButton;
-(void)_disableCreateNewGestureButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_toggleHiddenSpecifiersAnimated:(BOOL)arg1 ;
-(BOOL)gestureRecorder:(id)arg1 canSaveGestureWithName:(id)arg2 ;
-(void)gestureRecorder:(id)arg1 saveGestureWithPropertyListRepresentation:(id)arg2 ;
-(SEL)settingsSetter;
-(id)nameForItem:(id)arg1 ;
-(SEL)settingsGetter;
-(void)dealloc;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(id)specifiers;
@end
