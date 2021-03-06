/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimCompositionOperation.h>

@class RCSavedRecording;

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation {

	RCSavedRecording* _sourceRecording;
	RCSavedRecording* _destinationRecording;

}

@property (nonatomic,readonly) RCSavedRecording * sourceRecording;                   //@synthesize sourceRecording=_sourceRecording - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * destinationRecording;              //@synthesize destinationRecording=_destinationRecording - In the implementation block
-(void)main;
-(id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(SCD_Struct_RC4)arg3 trimMode:(long long)arg4 ;
-(RCSavedRecording *)sourceRecording;
-(RCSavedRecording *)destinationRecording;
@end

