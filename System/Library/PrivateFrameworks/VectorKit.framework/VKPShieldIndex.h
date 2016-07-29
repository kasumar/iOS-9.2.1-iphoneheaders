/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VKPShieldIndex : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSMutableArray* _textEntries;
	NSMutableArray* _variantEntries;

}

@property (nonatomic,retain) NSMutableArray * entries;                     //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSMutableArray * textEntries;                 //@synthesize textEntries=_textEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * variantEntries;              //@synthesize variantEntries=_variantEntries - In the implementation block
-(id)defaultArtworkIdentifierForFeatureType:(int)arg1 variant:(unsigned long long)arg2 ;
-(id)artworkIdentifierForShieldType:(long long)arg1 textSpecificIdentifiers:(id*)arg2 variant:(unsigned long long)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)entries;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearEntries;
-(unsigned long long)entriesCount;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)variantEntries;
-(NSMutableArray *)textEntries;
-(void)setTextEntries:(NSMutableArray *)arg1 ;
-(id)textEntriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)textEntriesCount;
-(void)addTextEntries:(id)arg1 ;
-(void)clearTextEntries;
-(void)clearVariantEntries;
-(void)addVariantEntries:(id)arg1 ;
-(id)variantEntriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)variantEntriesCount;
-(void)setVariantEntries:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
