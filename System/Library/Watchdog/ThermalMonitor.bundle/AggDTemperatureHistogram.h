/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AggDTemperatureHistogram : NSObject {

	unsigned long long _bins[32];
	unsigned long long _sampleCount;
	int _idx;
	const int* _binBoundaries;
	int _mostRecentBin;

}
-(int)temperatureToHistogramBinIndex:(int)arg1 ;
-(void)incrementMostRecentBin:(unsigned)arg1 ;
-(id)initWithIndex:(int)arg1 histogramType:(int)arg2 ;
-(void)uploadToAggD;
-(void)incrementBinForTemperature:(int)arg1 count:(unsigned)arg2 ;
-(void)incrementBinForTemperature:(int)arg1 ;
@end

