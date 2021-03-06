/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _MPUExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _rects;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize calculatedContentSize;              //@synthesize contentSize=_contentSize - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGSize)calculatedContentSize;
-(void)_calculateSizes;
@end

