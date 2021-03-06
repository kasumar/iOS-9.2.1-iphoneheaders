/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HMLocationHandlerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMHomeDelegate, OS_dispatch_queue;
@class NSUUID, CLLocation, NSString, HMPendingRequests, HMUser, HMRoom, HMDelegateCaller, NSObject, HMHomeManager, HMMessageDispatcher, HMSetupViewController, HMThreadSafeMutableArrayCollection, NSArray;

@interface HMHome : NSObject <_HMLocationHandlerDelegate, NSSecureCoding, HMMessageReceiver, HMObjectMerge> {

	BOOL _primary;
	BOOL _adminUser;
	int _locationAuthorization;
	NSUUID* _uniqueIdentifier;
	id<HMHomeDelegate> _delegate;
	CLLocation* _homeLocation;
	NSString* _name;
	HMPendingRequests* _pendingRequests;
	HMUser* _currentUser;
	NSUUID* _uuid;
	HMRoom* _homeAsRoom;
	HMDelegateCaller* _delegateCaller;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMHomeManager* _homeManager;
	HMMessageDispatcher* _msgDispatcher;
	HMSetupViewController* _setupViewController;
	HMThreadSafeMutableArrayCollection* _currentAccessories;
	HMThreadSafeMutableArrayCollection* _currentRooms;
	HMThreadSafeMutableArrayCollection* _currentZones;
	HMThreadSafeMutableArrayCollection* _currentServiceGroups;
	HMThreadSafeMutableArrayCollection* _currentActionSets;
	HMThreadSafeMutableArrayCollection* _currentActions;
	HMThreadSafeMutableArrayCollection* _currentTriggers;
	HMThreadSafeMutableArrayCollection* _currentUsers;
	HMThreadSafeMutableArrayCollection* _currentResidentDevices;
	HMThreadSafeMutableArrayCollection* _currentOutgoingInvitations;

}

@property (nonatomic,copy,readonly) NSArray * triggers; 
@property (nonatomic,copy,readonly) NSArray * actionSets; 
@property (nonatomic,readonly) HMUser * currentUser; 
@property (nonatomic,copy,readonly) NSArray * users; 
@property (nonatomic,copy,readonly) NSArray * serviceGroups; 
@property (nonatomic,copy,readonly) NSArray * zones; 
@property (nonatomic,copy,readonly) NSArray * rooms; 
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (assign,nonatomic,__weak) id<HMHomeDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMPendingRequests * pendingRequests;                                          //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMRoom * homeAsRoom;                                                        //@synthesize homeAsRoom=_homeAsRoom - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                            //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                                   //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic,__weak) HMHomeManager * homeManager;                                           //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) CLLocation * homeLocation;                                                    //@synthesize homeLocation=_homeLocation - In the implementation block
@property (assign,nonatomic,__weak) HMSetupViewController * setupViewController;                           //@synthesize setupViewController=_setupViewController - In the implementation block
@property (nonatomic,retain) HMUser * currentUser;                                                         //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentAccessories;                      //@synthesize currentAccessories=_currentAccessories - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentRooms;                            //@synthesize currentRooms=_currentRooms - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentZones;                            //@synthesize currentZones=_currentZones - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentServiceGroups;                    //@synthesize currentServiceGroups=_currentServiceGroups - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentActionSets;                       //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentActions;                          //@synthesize currentActions=_currentActions - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentTriggers;                         //@synthesize currentTriggers=_currentTriggers - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentUsers;                            //@synthesize currentUsers=_currentUsers - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentResidentDevices;                  //@synthesize currentResidentDevices=_currentResidentDevices - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentOutgoingInvitations;              //@synthesize currentOutgoingInvitations=_currentOutgoingInvitations - In the implementation block
@property (assign,getter=isAdminUser,nonatomic) BOOL adminUser;                                            //@synthesize adminUser=_adminUser - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                                                    //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)url;
-(id)assistantUniqueIdentifier;
-(void)_queryRemoteAccessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryRemoteAccessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)triggers;
-(void)_addTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addActionSetWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)builtinActionSetOfType:(id)arg1 ;
-(void)addActionSetWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)actionSets;
-(id)location;
-(void)_manageUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addUser:(id)arg1 privilege:(unsigned long long)arg2 confirmWithLocalUser:(BOOL)arg3 confirmWithRemoteUser:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeUser:(id)arg1 confirm:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addUserWithoutConfirmation:(id)arg1 privilege:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addUser:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_removeUserWithoutConfirmation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_inviteUsers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addRegularUsersWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_createFailedAccessoriesListFromError:(id)arg1 ;
-(void)manageUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)homeAccessControlForUser:(id)arg1 ;
-(void)addUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addUserWithoutConfirmation:(id)arg1 privilege:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addUser:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)inviteUsers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)users;
-(id)residentDevices;
-(id)administrator;
-(void)_addServiceGroupWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeServiceGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addServiceGroupWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeServiceGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)serviceGroups;
-(void)_addZoneWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addZoneWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)zones;
-(void)_addRoomWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRoomWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)roomForEntireHome;
-(NSArray *)rooms;
-(void)_addAccessory:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_unblockAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_writeCharacteristicValues:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_readCharacteristicValues:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)servicesWithTypes:(id)arg1 ;
-(void)unblockAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readCharacteristicValues:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)accessories;
-(void)removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMHomeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<HMHomeDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(id)_privateDelegate;
-(void)setCurrentUser:(HMUser *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(HMDelegateCaller *)delegateCaller;
-(void)didUpdateAuthorization:(int)arg1 ;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)_removeServices:(id)arg1 ;
-(void)_setupBuiltinActionSets:(id)arg1 ;
-(void)_configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5 ;
-(HMRoom *)homeAsRoom;
-(HMThreadSafeMutableArrayCollection *)currentUsers;
-(CLLocation *)homeLocation;
-(void)_unconfigureHome;
-(unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2 ;
-(void)setHomeLocation:(CLLocation *)arg1 ;
-(HMThreadSafeMutableArrayCollection *)currentZones;
-(HMThreadSafeMutableArrayCollection *)currentAccessories;
-(HMThreadSafeMutableArrayCollection *)currentServiceGroups;
-(HMThreadSafeMutableArrayCollection *)currentTriggers;
-(HMThreadSafeMutableArrayCollection *)currentResidentDevices;
-(HMThreadSafeMutableArrayCollection *)currentOutgoingInvitations;
-(void)_handleHomeRenamedNotification:(id)arg1 ;
-(void)_handleHomeLocationUpdateNotificaton:(id)arg1 ;
-(void)_handleRoomAddedNotification:(id)arg1 ;
-(void)_handleRoomRemovedNotification:(id)arg1 ;
-(void)_handleZoneAddedNotification:(id)arg1 ;
-(void)_handleZoneRemovedNotification:(id)arg1 ;
-(void)_handleServiceGroupAddedNotification:(id)arg1 ;
-(void)_handleServiceGroupRemovedNotification:(id)arg1 ;
-(void)_handleActionSetAddedNotification:(id)arg1 ;
-(void)_handleActionSetRemovedNotification:(id)arg1 ;
-(void)_handleTimerTriggerAddedNotification:(id)arg1 ;
-(void)_handleEventTriggerAddedNotification:(id)arg1 ;
-(void)_handleTriggerRemovedNotification:(id)arg1 ;
-(void)_handleAccessoryAddedNotification:(id)arg1 ;
-(void)_handleAccessoryRemovedNotification:(id)arg1 ;
-(void)_handleUserAddedNotification:(id)arg1 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg1 ;
-(void)_handleUserRemovedNotification:(id)arg1 ;
-(void)_handleBlockedStateNotification:(id)arg1 ;
-(void)_handlePairedAccessoryErrorNotification:(id)arg1 ;
-(void)_handleMultipleCharacteristicValuesUpdated:(id)arg1 ;
-(void)_handleDiscoveredNewResidentDevice:(id)arg1 ;
-(void)_handleConfigurationStateChangedNotification:(id)arg1 ;
-(void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1 ;
-(void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3 ;
-(void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2 ;
-(void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2 ;
-(void)_retrieveLocation;
-(void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSetupViewController:(HMSetupViewController *)arg1 ;
-(HMSetupViewController *)setupViewController;
-(id)initWithName:(id)arg1 uuid:(id)arg2 actionSets:(id)arg3 ;
-(void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5 isAdminUser:(BOOL)arg6 ;
-(void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5 ;
-(void)unconfigureHome;
-(void)removeServices:(id)arg1 ;
-(void)_cancelInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_acceptInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentAccessories:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentZones:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentServiceGroups:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentTriggers:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentUsers:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentResidentDevices:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setCurrentOutgoingInvitations:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMHomeManager *)homeManager;
-(id)accessoryWithUUID:(id)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(id)actionSetWithUUID:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMThreadSafeMutableArrayCollection *)currentActionSets;
-(void)setCurrentActionSets:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)roomWithUUID:(id)arg1 ;
-(HMUser *)currentUser;
-(id)outgoingInvitations;
-(void)setAdminUser:(BOOL)arg1 ;
-(BOOL)isAdminUser;
-(id)roomWithName:(id)arg1 ;
-(id)zoneWithName:(id)arg1 ;
-(id)zoneWithUUID:(id)arg1 ;
-(id)serviceGroupWithName:(id)arg1 ;
-(id)serviceGroupWithUUID:(id)arg1 ;
-(id)actionSetWithName:(id)arg1 ;
-(id)triggerWithName:(id)arg1 ;
-(id)triggerWithUUID:(id)arg1 ;
-(BOOL)isPrimary;
-(HMThreadSafeMutableArrayCollection *)currentActions;
-(void)setCurrentActions:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(HMPendingRequests *)pendingRequests;
-(void)setPendingRequests:(HMPendingRequests *)arg1 ;
-(HMThreadSafeMutableArrayCollection *)currentRooms;
-(void)setCurrentRooms:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)mergeWithNewObjectNoMergeCount:(id)arg1 ;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)_updateLocation:(id)arg1 ;
@end

