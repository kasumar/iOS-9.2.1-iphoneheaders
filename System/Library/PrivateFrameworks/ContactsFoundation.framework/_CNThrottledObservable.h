/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;
@interface _CNThrottledObservable : CNObservable {

	double _interval;
	id<CNCancelable> _delayToken;
	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;
	id _result;
	BOOL _hasResult;
	unsigned long long _resultCounter;

}
-(void)dealloc;
-(void)_cancel;
-(void)_sendCompletionToObserver:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned long long)_setResult:(id)arg1 ;
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
@end
