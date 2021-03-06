/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMSensorRecorder : NSObject
+(BOOL)isAccelerometerRecordingAvailable;
+(BOOL)isAuthorizedForRecording;
-(id)accelerometerDataSince:(unsigned long long)arg1 ;
-(id)accelerometerDataFrom:(id)arg1 to:(id)arg2 ;
-(void)recordAccelerometerFor:(double)arg1 ;
@end

