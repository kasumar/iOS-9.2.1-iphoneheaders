/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSSet* _versions;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSSet * versions;                 //@synthesize versions=_versions - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(NSSet *)versions;
-(void)setVersions:(NSSet *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
@end

