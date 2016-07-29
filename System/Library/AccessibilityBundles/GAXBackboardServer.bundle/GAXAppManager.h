/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXBackboardServer/_GAXAppRepresentationDelegate.h>

@protocol GAXAppManagerDelegate, OS_dispatch_source;
@class _GAXAppRepresentation, NSString, NSMutableSet, FBSDisplayLayoutMonitor, AXAccessQueueTimer, NSObject;

@interface GAXAppManager : NSObject <_GAXAppRepresentationDelegate> {

	_GAXAppRepresentation* _lastKnownEffectiveApp;
	id<GAXAppManagerDelegate> _delegate;
	NSString* _sessionAppBundleIdentifier;
	NSMutableSet* _managedApps;
	FBSDisplayLayoutMonitor* _appLayoutMonitor;
	AXAccessQueueTimer* _resetRelaunchAttemptsTimer;
	NSObject*<OS_dispatch_source> _purpleBuddyPIDMonitor;

}

@property (assign,nonatomic) id<GAXAppManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL appLayoutIsMultiApp; 
@property (nonatomic,readonly) NSString * effectiveAppBundleIdentifier; 
@property (nonatomic,readonly) BOOL effectiveAppIsPurpleBuddy; 
@property (nonatomic,readonly) BOOL effectiveAppIsPreferences; 
@property (assign,nonatomic) BOOL effectiveAppWasPlayingMedia; 
@property (nonatomic,copy) NSString * sessionAppBundleIdentifier;                              //@synthesize sessionAppBundleIdentifier=_sessionAppBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL sessionAppIsPurpleBuddy; 
@property (nonatomic,readonly) BOOL sessionAppIsPreferences; 
@property (nonatomic,readonly) unsigned long long sessionAppRelaunchAttempts; 
@property (nonatomic,retain) NSMutableSet * managedApps;                                       //@synthesize managedApps=_managedApps - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * appLayoutMonitor;                       //@synthesize appLayoutMonitor=_appLayoutMonitor - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * resetRelaunchAttemptsTimer;                  //@synthesize resetRelaunchAttemptsTimer=_resetRelaunchAttemptsTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> purpleBuddyPIDMonitor;              //@synthesize purpleBuddyPIDMonitor=_purpleBuddyPIDMonitor - In the implementation block
@property (nonatomic,retain) _GAXAppRepresentation * lastKnownEffectiveApp;                    //@synthesize lastKnownEffectiveApp=_lastKnownEffectiveApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_effectiveApp;
-(id)_sessionApp;
-(NSMutableSet *)managedApps;
-(void)setManagedApps:(NSMutableSet *)arg1 ;
-(void)updateSessionAppBundleIdentifier:(id)arg1 ;
-(BOOL)sessionAppGAXClientDidCheckIn;
-(void)settingsDidChangeWithServerMode:(unsigned)arg1 allowsMotion:(BOOL)arg2 allowsKeyboardTextInput:(BOOL)arg3 ;
-(void)gaxClientDidLoad:(id)arg1 pid:(int)arg2 ;
-(void)updateManagedAppState:(BOOL)arg1 ;
-(BOOL)sessionAppIsEffectiveApp;
-(BOOL)effectiveAppIsPurpleBuddy;
-(void)terminateEffectiveApp;
-(BOOL)effectiveAppWasPlayingMedia;
-(NSString *)effectiveAppBundleIdentifier;
-(id)effectiveAppContainedViewsForArchivedFingerPath:(id)arg1 ;
-(NSString *)sessionAppBundleIdentifier;
-(void)scheduleResetLaunchAttempts;
-(void)monitorForPurpleBuddyDeath;
-(void)incrementSessionAppRelaunchAttempts;
-(BOOL)appLayoutIsMultiApp;
-(BOOL)effectiveAppIsAcceptableForSessionApp;
-(BOOL)sessionAppIsHostedByTheSystemApp;
-(BOOL)sessionAppIsPreferences;
-(BOOL)sessionAppIsPurpleBuddy;
-(unsigned long long)sessionAppRelaunchAttempts;
-(void)setEffectiveAppWasPlayingMedia:(BOOL)arg1 ;
-(void)resumeEffectiveApp;
-(BOOL)effectiveAppPrepareForTransitionToWorkspaceAndRetrieveRestrictionsInformation:(id*)arg1 ;
-(BOOL)effectiveAppIsHostedByTheSystemApp;
-(BOOL)effectiveAppIsPreferences;
-(void)resetRelaunchAttempts;
-(id)effectiveAppRestrictionIdentifiers;
-(void)effectiveAppRestrictionWithIdentifier:(id)arg1 didChangeState:(long long)arg2 ;
-(void)suspendEffectiveApp;
-(void)setAppLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(FBSDisplayLayoutMonitor *)appLayoutMonitor;
-(void)setResetRelaunchAttemptsTimer:(AXAccessQueueTimer *)arg1 ;
-(void)setPurpleBuddyPIDMonitor:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setSessionAppBundleIdentifier:(NSString *)arg1 ;
-(void)setLastKnownEffectiveApp:(_GAXAppRepresentation *)arg1 ;
-(id)_appWithBundleIdentifier:(id)arg1 ;
-(BOOL)_axAppIsValidGAXApp:(id)arg1 ;
-(id)_makeGAXAppFromAXApp:(id)arg1 ;
-(void)_updateGAXApp:(id)arg1 fromAXApp:(id)arg2 ;
-(AXAccessQueueTimer *)resetRelaunchAttemptsTimer;
-(NSObject*<OS_dispatch_source>)purpleBuddyPIDMonitor;
-(void)gaxAppDidGoInvalid:(id)arg1 ;
-(_GAXAppRepresentation *)lastKnownEffectiveApp;
-(void)setDelegate:(id<GAXAppManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<GAXAppManagerDelegate>)delegate;
@end
