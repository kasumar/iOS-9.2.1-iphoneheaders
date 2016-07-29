/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {

	NSArray* _lookupItems;
	NSArray* _storeItems;
	NSData* _trackData;
	NSArray* _parsedStoreItemsImportProperties;
	NSDateFormatter* _storePlatformDateFormatter;

}

@property (nonatomic,readonly) NSData * trackData; 
@property (nonatomic,readonly) NSArray * parsedStoreItemsImportProperties; 
@property (nonatomic,readonly) unsigned long long trackCount; 
+(id)_allSongItemsFromLookupItems:(id)arg1 ;
+(unsigned)_mediaTypeForStoreItemKind:(id)arg1 ;
+(double)_songDurationFromOffersArray:(id)arg1 ;
+(id)_artworkTokenFromStoreItem:(id)arg1 ;
+(id)_artworkTokenForItemWithCollectionID:(unsigned long long)arg1 itemID:(unsigned long long)arg2 ;
+(id)_allSongItemsFromCollectionLookupItem:(id)arg1 ;
+(id)_artworkTokenFromLookupItem:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromLookupItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromStoreItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromTrackData:(id)arg1 ;
-(id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2 ;
-(id)_importDictionaryForStoreItem:(id)arg1 ;
-(id)_parentDictForItemAlbumId:(id)arg1 ;
-(id)initWithStoreItems:(id)arg1 ;
-(id)initWithTrackData:(id)arg1 ;
-(id)_storePlatformDateFormatter;
-(id)initWithLookupItems:(id)arg1 ;
-(NSData *)trackData;
-(NSArray *)parsedStoreItemsImportProperties;
-(unsigned long long)trackCount;
@end
