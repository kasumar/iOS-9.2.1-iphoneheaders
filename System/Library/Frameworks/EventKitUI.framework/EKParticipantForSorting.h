/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject {

	EKParticipant* _participant;
	BOOL _isEmail;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)displayName;
-(id)participant;
-(id)initWithEKParticipant:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(BOOL)isEmail;
@end

