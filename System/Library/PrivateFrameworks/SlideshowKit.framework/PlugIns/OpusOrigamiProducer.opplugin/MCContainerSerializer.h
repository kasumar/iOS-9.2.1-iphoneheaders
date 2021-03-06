/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableSet, NSArray, NSString, NSDictionary, NSSet;

@interface MCContainerSerializer : MCContainer {

	NSMutableSet* mPlugs;
	NSArray* mCachedOrderedPlugs;
	double mCachedDuration;
	NSString* _initialTransitionID;
	double _initialTransitionDuration;
	NSDictionary* _initialTransitionAttributes;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned long long countOfPlugs; 
@property (readonly) NSArray * orderedPlugs; 
@property (readonly) double duration; 
@property (copy) NSString * initialTransitionID;                             //@synthesize initialTransitionID=_initialTransitionID - In the implementation block
@property (assign,nonatomic) double initialTransitionDuration;               //@synthesize initialTransitionDuration=_initialTransitionDuration - In the implementation block
@property (copy) NSDictionary * initialTransitionAttributes;                 //@synthesize initialTransitionAttributes=_initialTransitionAttributes - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)plugAtIndex:(unsigned long long)arg1 ;
-(NSArray *)orderedPlugs;
-(void)removeAllPlugs;
-(unsigned long long)countOfPlugs;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(double)initialTransitionDuration;
-(NSString *)initialTransitionID;
-(NSDictionary *)initialTransitionAttributes;
-(void)setInitialTransitionID:(NSString *)arg1 ;
-(void)setInitialTransitionDuration:(double)arg1 ;
-(void)setInitialTransitionAttributes:(NSDictionary *)arg1 ;
-(id)insertPlugsForContainers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removePlugsAtIndices:(id)arg1 ;
-(void)movePlugsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)addPlugsForContainers:(id)arg1 ;
-(id)insertPlugForContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)timeInForPlug:(id)arg1 ;
-(id)addPlugForContainer:(id)arg1 ;
-(NSSet *)plugs;
-(id)init;
-(double)duration;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)imprint;
@end

