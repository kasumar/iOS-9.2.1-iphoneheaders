/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathManipulation.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSDBrushPathManipulation : TSDPathManipulation {

	CGPathRef mBrushStroke;
	double mRepeatLength;
	NSMutableDictionary* mSections;
	NSMutableArray* mMiddleSections;
	NSMutableArray* mSmallSections;
	double mSmallLimitWidth;
	BOOL mSplitAtSharpAngles;

}
@end
