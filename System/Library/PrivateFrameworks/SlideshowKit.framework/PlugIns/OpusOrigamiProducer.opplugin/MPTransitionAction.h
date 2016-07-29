/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>

@protocol MPActionableSupport;
@class NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface MPTransitionAction : MPAction {

	NSString* _transitionID;
	double _transitionDuration;
	NSMutableDictionary* _transitionAttributes;
	NSObject*<MPActionableSupport> _transitionDestination;

}

@property (nonatomic,copy) NSDictionary * transitionAttributes;                                 //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (nonatomic,copy) NSString * transitionID;                                             //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                                         //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,retain) NSObject*<MPActionableSupport> transitionDestination;              //@synthesize transitionDestination=_transitionDestination - In the implementation block
+(id)transitionAction;
-(NSObject*<MPActionableSupport>)transitionDestination;
-(NSString *)transitionID;
-(id)transitionAttributeForKey:(id)arg1 ;
-(void)configureTarget;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestination:(NSObject*<MPActionableSupport>)arg1 ;
-(NSDictionary *)transitionAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
@end
