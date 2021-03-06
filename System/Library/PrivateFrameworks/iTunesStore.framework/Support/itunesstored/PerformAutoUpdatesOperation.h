/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface PerformAutoUpdatesOperation : ISOperation {

	NSArray* _updates;

}
-(id)_newUpdateWithStoreItemData:(id)arg1 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 ;
-(void)_scheduleCellularTransitionsAfterTime:(double)arg1 ;
-(id)_newBTAJobWithStartTime:(double)arg1 interval:(double)arg2 ;
-(void)dealloc;
-(void)run;
-(id)initWithUpdates:(id)arg1 ;
-(id)updates;
@end

