/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSObject*<OS_xpc_object> _client;
	id _reactorID;
	/*^block*/id _messageSender;
	NSFileAccessNode* _itemLocation;

}
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)reactorID;
-(/*^block*/id)messageSender;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(/*^block*/id)arg3 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)sendMessageKind:(id)arg1 parameters:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)finalize;
-(id)client;
@end
