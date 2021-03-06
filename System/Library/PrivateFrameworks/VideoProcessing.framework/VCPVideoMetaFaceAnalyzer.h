/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableDictionary, NSMutableArray;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableDictionary* _activeFaces;
	CGAffineTransform _transform;
	NSMutableArray* _faceResults;

}
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(id)results;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
@end

