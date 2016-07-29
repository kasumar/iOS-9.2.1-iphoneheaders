/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sinfs; 
@property (nonatomic,copy,readonly) NSURL * URL; 
-(NSURL *)URL;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)downloadKey;
-(NSString *)flavor;
-(NSArray *)sinfs;
@end
