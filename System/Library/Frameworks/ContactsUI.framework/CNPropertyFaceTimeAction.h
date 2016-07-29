/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {

	long long _type;
	CNPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)_queryFaceTimeStatus;
-(CNPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(void)queryComplete;
-(BOOL)canPerformAction;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
@end
