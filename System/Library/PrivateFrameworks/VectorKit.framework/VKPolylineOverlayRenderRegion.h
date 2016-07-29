/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSSet;

@interface VKPolylineOverlayRenderRegion : NSObject {

	NSSet* _tiles;
	SCD_Struct_VK11 _visibleRect;
	vector<VKRect, std::__1::allocator<VKRect> >* _rectsForSnapping;
	vector<VKTileKey, std::__1::allocator<VKTileKey> >* _snappedTileKeys;

}

@property (nonatomic,readonly) NSSet * tiles;                            //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK11 visibleRect;              //@synthesize visibleRect=_visibleRect - In the implementation block
-(void)dealloc;
-(SCD_Struct_VK11)visibleRect;
-(BOOL)isEquivalentToNewRegion:(id)arg1 ;
-(id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3 ;
-(const vector<VKRect, std::__1::allocator<VKRect> >*)rectsForSnapping;
-(NSSet *)tiles;
@end
