/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL isMaster; 
-(CalDAVCalendarServerChangesItem *)changes;
-(id)init;
-(BOOL)isMaster;
-(id)copyParseRules;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)master;
-(CoreDAVLeafItem *)recurrenceID;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
@end

