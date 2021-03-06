/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@class MFDAMailbox, MFDAMessageStore, MFMailMessageLibrary, MFActivityMonitor, MFError;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {

	MFDAMailbox* mailbox;
	MFDAMessageStore* store;
	MFMailMessageLibrary* library;
	MFActivityMonitor* monitor;
	MFError* error;
	unsigned long long numNewMessages;

}

@property (nonatomic,retain) MFActivityMonitor * monitor; 
@property (nonatomic,retain) MFError * error; 
-(void)dealloc;
-(MFActivityMonitor *)monitor;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(void)setMonitor:(MFActivityMonitor *)arg1 ;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
@end

