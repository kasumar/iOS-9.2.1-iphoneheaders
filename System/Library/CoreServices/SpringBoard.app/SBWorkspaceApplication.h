/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>
#import <SpringBoard/SBProcessSettings.h>

@class SBApplication, NSSet, SBProcessSettings, NSString;

@interface SBWorkspaceApplication : SBWorkspaceEntity <SBProcessSettings> {

	SBApplication* _application;
	NSSet* _actions;
	SBProcessSettings* _processSettings;

}

@property (nonatomic,retain) SBApplication * application;                               //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,retain,readonly) SBProcessSettings * processSettings;              //@synthesize processSettings=_processSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityForApplication:(id)arg1 actions:(id)arg2 ;
+(id)entityForApplication:(id)arg1 ;
+(/*^block*/id)entityGenerator;
-(void)clearProcessSettings;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(id)objectForProcessSetting:(long long)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyProcessSettings;
-(id)workspaceApplication;
-(BOOL)isApplicationEntity;
-(id)representedDisplay;
-(/*^block*/id)_generator;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(BOOL)_supportsPresentationAtAnySize;
-(BOOL)_supportsDynamicResizing;
-(SBProcessSettings *)processSettings;
-(long long)_mainDisplayPreferredInterfaceOrientation;
-(void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1 ;
-(id)initWithApplication:(id)arg1 actions:(id)arg2 ;
-(void)setActions:(NSSet *)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSSet *)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)viewControllerClass;
-(SBApplication *)application;
-(id)initWithApplication:(id)arg1 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
