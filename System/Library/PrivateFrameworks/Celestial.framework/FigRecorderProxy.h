/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSessionProxy.h>

@protocol FigCaptureSessionPreviewTapDelegate;
@interface FigRecorderProxy : FigCaptureSessionProxy {

	OpaqueFigRecorderRef _recorder;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}
-(void)dealloc;
-(long long)identifier;
-(id)initWithFigRecorder:(OpaqueFigRecorderRef)arg1 identifier:(long long)arg2 ;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
@end
