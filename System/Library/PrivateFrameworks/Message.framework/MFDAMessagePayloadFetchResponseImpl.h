/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDAMessagePayloadFetchResponse.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {

	BOOL streaming;
	BOOL streamingDone;
	NSData* data;

}
-(void)dealloc;
-(id)data;
-(BOOL)streaming;
-(BOOL)streamingDone;
-(id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3 ;
@end

