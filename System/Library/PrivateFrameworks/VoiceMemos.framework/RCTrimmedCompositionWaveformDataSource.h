/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {

	NSURL* _destinationWaveformURL;

}

@property (nonatomic,readonly) NSURL * destinationWaveformURL;              //@synthesize destinationWaveformURL=_destinationWaveformURL - In the implementation block
-(id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(id)generatedWaveformOutputURL;
-(NSURL *)destinationWaveformURL;
@end
