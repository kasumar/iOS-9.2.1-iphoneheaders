/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned char volumeUUID[16];
	unsigned long long documentID;
	int deviceID;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDocumentIdentifier:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(BOOL)arg3 error:(id*)arg4 ;
@end

