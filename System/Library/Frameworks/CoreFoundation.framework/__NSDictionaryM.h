/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary {

	unsigned _used : 58;
	unsigned _kvo : 1;
	unsigned long long _size;
	unsigned long long _mutations;
	id* _objs;
	id* _keys;

}
+(id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned long long)arg3 :(BOOL)arg4 :(BOOL)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(double)_clumpingFactor;
-(double)_clumpingInterestingThreshold;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS20*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)finalize;
@end

