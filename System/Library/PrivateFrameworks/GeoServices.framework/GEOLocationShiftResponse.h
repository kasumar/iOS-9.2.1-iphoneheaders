/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE95 _shiftedPixel;

}

@property (readonly) SCD_Struct_GE16 shiftedCoordinate; 
@property (assign,nonatomic) SCD_Struct_GE96 shiftedPixel;              //@synthesize shiftedPixel=_shiftedPixel - In the implementation block
-(SCD_Struct_GE16)shiftedCoordinate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShiftedPixel:(SCD_Struct_GE96)arg1 ;
-(SCD_Struct_GE96)shiftedPixel;
-(BOOL)readFrom:(id)arg1 ;
@end

