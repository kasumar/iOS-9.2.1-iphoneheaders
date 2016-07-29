/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface ActiveApplicationsTable : NSObject {

	NSMutableSet* fActiveApps;
	NSMutableSet* fKnownApps;

}
-(void)setAppBundleKnown:(id)arg1 ;
-(void)addAppBundle:(id)arg1 ;
-(void)removeAppBundle:(id)arg1 ;
-(BOOL)appBundleActive:(id)arg1 ;
-(BOOL)appBundleKnown:(id)arg1 ;
-(void)addAppBundleStr:(const char*)arg1 ;
-(void)removeAppBundleStr:(const char*)arg1 ;
-(BOOL)appBundleActiveStr:(const char*)arg1 ;
-(BOOL)appBundleKnownStr:(const char*)arg1 ;
-(void)setAppBundleKnownStr:(const char*)arg1 ;
-(void)dealloc;
-(id)init;
@end
