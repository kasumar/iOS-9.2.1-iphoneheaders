/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(BOOL)isSnapshot;
-(MCMontage *)montage;
-(id)initSnapshot;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(id)_initWithObjectID:(id)arg1 ;
-(void)dealloc;
-(id)snapshot;
-(NSString *)objectID;
-(id)imprint;
@end

