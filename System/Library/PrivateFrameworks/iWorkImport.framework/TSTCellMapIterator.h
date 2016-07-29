/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellMap, TSTCellUIDIterator, TSTCell;

@interface TSTCellMapIterator : NSObject {

	TSTCellMap* _cellMap;
	TSTCellUIDIterator* _cellUIDIterator;
	unsigned long long _index;
	BOOL _oneToMany;
	TSTCellUID _currentCellUID;
	TSTCell* _currentCell;

}
-(id)initWithCellMap:(id)arg1 ;
-(pair<TSTCell *, TSTCellUID>)nextCellAndCellUID;
-(const TSTCellUID*)currentCellUID;
-(id)currentCell;
@end
