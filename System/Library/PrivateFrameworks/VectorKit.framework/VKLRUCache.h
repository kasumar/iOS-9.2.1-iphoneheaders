/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol VKLRUCacheDelegate;
@interface VKLRUCache : NSObject <NSFastEnumeration> {

	unsigned long long _reservedCapacity;
	unsigned long long _maximumCapacity;
	unsigned long long _count;
	void* _table;
	id _head;
	id _tail;
	id<VKLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long reservedCapacity;              //@synthesize reservedCapacity=_reservedCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCapacity;               //@synthesize maximumCapacity=_maximumCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) id<VKLRUCacheDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_VK63*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setDelegate:(id<VKLRUCacheDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(id<VKLRUCacheDelegate>)delegate;
-(id)objectForKey:(const VKCacheKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKCacheKey*)arg2 ;
-(void)purge;
-(id)contentsDescription;
-(void)removeObjectsMatchingPredicate:(/*^block*/id)arg1 ;
-(void)evictIfNecessary;
-(id)initWithReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2 ;
-(void)removeNode:(id)arg1 ;
-(void)dropTail;
-(void)setReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2 ;
-(void)consistencyCheck;
-(void)insertNodeAtHead:(id)arg1 ;
-(id)objectWithoutPromotingForKey:(const VKCacheKey*)arg1 ;
-(unsigned long long)reservedCapacity;
-(unsigned long long)maximumCapacity;
@end
