/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AXUIClient, NSString;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate> {

	BOOL _areTouchAccommodationsInEffect;
	NSObject*<OS_dispatch_queue> _touchAccommodationsQueue;
	AXUIClient* _touchAccommodationsClient;

}

@property (nonatomic,retain) AXUIClient * touchAccommodationsClient;              //@synthesize touchAccommodationsClient=_touchAccommodationsClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hideHoldDurationTripleClickHelp;
+(void)showHoldDurationTripleClickHelp;
+(void)initializeMonitor;
-(AXUIClient *)touchAccommodationsClient;
-(void)setTouchAccommodationsClient:(AXUIClient *)arg1 ;
-(void)_registerForTouchAccommodationsAXSettingsUpdate;
-(void)_updateTouchAccommodationsSetting;
-(void)_showHoldDurationTripleClickHelp;
-(void)_hideHoldDurationTripleClickHelp;
-(void)dealloc;
-(id)_clientIdentifier;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
@end

