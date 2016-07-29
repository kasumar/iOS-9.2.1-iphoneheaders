/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@interface KNRecordingPauseEvent : KNRecordingEvent {

	long long mPauseEventType;

}

@property (nonatomic,readonly) long long pauseEventType; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)initWithStartTime:(double)arg1 ;
-(id)initWithStartTime:(double)arg1 pauseEventType:(long long)arg2 ;
-(long long)pauseEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
