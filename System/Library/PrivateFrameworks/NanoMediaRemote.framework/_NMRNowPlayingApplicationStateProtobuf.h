/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {

	NSString* _companionBundleIdentifier;
	NSString* _localizedDisplayName;
	unsigned _playbackState;
	NSString* _watchBundleIdentifier;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasCompanionBundleIdentifier; 
@property (nonatomic,retain) NSString * companionBundleIdentifier;              //@synthesize companionBundleIdentifier=_companionBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDisplayName; 
@property (nonatomic,retain) NSString * localizedDisplayName;                   //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) unsigned playbackState;                            //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchBundleIdentifier; 
@property (nonatomic,retain) NSString * watchBundleIdentifier;                  //@synthesize watchBundleIdentifier=_watchBundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(NSString *)companionBundleIdentifier;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasCompanionBundleIdentifier;
-(BOOL)hasLocalizedDisplayName;
-(BOOL)hasWatchBundleIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(BOOL)hasPlaybackState;
@end
