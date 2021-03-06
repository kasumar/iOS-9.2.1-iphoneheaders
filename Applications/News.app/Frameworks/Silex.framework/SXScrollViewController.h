/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIViewController.h>
#import <Silex/SXInteractivityManagerProtocol.h>
#import <Silex/SXLayoutControllerDataSource.h>
#import <Silex/SXLayoutControllerDelegate.h>
#import <Silex/SXScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Silex/SXTangierControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol SXScrollViewControllerDelegateSXEventCenterDelegate, SXScrollViewControllerDataSource, UIViewControllerPreviewing;
@class SXComponentAnimationController, SXComponentBehaviorController, SXEventCenter, SXMediaPlaybackController, SXContext, UIScrollView, SXLayoutController, SXComponentView, SXFullScreenCanvasViewController, SXFullScreenCanvasController, UIView, SXScrollPosition, UIDynamicAnimator, NSArray, NSMutableArray, SXDocumentStyleRenderer, SXTangierController, NSString, NSHashTable;

@interface SXScrollViewController : UIViewController <SXInteractivityManagerProtocol, SXLayoutControllerDataSource, SXLayoutControllerDelegate, SXScrollViewDelegate, UIGestureRecognizerDelegate, SXTangierControllerDelegate, UIViewControllerPreviewingDelegate> {

	BOOL _isTransitioningToNewSize;
	BOOL _shouldFadeInAfterRotation;
	SXComponentAnimationController* _animationController;
	SXComponentBehaviorController* _behaviorController;
	SXEventCenter* _eventCenter;
	SXMediaPlaybackController* _mediaPlaybackController;
	SXContext* _context;
	UIScrollView* _scrollView;
	id<SXScrollViewControllerDelegate><SXEventCenterDelegate> _delegate;
	id<SXScrollViewControllerDataSource> _dataSource;
	SXLayoutController* _layoutController;
	SXComponentView* _focussedComponentView;
	SXFullScreenCanvasViewController* _fullscreenCanvasViewController;
	SXFullScreenCanvasController* _currentCanvasController;
	UIView* _fullscreenCanvasView;
	SXScrollPosition* _restoredScrollPosition;
	UIDynamicAnimator* _dynamicAnimator;
	double _lastScrollOffset;
	NSArray* _snapLines;
	NSMutableArray* _snapLinesViews;
	NSMutableArray* _viewsToMaintainPosition;
	SXDocumentStyleRenderer* _documentStyleRenderer;
	SXTangierController* _tangierController;
	NSString* _currentPreferredContentSizeCategory;
	NSMutableArray* _footerViewControllers;
	NSMutableArray* _articleScrollEvents;
	double _initialNavigationHeight;
	SXComponentView* _targetComponentView;
	NSHashTable* _componentsToUpdateWithContentOffset;
	id<UIViewControllerPreviewing> _previewingContext;
	CGSize _currentLayoutSize;
	CGSize _currentContentSize;

}

@property (nonatomic,retain) SXLayoutController * layoutController; 
@property (nonatomic,readonly) SXContext * context;                                                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewControllerDelegate><SXEventCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewControllerDataSource> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingFullscreenCanvas; 
@property (nonatomic,readonly) UIView * targetView; 
@property (nonatomic,readonly) BOOL targetViewUsesThumbnail; 
@property (nonatomic,readonly) BOOL targetViewVisible; 
@property (nonatomic,readonly) CGRect visibleTargetFrame; 
@property (nonatomic,readonly) CGRect targetContentFrame; 
@property (nonatomic,retain) SXLayoutController * layoutController;                                                  //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) SXComponentView * focussedComponentView;                                                //@synthesize focussedComponentView=_focussedComponentView - In the implementation block
@property (nonatomic,retain) SXFullScreenCanvasViewController * fullscreenCanvasViewController;                      //@synthesize fullscreenCanvasViewController=_fullscreenCanvasViewController - In the implementation block
@property (nonatomic,retain) SXFullScreenCanvasController * currentCanvasController;                                 //@synthesize currentCanvasController=_currentCanvasController - In the implementation block
@property (nonatomic,retain) UIView * fullscreenCanvasView;                                                          //@synthesize fullscreenCanvasView=_fullscreenCanvasView - In the implementation block
@property (nonatomic,retain) SXScrollPosition * restoredScrollPosition;                                              //@synthesize restoredScrollPosition=_restoredScrollPosition - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * dynamicAnimator;                                                    //@synthesize dynamicAnimator=_dynamicAnimator - In the implementation block
@property (assign,nonatomic) double lastScrollOffset;                                                                //@synthesize lastScrollOffset=_lastScrollOffset - In the implementation block
@property (nonatomic,retain) NSArray * snapLines;                                                                    //@synthesize snapLines=_snapLines - In the implementation block
@property (nonatomic,retain) NSMutableArray * snapLinesViews;                                                        //@synthesize snapLinesViews=_snapLinesViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * viewsToMaintainPosition;                                             //@synthesize viewsToMaintainPosition=_viewsToMaintainPosition - In the implementation block
@property (nonatomic,readonly) SXDocumentStyleRenderer * documentStyleRenderer;                                      //@synthesize documentStyleRenderer=_documentStyleRenderer - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                                //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioningToNewSize;                                                        //@synthesize isTransitioningToNewSize=_isTransitioningToNewSize - In the implementation block
@property (assign,nonatomic) CGSize currentLayoutSize;                                                               //@synthesize currentLayoutSize=_currentLayoutSize - In the implementation block
@property (nonatomic,copy) NSString * currentPreferredContentSizeCategory;                                           //@synthesize currentPreferredContentSizeCategory=_currentPreferredContentSizeCategory - In the implementation block
@property (nonatomic,retain) NSMutableArray * footerViewControllers;                                                 //@synthesize footerViewControllers=_footerViewControllers - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeInAfterRotation;                                                         //@synthesize shouldFadeInAfterRotation=_shouldFadeInAfterRotation - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleScrollEvents;                                                   //@synthesize articleScrollEvents=_articleScrollEvents - In the implementation block
@property (assign,nonatomic) CGSize currentContentSize;                                                              //@synthesize currentContentSize=_currentContentSize - In the implementation block
@property (assign,nonatomic) double initialNavigationHeight;                                                         //@synthesize initialNavigationHeight=_initialNavigationHeight - In the implementation block
@property (nonatomic,retain) SXComponentView * targetComponentView;                                                  //@synthesize targetComponentView=_targetComponentView - In the implementation block
@property (nonatomic,readonly) NSHashTable * componentsToUpdateWithContentOffset;                                    //@synthesize componentsToUpdateWithContentOffset=_componentsToUpdateWithContentOffset - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewingContext;                                       //@synthesize previewingContext=_previewingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXComponentAnimationController * animationController;                                 //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,readonly) SXComponentBehaviorController * behaviorController;                                   //@synthesize behaviorController=_behaviorController - In the implementation block
@property (nonatomic,readonly) SXEventCenter * eventCenter;                                                          //@synthesize eventCenter=_eventCenter - In the implementation block
@property (nonatomic,readonly) SXMediaPlaybackController * mediaPlaybackController;                                  //@synthesize mediaPlaybackController=_mediaPlaybackController - In the implementation block
-(id)componentViewUsingImageIdentifier:(id)arg1 ;
-(SXEventCenter *)eventCenter;
-(void)finishArticleScrollEvents;
-(NSMutableArray *)articleScrollEvents;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(SXTangierController *)tangierController;
-(void)setFooterViewControllers:(NSMutableArray *)arg1 ;
-(SXDocumentStyleRenderer *)documentStyleRenderer;
-(void)setInitialNavigationHeight:(double)arg1 ;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(void)layoutForSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(id)canvasViewController;
-(void)_userDefaultsChanged:(id)arg1 ;
-(SXMediaPlaybackController *)mediaPlaybackController;
-(CGSize)currentLayoutSize;
-(void)setShouldFadeInAfterRotation:(BOOL)arg1 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 ;
-(void)renderContentsIfNeededForComponents:(id)arg1 ;
-(SXFullScreenCanvasViewController *)fullscreenCanvasViewController;
-(SXFullScreenCanvasController *)currentCanvasController;
-(BOOL)shouldRelayoutForSize:(CGSize)arg1 preferredContentSizeCategory:(id)arg2 ;
-(void)setCurrentLayoutSize:(CGSize)arg1 ;
-(void)setCurrentPreferredContentSizeCategory:(NSString *)arg1 ;
-(SXComponentBehaviorController *)behaviorController;
-(UIView *)fullscreenCanvasView;
-(NSString *)currentPreferredContentSizeCategory;
-(SXComponentView *)targetComponentView;
-(CGRect)targetContentFrame;
-(double)initialNavigationHeight;
-(id)textScrollPositionForComponentViews:(id)arg1 ;
-(id)scrollPositionForComponentViews:(id)arg1 ;
-(void)dictionaryWithComponentOffsets:(id)arg1 forComponentViews:(id)arg2 ;
-(void)setRestoredScrollPosition:(SXScrollPosition *)arg1 ;
-(id)scrollPosition;
-(void)setCurrentContentSize:(CGSize)arg1 ;
-(SXScrollPosition *)restoredScrollPosition;
-(void)updateScrollPosition:(id)arg1 ;
-(id)analyzeSnapLinesForComponents:(id)arg1 ;
-(void)setSnapLines:(NSArray *)arg1 ;
-(void)reloadFooters;
-(void)showSnapLines:(BOOL)arg1 ;
-(BOOL)shouldFadeInAfterRotation;
-(NSMutableArray *)footerViewControllers;
-(void)setFocussedComponentView:(SXComponentView *)arg1 ;
-(SXComponentView *)focussedComponentView;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dismissFullscreenCanvasForComponent:(id)arg1 ;
-(void)setFullscreenCanvasViewController:(SXFullScreenCanvasViewController *)arg1 ;
-(void)setFullscreenCanvasView:(UIView *)arg1 ;
-(void)setCurrentCanvasController:(SXFullScreenCanvasController *)arg1 ;
-(NSMutableArray *)viewsToMaintainPosition;
-(NSArray *)snapLines;
-(NSMutableArray *)snapLinesViews;
-(void)setSnapLinesViews:(NSMutableArray *)arg1 ;
-(double)lastScrollOffset;
-(void)setLastScrollOffset:(double)arg1 ;
-(void)supplyScrollOffsetUpdatesToComponentViews;
-(CGPoint)currentContentOffset;
-(BOOL)isTransitioningToNewSize;
-(long long)visiblityStateForComponentView:(id)arg1 forVisibleBounds:(CGRect)arg2 ;
-(NSHashTable *)componentsToUpdateWithContentOffset;
-(id)layoutDescription;
-(BOOL)requestInteractivityFocusForComponent:(id)arg1 ;
-(void)removeInteractivityFocusForComponent:(id)arg1 ;
-(id)requestFullScreenCanvasForComponent:(id)arg1 canvasController:(id)arg2 ;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 ;
-(id)presentingScrollView;
-(id)presentingContentViewController;
-(void)triggerAction:(id)arg1 forComponentView:(id)arg2 ;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)maintainPositionOfViewWhileScrolling:(id)arg1 ;
-(void)releasePositionOfView:(id)arg1 ;
-(void)updateBehaviorForComponentView:(id)arg1 ;
-(long long)visiblityStateForComponentView:(id)arg1 ;
-(void)startSupplyingScrollOffsetUpdatesToComponentView:(id)arg1 ;
-(void)stopSupplyingScrollOffsetUpdatesToComponentView:(id)arg1 ;
-(unsigned long long)numberOfComponentsForLayouter:(id)arg1 ;
-(id)layoutController:(id)arg1 componentForIndex:(unsigned long long)arg2 ;
-(id)documentControllerForLayoutController:(id)arg1 ;
-(id)contextForLayoutController:(id)arg1 ;
-(id)targetViewForLayoutController:(id)arg1 ;
-(void)layoutControllerWillStartNewLayout:(id)arg1 ;
-(void)layoutController:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(BOOL)shouldPreventDraggingForScrollView:(id)arg1 ;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(void)tangierControllerDidStopScrolling:(id)arg1 ;
-(void)tangierController:(id)arg1 didTriggerAction:(id)arg2 ;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)nextLayoutShouldBeSynchronous;
-(void)startLayoutingForCanvasSize:(CGSize)arg1 ;
-(BOOL)targetViewVisible;
-(CGRect)visibleTargetFrame;
-(BOOL)targetViewUsesThumbnail;
-(BOOL)isPresentingFullscreenCanvas;
-(id)layoutController:(id)arg1 componentLayoutForComponent:(id)arg2 ;
-(BOOL)allowResizingOfComponent:(id)arg1 ;
-(void)willTransitionToPresentedInPagedView;
-(void)didTransitionToPresentedInPagedView;
-(void)setLayoutController:(SXLayoutController *)arg1 ;
-(void)setArticleScrollEvents:(NSMutableArray *)arg1 ;
-(void)setTargetComponentView:(SXComponentView *)arg1 ;
-(id<UIViewControllerPreviewing>)previewingContext;
-(SXLayoutController *)layoutController;
-(id)interactiveCanvasController;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<SXScrollViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<SXScrollViewControllerDelegate><SXEventCenterDelegate>)arg1 ;
-(void)dealloc;
-(id<SXScrollViewControllerDataSource>)dataSource;
-(id<SXScrollViewControllerDelegate><SXEventCenterDelegate>)delegate;
-(SXComponentAnimationController *)animationController;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)contentView;
-(SXContext *)context;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(UIView *)targetView;
-(UIDynamicAnimator *)dynamicAnimator;
-(void)applicationDidEnterBackground;
-(void)setDynamicAnimator:(UIDynamicAnimator *)arg1 ;
-(CGSize)currentContentSize;
@end

