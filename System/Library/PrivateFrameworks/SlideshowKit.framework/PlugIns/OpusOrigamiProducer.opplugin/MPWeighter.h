/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {

	long long _totalWeight;
	NSMutableArray* _weights;
	NSMutableArray* _items;
	NSMutableArray* _constraints;
	NSMutableArray* _usageCount;
	NSMutableIndexSet* _ignoreIndices;
	BOOL _evenlyPickByID;
	BOOL _ignorePanoramas;

}
-(void)ignoreIndex:(long long)arg1 ;
-(void)clearAllItems;
-(id)ignoredIndices;
-(id)allConstraints;
-(void)ignoreIndices:(id)arg1 ;
-(id)imageCounts;
-(id)allUsageCounts;
-(long long)getRandomIndex;
-(long long)getRandomIndexMeetingContraints:(id)arg1 oneMatch:(BOOL)arg2 ;
-(BOOL)itemAtIndex:(long long)arg1 meetsContraints:(id)arg2 oneMatch:(BOOL)arg3 ;
-(long long)getRandomIndexInSubset:(id)arg1 ;
-(long long)getRandomIndexInSubset:(id)arg1 withPreviousTags:(id)arg2 ;
-(BOOL)itemAtIndex:(long long)arg1 meetsContraints:(id)arg2 ;
-(void)addItem:(id)arg1 withWeight:(long long)arg2 andContraints:(id)arg3 ;
-(void)addIndexToIgnore:(long long)arg1 ;
-(void)setEvenlyPickByID:(BOOL)arg1 ;
-(id)constraintsForItem:(id)arg1 ;
-(void)clearIgnoreIndices;
-(long long)getRandomIndexMeetingContraints:(id)arg1 ;
-(long long)getRandomIndexWithNoPanoramasForImageCount:(long long)arg1 ;
-(long long)numberOfItemsWithImageCount:(long long)arg1 ;
-(id)indicesMeetingConstraints:(id)arg1 ;
-(void)increaseUsageCountOfObjectAtIndex:(long long)arg1 ;
-(id)indicesEqualingConstraints:(id)arg1 ;
-(void)setIgnorePanoramas:(BOOL)arg1 ;
-(id)getRandomItemMeetingNumberOfFaceLandscapes:(long long)arg1 facePortraits:(long long)arg2 imageLandscapes:(long long)arg3 imagePortraits:(long long)arg4 vPanoramas:(long long)arg5 hPanoramas:(long long)arg6 movies:(long long)arg7 fitsInExtraWide:(long long)arg8 aspectRatios:(id)arg9 previousTags:(id)arg10 ;
-(void)dealloc;
-(long long)count;
-(id)init;
-(id)allItems;
@end

