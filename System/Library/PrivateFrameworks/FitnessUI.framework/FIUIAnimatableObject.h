/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FIUIAnimatableObject : NSObject {

	NSMutableDictionary* _animatableProperties;

}
-(void)update:(double)arg1 ;
-(void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(id)_animatablePropertyForType:(unsigned long long)arg1 ;
-(void)removeAllAnimationsForPropertyType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(id)endingValueForPropertyType:(unsigned long long)arg1 ;
@end

