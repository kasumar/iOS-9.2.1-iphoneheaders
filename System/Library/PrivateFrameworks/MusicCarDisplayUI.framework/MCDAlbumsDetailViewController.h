/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDTableViewController.h>

@interface MCDAlbumsDetailViewController : MCDTableViewController {

	double _maximumDurationWidth;

}

@property (nonatomic,readonly) double maximumDurationWidth; 
+(id)actionCellConfigurationClasses;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1 ;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(void)_updateTitle;
-(double)maximumDurationWidth;
@end

