/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPDocumentAndData : NSObject {

	CGPDFDocumentRef document;
	CFDataRef sourceData;

}

@property (retain) CGPDFDocumentRef document; 
@property (retain) CFDataRef sourceData; 
-(void)dealloc;
-(CGPDFDocumentRef)document;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(void)setSourceData:(CFDataRef)arg1 ;
-(CFDataRef)sourceData;
@end

