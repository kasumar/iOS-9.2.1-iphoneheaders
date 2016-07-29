/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {

	BOOL _invitationRecordsDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) PLGenericAlbum * album; 
@property (nonatomic,readonly) BOOL invitationRecordsDidChange; 
+(id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 ;
-(id)name;
-(id)userInfo;
-(void)_calculateDiffs;
-(BOOL)invitationRecordsDidChange;
-(PLGenericAlbum *)album;
@end
