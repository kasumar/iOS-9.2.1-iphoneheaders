/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINUnlockViewControllerDelegate;
@class TPSetPINViewController;

@interface PHSIMPINUnlockViewController : UIViewController <TPSetPINViewControllerDelegate> {

	BOOL _locking;
	id<PHSIMPINUnlockViewControllerDelegate> _delegate;
	TPSetPINViewController* _setPINViewController;

}

@property (assign) id<PHSIMPINUnlockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPSetPINViewController * setPINViewController;                  //@synthesize setPINViewController=_setPINViewController - In the implementation block
@property (assign) BOOL locking;                                                   //@synthesize locking=_locking - In the implementation block
-(void)setDelegate:(id<PHSIMPINUnlockViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PHSIMPINUnlockViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(void)setSetPINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)setPINViewController;
-(id)initForLocking:(BOOL)arg1 ;
-(void)setLocking:(BOOL)arg1 ;
-(void)_simLockChangedAfterSave:(id)arg1 ;
-(BOOL)locking;
@end

