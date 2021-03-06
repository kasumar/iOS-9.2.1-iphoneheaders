/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	BOOL _suspendedCollaboration;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;                      //@synthesize identifer=_identifer - In the implementation block
@property (nonatomic,readonly) BOOL suspendedCollaboration;              //@synthesize suspendedCollaboration=_suspendedCollaboration - In the implementation block
-(id)initWithSuspendedCollaboration:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)invokeWithDocumentRoot:(id)arg1 ;
-(BOOL)suspendedCollaboration;
-(void)dealloc;
-(long long)identifer;
@end

