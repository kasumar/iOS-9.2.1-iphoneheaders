/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ODRBackgroundMaintenance : NSObject {

	NSOperationQueue* _maintenanceQueue;

}
+(id)sharedInstance;
-(void)cancelBackgroundMaintenanceOperations;
-(void)startBackgroundMaintenanceOperations;
-(id)_workValidationOperation;
-(id)_launchServicesSyncOperation;
-(id)_validateManifestsOperation;
-(id)_validateOnDeviceManifestsOperation;
-(id)_validateOnDeviceAssetPacksOperation;
-(id)_validateDownloadsOperation;
-(id)_init;
@end

