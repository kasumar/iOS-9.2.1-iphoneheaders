/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
-(void)cancel;
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(MKTileOverlayRequester *)delegate;
-(GEOTileKey)key;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)start;
-(void)setKey:(GEOTileKey)arg1 ;
@end
