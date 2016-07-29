/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface BBColor : NSObject <BBUniquableObject, NSSecureCoding, NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,copy,readonly) UIColor * uiColor; 
@property (nonatomic,readonly) double red;                          //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                        //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                         //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                        //@synthesize alpha=_alpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(BOOL)supportsSecureCoding;
-(UIColor *)uiColor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)alpha;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(id)uniqueIdentifier;
-(id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
@end
