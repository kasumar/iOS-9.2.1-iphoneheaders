/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	long long _fromState;
	long long _toState;
	double _fraction;

}
+(id)newTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
+(Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initWithFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_updateView:(id)arg1 ;
-(void)dealloc;
@end
