/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@interface TSTInNode : TSTExpressionNode
+(id)inString;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(InNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const InNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)argumentSpec;
-(id)formulaPlainText;
-(id)string;
-(int)tokenType;
@end
