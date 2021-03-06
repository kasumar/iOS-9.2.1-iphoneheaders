/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSArray, NSString;

@interface MSCLValueTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	long long _selectedIndex;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;
	NSArray* _values;

}

@property (nonatomic,copy) id selectionBlock;                       //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
-(id)initWithValues:(id)arg1 selectedIndex:(long long)arg2 ;
@end

