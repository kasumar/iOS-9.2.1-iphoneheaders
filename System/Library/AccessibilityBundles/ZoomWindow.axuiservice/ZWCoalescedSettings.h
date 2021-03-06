/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ZoomWindow/ZoomWindow-Structs.h>
@class AXDispatchTimer;

@interface ZWCoalescedSettings : NSObject {

	CGRect _cachedZoomLensFrame;
	double _cachedZoomFactor;
	CGPoint _cachedZoomSlugPosition;
	CGPoint _cachedZoomPanOffset;
	AXDispatchTimer* _zoomLensFrameUpdateTimer;
	AXDispatchTimer* _zoomFactorUpdateTimer;
	AXDispatchTimer* _zoomPanOffsetUpdateTimer;
	AXDispatchTimer* _zoomSlugPositionUpdateTimer;

}

@property (assign,nonatomic) CGRect zoomWindowFrame; 
@property (assign,nonatomic) double zoomFactor; 
@property (assign,nonatomic) CGPoint zoomPanOffset; 
@property (assign,nonatomic) CGPoint zoomSlugNormalizedPosition; 
@property (assign,nonatomic) BOOL zoomInStandby; 
@property (nonatomic,retain) AXDispatchTimer * zoomLensFrameUpdateTimer;                 //@synthesize zoomLensFrameUpdateTimer=_zoomLensFrameUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomFactorUpdateTimer;                    //@synthesize zoomFactorUpdateTimer=_zoomFactorUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomPanOffsetUpdateTimer;                 //@synthesize zoomPanOffsetUpdateTimer=_zoomPanOffsetUpdateTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * zoomSlugPositionUpdateTimer;              //@synthesize zoomSlugPositionUpdateTimer=_zoomSlugPositionUpdateTimer - In the implementation block
+(id)sharedInstance;
-(void)setZoomSlugPositionUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomLensFrameUpdateTimer;
-(AXDispatchTimer *)zoomFactorUpdateTimer;
-(void)setZoomPanOffsetUpdateTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)zoomSlugPositionUpdateTimer;
-(AXDispatchTimer *)zoomPanOffsetUpdateTimer;
-(void)setZoomFactorUpdateTimer:(AXDispatchTimer *)arg1 ;
-(void)setZoomLensFrameUpdateTimer:(AXDispatchTimer *)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(CGRect)zoomWindowFrame;
-(CGPoint)zoomPanOffset;
-(CGPoint)zoomSlugNormalizedPosition;
-(BOOL)zoomInStandby;
-(void)setZoomWindowFrame:(CGRect)arg1 ;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setZoomSlugNormalizedPosition:(CGPoint)arg1 ;
-(void)setZoomInStandby:(BOOL)arg1 ;
@end

