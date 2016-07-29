/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

@interface PLPhotoBakedThumbnailsCollection : NSObject {

	NSData* _data;
	NSMutableDictionary* _bakedThumbnails;

}
+(void)setTesting:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)saveToFile:(id)arg1 ;
-(void)_parseDataWithContentsOfFile:(id)arg1 ;
-(id)availableFormats;
-(id)bakedThumbnailsForFormat:(int)arg1 ;
-(void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2 ;
@end
