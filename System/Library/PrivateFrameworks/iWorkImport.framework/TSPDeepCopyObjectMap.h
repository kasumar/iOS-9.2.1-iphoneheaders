/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPDeepCopyObjectMap : NSObject {

	NSMapTable* _archivedObjects;
	NSMapTable* _originalIdentifierToDeepCopyObject;
	NSMapTable* _deepCopyIdentifierToOriginalObject;

}
-(void)didReadObjects:(id)arg1 ;
-(void)didWriteObjects:(id)arg1 ;
-(id)deepCopyForObject:(id)arg1 ;
-(id)objectForDeepCopy:(id)arg1 ;
@end

