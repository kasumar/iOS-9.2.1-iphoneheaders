/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCharacterSet, NSString;

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding> {

	NSCharacterSet* _characterSet;
	BOOL _inverted;
	long long _baseIdentifier;
	NSString* _charactersAddedToBase;

}

@property (nonatomic,readonly) NSCharacterSet * characterSet; 
@property (nonatomic,readonly) long long baseIdentifier;                   //@synthesize baseIdentifier=_baseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * charactersAddedToBase;               //@synthesize charactersAddedToBase=_charactersAddedToBase - In the implementation block
@property (nonatomic,readonly) BOOL inverted;                              //@synthesize inverted=_inverted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)inverted;
-(NSString *)charactersAddedToBase;
-(void)clearCachedCharacterSet;
-(id)initWithBase:(long long)arg1 additionalCharacters:(id)arg2 inverted:(BOOL)arg3 ;
-(id)invertedSetDescription;
-(long long)baseIdentifier;
-(id)newCharacterSetFromDescription;
-(void)setCharactersAddedToBase:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithCharactersInString:(id)arg1 ;
-(id)initWithBaseCharacterSet:(long long)arg1 ;
-(NSCharacterSet *)characterSet;
@end

