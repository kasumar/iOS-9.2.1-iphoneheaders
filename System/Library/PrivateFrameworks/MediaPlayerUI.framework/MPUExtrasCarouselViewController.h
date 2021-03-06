/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasCarouselCollectionViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@protocol MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasCarouselCollectionViewLayout;
@class MPUExtrasCarouselCollectionView, UICollectionViewLayout, NSString;

@interface MPUExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasCarouselCollectionViewDelegate, MPUExtrasZoomingImageTransitionParticipant> {

	BOOL _revealingNavigationBarDuringTransition;
	id<MPUExtrasCarouselViewControllerDataSource> _dataSource;
	id<MPUExtrasCarouselViewControllerDelegate> _delegate;
	MPUExtrasCarouselCollectionView* _carouselCollectionView;
	UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout> _carouselCollectionViewLayout;

}

@property (assign,nonatomic,__weak) id<MPUExtrasCarouselViewControllerDataSource> dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUExtrasCarouselViewControllerDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfVisibleItem; 
@property (nonatomic,retain) MPUExtrasCarouselCollectionView * carouselCollectionView;                                                 //@synthesize carouselCollectionView=_carouselCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout> carouselCollectionViewLayout;              //@synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout - In the implementation block
@property (assign,getter=isRevealingNavigationBarDuringTransition,nonatomic) BOOL revealingNavigationBarDuringTransition;              //@synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<MPUExtrasCarouselViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<MPUExtrasCarouselViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MPUExtrasCarouselViewControllerDataSource>)dataSource;
-(id<MPUExtrasCarouselViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)_numberOfItems;
-(MPUExtrasCarouselCollectionView *)carouselCollectionView;
-(void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2 ;
-(BOOL)_isPhone;
-(void)_updateOpacityOfTextInVisibleCells;
-(void)_updateWindowSizeForVisibleCells;
-(UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout>)carouselCollectionViewLayout;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 ;
-(void)setRevealingNavigationBarDuringTransition:(BOOL)arg1 ;
-(id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(BOOL)isRevealingNavigationBarDuringTransition;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setCarouselCollectionViewLayout:(UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout>)arg1 ;
-(void)setCarouselCollectionView:(MPUExtrasCarouselCollectionView *)arg1 ;
-(void)subviewsDidChangeForCarouselCollectionView:(id)arg1 ;
@end

