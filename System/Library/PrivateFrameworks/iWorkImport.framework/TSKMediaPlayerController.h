/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKMediaPlayerController <NSObject>
@property (nonatomic,readonly) id<TSKMediaPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL canPlay; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) float volume; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing; 
@property (nonatomic,readonly) BOOL canFastReverse; 
@property (assign,getter=isFastReversing,nonatomic) BOOL fastReversing; 
@property (nonatomic,readonly) BOOL canFastForward; 
@property (assign,getter=isFastForwarding,nonatomic) BOOL fastForwarding; 
@property (nonatomic,readonly) double absoluteCurrentTime; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
@required
-(double)absoluteCurrentTime;
-(double)absoluteDuration;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3;
-(id)newLayer;
-(void)stopSynchronously;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 block:(/*^block*/id)arg2;
-(void)removePeriodicTimeObserver:(id)arg1;
-(BOOL)canFastReverse;
-(BOOL)isFastReversing;
-(void)setFastReversing:(BOOL)arg1;
-(BOOL)canFastForward;
-(BOOL)isFastForwarding;
-(void)setFastForwarding:(BOOL)arg1;
-(BOOL)canPlay;
-(id<TSKMediaPlayerControllerDelegate>)delegate;
-(double)duration;
-(void)setStartTime:(double)arg1;
-(double)startTime;
-(double)remainingTime;
-(double)endTime;
-(void)setEndTime:(double)arg1;
-(void)setRepeatMode:(long long)arg1;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)setRate:(float)arg1;
-(void)setPlaying:(BOOL)arg1;
-(double)currentTime;
-(BOOL)isScrubbing;
-(void)cancelPendingSeeks;
-(float)rate;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1;
-(long long)repeatMode;
-(void)seekToEnd;
-(void)teardown;
-(float)volume;

@end

