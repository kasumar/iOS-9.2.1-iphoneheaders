/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <CoreFoundation/NSData.h>

@interface PLIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned long long _length;

}
+(id)dataWithIOSurface:(void*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2 ;
@end

