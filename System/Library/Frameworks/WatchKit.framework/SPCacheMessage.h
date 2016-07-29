/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject {

	int _messageType;
	unsigned long long _cacheType;
	NSString* _assetKey;
	NSString* _gizmoCacheIdentifier;
	NSData* _assetData;
	SPAssetCacheSyncData* _syncData;
	unsigned long long _error;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned long long cacheType;                 //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) SPAssetCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
@property (assign,nonatomic) unsigned long long error;                     //@synthesize error=_error - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(NSData *)assetData;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(int)messageType;
-(unsigned long long)error;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(void)setSyncData:(SPAssetCacheSyncData *)arg1 ;
-(unsigned long long)cacheType;
-(void)setCacheType:(unsigned long long)arg1 ;
-(NSString *)gizmoCacheIdentifier;
-(SPAssetCacheSyncData *)syncData;
-(void)setAssetKey:(NSString *)arg1 ;
-(NSString *)assetKey;
-(void)setError:(unsigned long long)arg1 ;
@end
