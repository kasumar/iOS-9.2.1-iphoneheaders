/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/CpuCC.h>

@interface CpuPiecewiseCC : CpuCC {

	int _polygonalCurveVertexCount;
	int _maxLoadIndexLimits[8];
	int _dvdFactor1Limits[8];

}
-(id)initWithParams:(CFDictionaryRef)arg1 listID:(int)arg2 ;
-(int)maxLoadIndexToDVDFactor1:(int)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(BOOL)usesPID;
@end
