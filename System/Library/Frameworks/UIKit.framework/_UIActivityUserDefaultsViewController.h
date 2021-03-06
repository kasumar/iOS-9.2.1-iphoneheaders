/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, _UIActivityUserDefaults, UIImage;

@interface _UIActivityUserDefaultsViewController : UITableViewController {

	NSArray* _activities;
	_UIActivityUserDefaults* _userDefaults;
	UIImage* _placeholderImage;

}

@property (nonatomic,copy) NSArray * activities;                                  //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                          //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(_UIActivityUserDefaults *)userDefaults;
-(NSArray *)activities;
-(void)setActivities:(NSArray *)arg1 ;
-(long long)preferredActivityCategory;
-(id)activityForRowAtIndexPath:(id)arg1 ;
-(id)settingsImageForActivity:(id)arg1 ;
-(void)toggleActivityHiddenForControl:(id)arg1 ;
-(void)toggleActivityHiddenForRowAtIndexPath:(id)arg1 ;
-(id)initWithActivities:(id)arg1 userDefaults:(id)arg2 ;
@end

