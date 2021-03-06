/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIWindow.h>
#import <MapsLockScreen/TraitsChangeObserving.h>

@class NSMapTable, UITraitCollection, NSString;

@interface MapsWindow : UIWindow <TraitsChangeObserving> {

	NSMapTable* _traitsObservers;
	BOOL _transitioning;
	UITraitCollection* _transitionTraits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_Ma3 mapsSizeClassPair; 
-(void)addTraitsChangeObserver:(id)arg1 willChangeHandler:(/*^block*/id)arg2 changeHandler:(/*^block*/id)arg3 didChangeHandler:(/*^block*/id)arg4 ;
-(void)_maps_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(SCD_Struct_Ma3)mapsSizeClassPair;
-(void)removeTraitsChangeObserver:(id)arg1 ;
-(id)_maps_effectiveTraitCollection;
-(void)_invokeTraitsChangeObserversForKey:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setRootViewController:(id)arg1 ;
@end

