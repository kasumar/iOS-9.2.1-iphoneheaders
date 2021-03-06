/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDocumentResourceDataStorage.h>

@interface TSPCachedDocumentResourceDataStorage : TSPDocumentResourceDataStorage {

	BOOL _isValidated;

}
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(BOOL)arg3 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)fileURL;
-(unsigned long long)encodedLength;
-(BOOL)isReadable;
-(BOOL)needsDownload;
@end

