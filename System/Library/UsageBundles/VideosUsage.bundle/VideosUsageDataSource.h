/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSString;

@interface VideosUsageDataSource : MPUQueryDataSource {

	NSString* _categoryIdentifier;
	/*^block*/id _itemBlock;
	/*^block*/id _headerBlock;

}

@property (nonatomic,copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) id itemBlock;                                        //@synthesize itemBlock=_itemBlock - In the implementation block
@property (nonatomic,copy) id headerBlock;                                      //@synthesize headerBlock=_headerBlock - In the implementation block
-(id)itemBlock;
-(id)_prunedDataSource;
-(void)setHeaderBlock:(id)arg1 ;
-(id)headerBlock;
-(id)usageItemForEntity:(id)arg1 ;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 categoryIdentifier:(id)arg3 usageItemBlock:(/*^block*/id)arg4 usageHeaderBlock:(/*^block*/id)arg5 ;
-(void)setItemBlock:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)headerItem;
-(NSString *)categoryIdentifier;
@end

