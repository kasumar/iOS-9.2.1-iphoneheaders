/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {

	NSString* _category;
	BOOL _volumeWarningEnabled;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeWarningEnabled; 
@property (assign,nonatomic) BOOL volumeWarningEnabled;                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCategory;
-(BOOL)volumeWarningEnabled;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(void)setHasVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)hasVolumeWarningEnabled;
-(BOOL)readFrom:(id)arg1 ;
@end

