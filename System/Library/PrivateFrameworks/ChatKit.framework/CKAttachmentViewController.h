/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKFeedCollectionViewLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/CKAttachmentCellDelegate.h>
#import <libobjc.A.dylib/CKFeedCollectionViewLayoutDatasource.h>
#import <libobjc.A.dylib/CKTranscriptRecipientsControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@protocol CKAttachmentViewControllerDelegate;
@class CKAttachmentCollectionView, NSMutableArray, CKFeedCollectionViewLayout, UICollectionViewFlowLayout, CKQLDetailsPreviewController, CKConversation, UIBarButtonItem, NSArray, CKTranscriptRecipientsController, NSString;

@interface CKAttachmentViewController : CKViewController <CKFeedCollectionViewLayoutDelegate, UICollectionViewDelegateFlowLayout, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKTranscriptRecipientsControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIGestureRecognizerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate> {

	BOOL _initialLoad;
	BOOL _selectingAttachments;
	id<CKAttachmentViewControllerDelegate> _delegate;
	CKAttachmentCollectionView* _collectionView;
	NSMutableArray* _mediaObjects;
	CKFeedCollectionViewLayout* _feedLayout;
	UICollectionViewFlowLayout* _flowLayout;
	CKQLDetailsPreviewController* _qlPreviewController;
	CKConversation* _conversation;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _deleteButton;
	NSArray* _visibleMediaObjects;
	CKTranscriptRecipientsController* _recipientsController;

}

@property (assign,nonatomic) id<CKAttachmentViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAttachmentCollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaObjects;                                        //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKFeedCollectionViewLayout * feedLayout;                              //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) CKQLDetailsPreviewController * qlPreviewController;                   //@synthesize qlPreviewController=_qlPreviewController - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                        //@synthesize conversation=_conversation - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                                //@synthesize initialLoad=_initialLoad - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                         //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButton;                                       //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,getter=isSelectingAttachments,nonatomic) BOOL selectingAttachments;              //@synthesize selectingAttachments=_selectingAttachments - In the implementation block
@property (nonatomic,retain) NSArray * visibleMediaObjects;                                        //@synthesize visibleMediaObjects=_visibleMediaObjects - In the implementation block
@property (nonatomic,retain) CKTranscriptRecipientsController * recipientsController;              //@synthesize recipientsController=_recipientsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKAttachmentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<CKAttachmentViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CKAttachmentCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)setCollectionView:(CKAttachmentCollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(NSArray *)visibleMediaObjects;
-(void)_updateToolbar;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4 ;
-(CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4 ;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)isInitialLoad;
-(void)_chatItemsChanged:(id)arg1 ;
-(void)setFeedLayout:(CKFeedCollectionViewLayout *)arg1 ;
-(void)setRecipientsController:(CKTranscriptRecipientsController *)arg1 ;
-(void)setSelectingAttachments:(BOOL)arg1 ;
-(void)_loadAttachments;
-(void)viewDidAppearDeferredSetup;
-(void)_prewarmNextChunk;
-(CKTranscriptRecipientsController *)recipientsController;
-(CKFeedCollectionViewLayout *)feedLayout;
-(NSMutableArray *)mediaObjects;
-(void)setVisibleMediaObjects:(NSArray *)arg1 ;
-(void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)isSelectingAttachments;
-(void)_faultInAttachments;
-(void)setMediaObjects:(NSMutableArray *)arg1 ;
-(void)_updateMediaObjects:(id)arg1 ;
-(id)_mediaObjectsForAttachments:(id)arg1 ;
-(id)_iconForFileURL:(id)arg1 UTIType:(id)arg2 ;
-(id)selectedAttachmentIndexes;
-(UIBarButtonItem *)saveButton;
-(UIBarButtonItem *)deleteButton;
-(void)_saveSelectedAttachments:(id)arg1 ;
-(void)_deleteSelectedAttachments:(id)arg1 ;
-(void)selectAttachments:(id)arg1 ;
-(void)_saveAttachments:(id)arg1 ;
-(void)_deleteAttachments:(id)arg1 ;
-(CKQLDetailsPreviewController *)qlPreviewController;
-(void)attachmentCellTapped:(id)arg1 ;
-(void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2 ;
-(unsigned long long)numberOfSectionsInFeedLayout:(id)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(id)arg2 ;
-(void)transcriptRecipientsControllerDidChangeSize:(id)arg1 ;
-(BOOL)transcriptRecipientsControllerShouldShowAttachmentsHeader:(id)arg1 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4 ;
-(void)setQlPreviewController:(CKQLDetailsPreviewController *)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
@end
