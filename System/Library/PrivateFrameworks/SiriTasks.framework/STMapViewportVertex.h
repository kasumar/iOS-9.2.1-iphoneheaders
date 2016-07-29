/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface STMapViewportVertex : NSObject <NSSecureCoding> {

	double _latitude;
	double _longitude;

}

@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
@end
