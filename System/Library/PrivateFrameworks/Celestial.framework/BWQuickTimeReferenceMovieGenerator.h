/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSObject;

@interface BWQuickTimeReferenceMovieGenerator : NSObject {

	BOOL _sourceIsFrontFacingCamera;
	SCD_Struct_BW2 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	BOOL _masterMovieParsingComplete;
	long long _masterMovieAudioExtractionID;
	OpaqueFigSimpleMutexRef _refMovieInfoAndCallbacksMutex;
	NSMutableArray* _refMovieInfoAndCallbacks;
	NSObject*<OS_dispatch_queue> _refMovieGenerationQueue;

}
+(void)initialize;
+(BOOL)_addStillImageTimeMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
-(void)dealloc;
-(void)flush;
-(void)_generateRefMovies:(BOOL)arg1 ;
-(int)_generateRefMovieForInfo:(id)arg1 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(BOOL)arg2 ;
-(void)writeReferenceMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseAdditionalFragments;
@end
