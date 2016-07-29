/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DownloadAsset : SSMemoryEntity <NSCopying>
+(Class)databaseEntityClass;
-(id)initWithClientXPCAsset:(id)arg1 ;
-(id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(BOOL)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
@end
