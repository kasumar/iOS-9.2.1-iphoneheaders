/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _body;
	double _autoDismissInterval;

}
-(void)setAutoDismissInterval:(double)arg1 ;
-(id)dismissButtonText;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
-(double)autoDismissInterval;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end
