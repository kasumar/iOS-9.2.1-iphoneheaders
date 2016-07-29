/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/BulletinBoardPlugins/CMASBBPlugin.bundle/CMASBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>

@class NSMutableArray, NSArray, BBSectionParameters, BBSectionInfo, NSMutableDictionary, NSString;

@interface CMASBBPlugin : NSObject <BBDataProvider> {

	NSMutableArray* _alerts;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	BBSectionInfo* _sectionInfo;
	NSMutableDictionary* _toneMap;
	NSString* _sectionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(void)_registerCMASToneWithURL:(id)arg1 ;
-(id)_placeholderVibe;
-(BOOL)_saveBulletins;
-(id)_priorAlertsDirectory;
-(id)_priorAlertsURL;
-(void)_populatePriorBulletins;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
@end
