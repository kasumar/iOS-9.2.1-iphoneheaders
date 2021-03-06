/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DLightShaderEffectState : NSObject {

	NSMutableArray* mLights;
	LightingPackageShaderEffectState mPackageState;

}
+(id)effectState;
-(const LightingPackageShaderEffectState*)packageState;
-(void)setPackageState:(const LightingPackageShaderEffectState*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

