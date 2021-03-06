/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {

	NSMutableDictionary* _mediaKindDict;
	unsigned long long _totalStorage;
	unsigned long long _usedStorage;

}

@property (assign,nonatomic) unsigned long long totalStorage;              //@synthesize totalStorage=_totalStorage - In the implementation block
@property (assign,nonatomic) unsigned long long usedStorage;               //@synthesize usedStorage=_usedStorage - In the implementation block
-(id)init;
-(void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2 ;
-(void)setTotalStorage:(unsigned long long)arg1 ;
-(void)setUsedStorage:(unsigned long long)arg1 ;
-(unsigned long long)storageInUseForMediaKind:(long long)arg1 ;
-(unsigned long long)totalStorage;
-(unsigned long long)usedStorage;
@end

