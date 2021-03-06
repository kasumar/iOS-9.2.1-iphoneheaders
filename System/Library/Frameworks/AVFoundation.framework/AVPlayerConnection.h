/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVWeakReference, NSError, AVPlayerItem;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	long long _status;
	NSError* _error;
	AVPlayerItem* _previousPlayerItem;

}

@property (nonatomic,readonly) long long status; 
-(void)dealloc;
-(id)description;
-(long long)status;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(void)removeItemFromPlayQueue;
-(id)playerItem;
-(id)error;
-(id)player;
@end

