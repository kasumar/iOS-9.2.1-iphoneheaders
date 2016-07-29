/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem {

	BOOL _offersMigration;

}

@property (assign,nonatomic) BOOL offersMigration;              //@synthesize offersMigration=_offersMigration - In the implementation block
-(void)setOffersMigration:(BOOL)arg1 ;
-(BOOL)offersMigration;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)ignoreIfAlreadyDisplaying;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end
