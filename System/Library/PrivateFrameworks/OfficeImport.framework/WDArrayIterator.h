/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDIterator.h>

@class NSArray;

@interface WDArrayIterator : WDIterator {

	NSArray* mArray;
	unsigned mNextIndex;

}
-(id)next;
-(id)initWithArray:(id)arg1 ;
-(BOOL)hasNext;
@end
