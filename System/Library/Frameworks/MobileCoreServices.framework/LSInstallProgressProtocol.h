/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSInstallProgressProtocol <NSObject>
@required
-(void)addObserver:(id)arg1 withUUID:(id)arg2;
-(void)removeObserverWithUUID:(id)arg1;
-(void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(BOOL)arg3;
-(void)beginObservingConnection;
-(void)endObservingConnection;
-(void)sendFailedNotificationForApp:(id)arg1 isUninstall:(BOOL)arg2;
-(void)installationEndedForApplication:(id)arg1;
-(void)sendInstalledNotificationForApps:(id)arg1;
-(void)sendUninstalledNotificationForApps:(id)arg1;
-(void)placeholderInstalledForApp:(id)arg1;
-(void)sendIconUpdatedNotificationForApp:(id)arg1;
-(void)sendChangeNotificationForApp:(id)arg1;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendInstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendUninstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2;

@end

