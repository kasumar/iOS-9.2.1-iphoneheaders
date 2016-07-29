/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewDescriptor.h>

@class NSArray;

@interface MusicCompositeEntityViewDescriptor : MusicEntityViewDescriptor {

	NSArray* _entityViewDescriptors;

}

@property (nonatomic,copy) NSArray * entityViewDescriptors;              //@synthesize entityViewDescriptors=_entityViewDescriptors - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEntityProvider:(id)arg1 ;
-(NSArray *)entityViewDescriptors;
-(id)initWithEntityViewDescriptors:(id)arg1 ;
-(void)enumerateContentDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(id)contentDescriptorForIndexPath:(id)arg1 ;
-(void)enumerateSectionHeaderContentDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(BOOL)includesShuffleAction;
-(id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1 ;
-(void)setEntityViewDescriptors:(NSArray *)arg1 ;
-(void)_setEntityProviderForEntityViewDescriptors:(id)arg1 ;
-(void)_registerForRelevantNotificationsFromViewDescriptors;
-(void)_unregisterForRelevantNotificationsFromViewDescriptors;
-(id)_providerListEntityProvider;
-(id)_entityViewDescriptorForEntityProvider:(id)arg1 ;
-(void)_handleDisplayValuesDidChangeNotification:(id)arg1 ;
@end
