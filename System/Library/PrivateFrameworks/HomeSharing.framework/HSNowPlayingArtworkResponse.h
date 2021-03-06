/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse {

	NSData* _artworkData;
	NSString* _artworkMIMEType;

}

@property (nonatomic,retain) NSData * artworkData;                    //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,retain) NSString * artworkMIMEType;              //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(NSString *)artworkMIMEType;
@end

