/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DownloadDataConsumer.h>
#import <itunesstored/SZExtractorDelegate.h>

@class SZExtractor, NSDictionary, NSString;

@interface StreamingZipDownloadDataConsumer : DownloadDataConsumer <SZExtractorDelegate> {

	SZExtractor* _extractor;
	BOOL _hasConsumedData;
	NSDictionary* _options;
	NSString* _path;
	double _percentComplete;
	unsigned long long _resumptionOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)consumeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasConsumedData;
-(unsigned long long)resumptionOffset;
-(void)truncate;
-(double)percentComplete;
-(void)reset;
-(void)suspend;
-(id)initWithPath:(id)arg1 options:(id)arg2 ;
-(void)setExtractionProgress:(double)arg1 ;
-(BOOL)finish:(id*)arg1 ;
@end
