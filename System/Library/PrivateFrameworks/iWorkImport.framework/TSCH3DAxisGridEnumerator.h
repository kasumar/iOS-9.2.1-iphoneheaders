/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis;

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator {

	TSCHChartAxis* mAxis;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) TSCHChartAxis * axis; 
+(id)enumeratorWithAxis:(id)arg1 ;
-(id)initWithAxis:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(int)type;
-(AxisGridLocation)position;
-(TSCHChartAxis *)axis;
-(void)update;
@end

