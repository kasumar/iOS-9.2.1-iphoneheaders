/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface SFUFileInputStream : NSObject <SFUInputStream> {

	int mFd;
	BOOL mIsCachingDisabled;
	long long mStartOffset;
	long long mCurrentOffset;
	long long mEndOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3 ;
-(id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3 ;
@end

