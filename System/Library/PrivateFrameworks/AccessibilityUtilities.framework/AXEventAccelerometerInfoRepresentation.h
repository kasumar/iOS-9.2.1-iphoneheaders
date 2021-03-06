/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXEventAccelerometerInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned _type;
	float _x;
	float _y;
	float _z;

}

@property (assign,nonatomic) unsigned type;              //@synthesize type=_type - In the implementation block
@property (assign,x,nonatomic) float x;                  //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;                  //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;                  //@synthesize z=_z - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
@end

