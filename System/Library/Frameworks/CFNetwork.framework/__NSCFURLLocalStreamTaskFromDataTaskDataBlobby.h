/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {

	NSObject*<OS_dispatch_data> _remainingData;
	/*^block*/id _completion;

}
-(void)callCompletion;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)drain:(CFWriteStreamRef)arg1 ;
-(void)dealloc;
@end
