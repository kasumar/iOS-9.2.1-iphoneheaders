/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTFileCopierDelegate.h>

@class NSMutableArray;

@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate> {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)compressPath:(id)arg1 toPath:(id)arg2 ;
@end

