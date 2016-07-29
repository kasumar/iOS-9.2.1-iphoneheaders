/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferAllocator.h>

@protocol MTLDevice;
@class NSString;

@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {

	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;                //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(id)newZone:(unsigned long long)arg1 ;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2 ;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3 ;
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end
