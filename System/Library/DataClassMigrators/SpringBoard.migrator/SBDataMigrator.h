/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/SpringBoard.migrator/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class NSArray, SBSplashBoardMigrationController;

@interface SBDataMigrator : DataClassMigrator {

	BOOL _done;
	NSArray* _allInstalledApps;
	SBSplashBoardMigrationController* _xbController;

}
-(void)performBadgingDisabledMigration;
-(void)warmUpIcons;
-(void)performALSMigration;
-(void)performTransientLocalNotificationsMigration;
-(void)performGameCenterNotificationsMigration;
-(void)performSplashBoardLaunchImagesMigration;
-(void)performSplashBoardSystemLaunchImagesMigration;
-(void)performNotificationCenterTodayViewDataMigration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end
