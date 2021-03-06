/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSMutableDictionary;

@interface PLCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	long long _countLimit;
	long long _currentCount;
	long long _totalCostLimit;
	long long _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3 ;
-(id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2 ;
@end

