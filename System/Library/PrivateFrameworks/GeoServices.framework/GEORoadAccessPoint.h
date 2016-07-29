/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	int _drivingDirection;
	GEOLatLng* _location;
	int _walkingDirection;
	BOOL _isApproximate;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate;                    //@synthesize isApproximate=_isApproximate - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection;                  //@synthesize walkingDirection=_walkingDirection - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection;                  //@synthesize drivingDirection=_drivingDirection - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocation;
-(BOOL)isApproximate;
-(int)drivingDirection;
-(BOOL)hasIsApproximate;
-(void)setDrivingDirection:(int)arg1 ;
-(int)walkingDirection;
-(void)setIsApproximate:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
