/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration> {

	MCPayload* _payload;
	MCPayloadInfo* _payloadInfo;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) MCPayload * payload;                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) MCPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;               //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(MCPayload *)payload;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(MCPayload *)arg1 ;
-(void)_setup;
-(MCPayloadInfo *)payloadInfo;
-(void)setPayloadInfo:(MCPayloadInfo *)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithPayloadInfo:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setTitle:(id)arg1 keyValueSections:(id)arg2 ;
@end

