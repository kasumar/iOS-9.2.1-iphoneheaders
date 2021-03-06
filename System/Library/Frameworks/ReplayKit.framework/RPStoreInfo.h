/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                 //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
-(NSArray *)categories;
-(void)setAppName:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)bundleID;
-(NSString *)appName;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
@end

