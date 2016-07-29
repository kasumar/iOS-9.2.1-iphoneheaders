/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCAnimationPath.h>

@class NSMutableSet, NSArray, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {

	NSMutableSet* mKeyframes;
	NSArray* mCachedOrderedKeyframes;

}

@property (readonly) NSSet * keyframes; 
+(id)animationPathWithKey:(id)arg1 ;
+(double)timeForKeyframe:(id)arg1 withPlugTiming:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeKeyframe:(id)arg1 ;
-(NSSet *)keyframes;
-(void)addKeyframe:(id)arg1 ;
-(void)demolish;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)orderedKeyframesWithPlugTiming:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithVector:(SCD_Struct_MC14)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(unsigned long long)countOfKeyframes;
-(id)createKeyframeWithVector:(SCD_Struct_MC14)arg1 atTime:(double)arg2 ;
-(id)init;
-(id)description;
-(void)removeAllKeyframes;
-(id)imprint;
@end
