/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PHSettingsAboutView, NSString;

@interface PHSettingsGenericAboutViewController : UIViewController {

	PHSettingsAboutView* _aboutView;
	NSString* _bodyText;

}

@property (nonatomic,retain) PHSettingsAboutView * aboutView;              //@synthesize aboutView=_aboutView - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                          //@synthesize bodyText=_bodyText - In the implementation block
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)setAboutView:(PHSettingsAboutView *)arg1 ;
-(PHSettingsAboutView *)aboutView;
-(void)loadView;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)done:(id)arg1 ;
@end
