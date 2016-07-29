/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSLUIInertialUpdaterDelegate;
#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
@class CADisplayLink;

@interface CSLUIInertialUpdater : NSObject {

	BOOL _dragging;
	CGPoint _velocity;
	CGPoint _lastVelocity;
	CGPoint _target;
	CGPoint _clientTarget;
	CGPoint _offset;
	double _lastDecelerationUpdate;
	double _lastInteractionTime;
	CADisplayLink* _displayLink;
	id<CSLUIInertialUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) id<CSLUIInertialUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_decelerate:(double)arg1 ;
-(void)addDragDelta:(CGPoint)arg1 ;
-(CGPoint)_constrainedOffset:(CGPoint)arg1 ;
-(void)_finalizeOffset;
-(void)_computeDecelerationTarget;
-(void)_handleDragDelta:(CGPoint)arg1 ;
-(void)endDragging;
-(void)_updateDelegateWithDelta:(CGPoint)arg1 ;
-(void)endUpdating;
-(void)setDelegate:(id<CSLUIInertialUpdaterDelegate>)arg1 ;
-(id<CSLUIInertialUpdaterDelegate>)delegate;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_updateDisplayLink;
-(void)_beginDraggingIfNecessary;
-(BOOL)_needsDisplayLink;
@end
