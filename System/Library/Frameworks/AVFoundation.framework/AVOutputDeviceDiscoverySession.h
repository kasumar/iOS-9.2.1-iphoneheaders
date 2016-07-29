/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySessionInternal, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
-(unsigned long long)_pu_routeAvailability;
-(void)dealloc;
-(id)init;
-(void)setDiscoveryMode:(long long)arg1 ;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 ;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)_handlePickerServerConnectionDiedNotification;
-(NSArray *)availableOutputDevices;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(void)finalize;
@end
