/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject {

	NSObject*<OS_dispatch_queue> isolation;
	NSMutableIndexSet* unusedIndexes;
	long long usedMax;
	unsigned long long _fetchTimestamp;

}
+(id)sharedInstance;
+(unsigned long long)nextAvailableThumbnailIndex;
+(void)recycleThumbnailIndexes:(id)arg1 ;
+(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
+(void)getAvailableThumbnailIndexWithHandler:(/*^block*/id)arg1 ;
+(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)getAvailableThumbnailIndexesFromDatabase;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
-(id)init;
@end

