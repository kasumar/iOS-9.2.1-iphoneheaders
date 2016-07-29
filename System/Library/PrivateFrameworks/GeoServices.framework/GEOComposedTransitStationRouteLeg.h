/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 transitStepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(BOOL)hasExitStationManeuver;
-(BOOL)hasEnterStationManeuver;
@end
