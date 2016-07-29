/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/MailUsage.bundle/MailUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class NSArray, NSDictionary, NSString;

@interface MFMailUsageReporter : NSObject <PSStorageReporting> {

	NSArray* _bundleApps;
	NSDictionary* _categorySizes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(id)_totalFileSizeAtPath:(id)arg1 ;
-(id)_bundleApps;
-(id)_categorySizes;
-(void)dealloc;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end
