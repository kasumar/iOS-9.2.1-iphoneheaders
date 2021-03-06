/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPaymentVerificationPresentationDelegate.h>

@class PKPassView, UILabel, UIButton, UIActivityIndicatorView, UIView, PKPaymentVerificationPresentationController;

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationPresentationDelegate> {

	PKPassView* _passView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicator;
	UIButton* _alternateButton;
	UIView* _bottomRule;
	PKPaymentVerificationPresentationController* _presenter;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)_button;
-(id)_titleLabel;
-(id)_bodyLabel;
-(id)_activityIndicator;
-(void)_updateButton;
-(void)didChangeVerificationPresentation;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_bottomRule;
-(id)_alternateButton;
-(id)initWithPass:(id)arg1 passView:(id)arg2 ;
@end

