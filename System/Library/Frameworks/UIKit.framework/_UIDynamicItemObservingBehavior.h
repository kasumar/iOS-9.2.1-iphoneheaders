/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicItemBehavior.h>

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {

	BOOL _enabled;
	double _completionHandlerInvocationDelay;
	/*^block*/id _completionHandler;
	long long _frameCount;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) CGVector targetVelocity;                              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) double completionHandlerInvocationDelay;              //@synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long frameCount;                                 //@synthesize frameCount=_frameCount - In the implementation block
-(BOOL)enabled;
-(void)cancel;
-(void)setEnabled:(BOOL)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(CGVector)targetVelocity;
-(long long)frameCount;
-(double)completionHandlerInvocationDelay;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(void)setCompletionHandlerInvocationDelay:(double)arg1 ;
@end

