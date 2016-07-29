/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol PKPaymentConfirmationAlertControllerDelegate;
@interface PKPaymentConfirmationAlertController : UIAlertController {

	long long _confirmationMethod;
	id<PKPaymentConfirmationAlertControllerDelegate> _delegate;

}

@property (nonatomic,readonly) long long confirmationMethod;                                         //@synthesize confirmationMethod=_confirmationMethod - In the implementation block
@property (assign,nonatomic) id<PKPaymentConfirmationAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PKPaymentConfirmationAlertControllerDelegate>)arg1 ;
-(id<PKPaymentConfirmationAlertControllerDelegate>)delegate;
-(id)initWithConfirmationMethod:(long long)arg1 pass:(id)arg2 isPayment:(BOOL)arg3 ;
-(long long)confirmationMethod;
@end
