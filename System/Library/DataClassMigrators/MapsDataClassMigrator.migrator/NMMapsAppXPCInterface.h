/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NMMapsAppXPCInterface
@required
-(void)updateDroppedPin:(id)arg1;
-(void)updateHistoryItem:(id)arg1;
-(void)updateDirectionsStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)stopDirections;
-(void)startDirectionsToPreviewRouteWithCompletionHandler:(/*^block*/id)arg1;
-(void)clearPreviewRouteWithCompletionHandler:(/*^block*/id)arg1;

@end

