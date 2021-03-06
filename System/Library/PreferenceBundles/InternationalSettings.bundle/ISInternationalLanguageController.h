/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchBar, UITableView, UIView, ISLanguage, NSArray, NSString;

@interface ISInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UISearchBar* _searchBar;
	UITableView* _tableView;
	UIView* _contentView;
	BOOL _searchIsActive;
	ISLanguage* _checkedLanguage;
	NSArray* _deviceLanguages;
	NSArray* _otherLanguages;
	NSArray* _filteredDeviceLanguages;
	NSArray* _filteredOtherLanguages;
	NSString* _savedSearchTerm;

}

@property (nonatomic,retain) ISLanguage * checkedLanguage;                   //@synthesize checkedLanguage=_checkedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguages;                      //@synthesize deviceLanguages=_deviceLanguages - In the implementation block
@property (nonatomic,retain) NSArray * otherLanguages;                       //@synthesize otherLanguages=_otherLanguages - In the implementation block
@property (nonatomic,retain) NSArray * filteredDeviceLanguages;              //@synthesize filteredDeviceLanguages=_filteredDeviceLanguages - In the implementation block
@property (nonatomic,retain) NSArray * filteredOtherLanguages;               //@synthesize filteredOtherLanguages=_filteredOtherLanguages - In the implementation block
@property (nonatomic,retain) NSString * savedSearchTerm;                     //@synthesize savedSearchTerm=_savedSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL searchIsActive;                            //@synthesize searchIsActive=_searchIsActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg1 ;
-(NSArray *)otherLanguages;
-(void)setFilteredOtherLanguages:(NSArray *)arg1 ;
-(void)sortByLocalizedLanguage:(id)arg1 ;
-(void)setOtherLanguages:(NSArray *)arg1 ;
-(NSArray *)filteredOtherLanguages;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)cancelButtonTapped;
-(void)updateNavigationItem;
-(void)generateLanguageCells;
-(void)setFilteredDeviceLanguages:(NSArray *)arg1 ;
-(void)loadData;
-(id)_mainContentView;
-(void)setCheckedLanguage:(ISLanguage *)arg1 ;
-(void)setDeviceLanguages:(NSArray *)arg1 ;
-(NSArray *)filteredDeviceLanguages;
-(NSArray *)deviceLanguages;
-(ISLanguage *)checkedLanguage;
-(void)doneButtonTapped;
-(id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2 ;
-(void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)arg1 ;
-(NSString *)savedSearchTerm;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(BOOL)searchIsActive;
-(void)setSearchIsActive:(BOOL)arg1 ;
@end

