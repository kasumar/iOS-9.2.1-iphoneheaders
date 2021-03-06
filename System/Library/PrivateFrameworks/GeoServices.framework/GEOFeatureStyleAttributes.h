/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {

	SCD_Struct_GE172* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE173* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
-(int)drivingSide;
-(BOOL)hasDrivingSide;
-(BOOL)shouldSuppress3DBuildingStrokes;
-(BOOL)isDrivable;
-(int)rampDirection;
-(BOOL)isTunnel;
-(BOOL)isWalkable;
-(BOOL)isRailway;
-(BOOL)isFreeway;
-(int)rampType;
-(BOOL)isRamp;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeKey:(unsigned)arg1 ;
-(id)initWithAttributes:(unsigned)arg1 ;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
-(char)featureType;
-(void)setExtAttributes:(SCD_Struct_GE173*)arg1 count:(unsigned)arg2 ;
-(void)replaceAttributes:(SCD_Struct_GE172*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(SCD_Struct_GE173*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(BOOL)isSuperset:(id)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(void)sort;
@end

