/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class NSMutableDictionary, NSString;

@interface SiriRestaurantsLogoProvider : NSObject {

	NSMutableDictionary* _resourceDict;
	NSString* _providerKey;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * providerKey;              //@synthesize providerKey=_providerKey - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(CGSize)logoSizeForType:(long long)arg1 ;
-(id)_logoInfoForType:(long long)arg1 ;
-(id)_logoInfoIfExistsForType:(long long)arg1 ;
-(void)setImageResourceName:(id)arg1 pressed:(id)arg2 punchOut:(id)arg3 forType:(long long)arg4 ;
-(void)setImageResourceWithKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3 type:(long long)arg4 ;
-(void)getLogoForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setProviderKey:(NSString *)arg1 ;
-(NSString *)providerKey;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end
