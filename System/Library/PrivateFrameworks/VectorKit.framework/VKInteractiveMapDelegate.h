/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKInteractiveMapDelegate <NSObject>
@optional
-(void)map:(id)arg1 didChangeOrientation:(double)arg2 snapped:(BOOL)arg3;
-(void)mapDidReloadStylesheet:(id)arg1;
-(void)map:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;

@required
-(void)mapDidFinishChangingMapDisplayStyle:(SCD_Struct_VK17)arg1;
-(void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
-(id)map:(id)arg1 presentationForAnnotation:(id)arg2;
-(id)map:(id)arg1 painterForOverlay:(id)arg2;
-(void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapDidChangeVisibleRegion:(id)arg1;
-(void)map:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapDidStartLoadingTiles:(id)arg1;
-(void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)mapDidFinishLoadingTiles:(id)arg1;
-(void)map:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)mapDidFinishInitialTrackingAnimation:(id)arg1;
-(void)mapDidBecomePartiallyDrawn:(id)arg1;
-(void)map:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapLabelsDidLayout:(id)arg1;
-(void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)map:(id)arg1 flyoverModeWillChange:(int)arg2;
-(void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)map:(id)arg1 flyoverModeDidChange:(int)arg2;

@end
