/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {

	NSDate* _modificationDate;
	unsigned long long _fileSize;
	NSString* _generatorID;
	NSString* _generatorVersion;

}

@property (getter=isAutomaticallyGenerated,readonly) BOOL automaticallyGenerated; 
@property (copy) NSString * generatorID;                                                       //@synthesize generatorID=_generatorID - In the implementation block
@property (copy) NSString * generatorVersion;                                                  //@synthesize generatorVersion=_generatorVersion - In the implementation block
@property (copy) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) unsigned long long fileSize;                                                //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDate *)modificationDate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setGeneratorID:(NSString *)arg1 ;
-(void)setGeneratorVersion:(NSString *)arg1 ;
-(id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 generatorID:(id)arg3 generatorVersion:(id)arg4 ;
-(id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(NSString *)generatorID;
-(NSString *)generatorVersion;
-(id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1 ;
-(BOOL)isAutomaticallyGenerated;
-(unsigned long long)fileSize;
@end
