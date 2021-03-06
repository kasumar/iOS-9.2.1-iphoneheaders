/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {

	PlatformSpeechSynthesizer* m_synthesizerObject;
	RefPtr<WebCore::PlatformSpeechSynthesisUtterance>* m_utterance;
	RetainPtr<AVSpeechSynthesizer>* m_synthesizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)mapSpeechRateToPlatformRate:(float)arg1 ;
-(id)initWithSpeechSynthesizer:(PlatformSpeechSynthesizer*)arg1 ;
-(void)cancel;
-(void)resume;
-(void)pause;
-(void)speakUtterance:(PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance>*)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
@end

