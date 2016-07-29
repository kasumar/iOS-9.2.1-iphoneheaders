/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATAsset;

@interface MLSyncAssetRequest : NSObject {

	ATAsset* _asset;
	double _timestamp;
	/*^block*/id _completion;

}

@property (nonatomic,retain) ATAsset * asset;               //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) id completion;                   //@synthesize completion=_completion - In the implementation block
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
@end
