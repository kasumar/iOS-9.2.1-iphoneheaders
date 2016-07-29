/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface DaemonPBFusePreferences : PBCodable <NSCopying> {

	NSMutableArray* _preferences;

}

@property (nonatomic,retain) NSMutableArray * preferences;              //@synthesize preferences=_preferences - In the implementation block
-(void)addPreferences:(id)arg1 ;
-(void)clearPreferences;
-(unsigned long long)preferencesCount;
-(id)preferencesAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreferences:(NSMutableArray *)arg1 ;
-(NSMutableArray *)preferences;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
