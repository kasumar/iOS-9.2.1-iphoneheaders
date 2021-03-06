/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLEngineResourceDownloadTaskGroup : NSObject {

	NSMutableSet* _activeTasks;

}

@property (nonatomic,readonly) NSSet * activeTasks;                          //@synthesize activeTasks=_activeTasks - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(id)initWithTasks:(id)arg1 ;
-(BOOL)isTrackingTask:(id)arg1 ;
-(void)taskDidComplete:(id)arg1 ;
-(NSSet *)activeTasks;
-(BOOL)isComplete;
@end

