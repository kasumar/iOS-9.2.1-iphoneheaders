/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SXMapSnapShotter : NSObject {

	NSMutableArray* _snapshotters;

}

@property (nonatomic,retain) NSMutableArray * snapshotters;              //@synthesize snapshotters=_snapshotters - In the implementation block
+(id)serialQueue;
-(NSMutableArray *)snapshotters;
-(/*^block*/id)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSnapshotters:(NSMutableArray *)arg1 ;
-(id)init;
@end

