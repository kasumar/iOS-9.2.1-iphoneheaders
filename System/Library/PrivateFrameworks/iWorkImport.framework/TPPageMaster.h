/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSWPHeaderFooterProvider.h>
#import <iWorkImport/TPMasterDrawableProvider.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSPCopying.h>

@class TPDocumentRoot, TPSection, TSWPStorage, NSMutableArray, NSArray, NSString;

@interface TPPageMaster : TSPObject <TSWPHeaderFooterProvider, TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying> {

	TPDocumentRoot* _documentRoot;
	TPSection* _section;
	TSWPStorage* _headerFooters[2][3];
	NSMutableArray* _masterDrawables;

}

@property (assign,nonatomic) TPSection * section;                      //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) NSArray * masterDrawables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setParentStorage:(id)arg1 ;
-(BOOL)isHeaderFooterEmpty:(int)arg1 ;
-(BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2 ;
-(BOOL)usesSingleHeaderFooter;
-(int)headerFooterTypeForModel:(id)arg1 ;
-(int)headerFragmentIndexForModel:(id)arg1 ;
-(id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2 ;
-(id)headerFooterFragmentEnumerator;
-(double)bodyWidth;
-(id)topLevelParentInfoForInfo:(id)arg1 ;
-(NSArray *)masterDrawables;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3 ;
-(void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 ;
-(void)i_setHeaderFooter:(int)arg1 storage:(id)arg2 fragmentIndex:(int)arg3 ;
-(void)i_addMasterDrawable:(id)arg1 ;
-(BOOL)containsModelObject:(id)arg1 ;
-(void)i_setDocumentRoot:(id)arg1 ;
-(BOOL)p_isInDocument;
-(void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4 ;
-(double)pHeightOfHeaderFooter:(int)arg1 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3 ;
-(void)i_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(BOOL)arg5 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 ;
-(id)p_headerAndFooterStorages;
-(void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4 ;
-(void)i_splitHeaderFooter:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4 ;
-(int)p_headerFragmentIndexForTabIndex:(unsigned)arg1 paragraphStyle:(id)arg2 bodyWidth:(double)arg3 ;
-(void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 stylesheet:(id)arg2 ;
-(unsigned long long)countOfMasterDrawables;
-(id)masterDrawablesSortedByZOrder:(id)arg1 ;
-(unsigned long long)indexOfMasterDrawable:(id)arg1 ;
-(void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4 ;
-(void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2 ;
-(void)i_importHeaderFooter:(id)arg1 headerType:(int)arg2 dolcContext:(id)arg3 splitHeaders:(BOOL)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(TPSection *)section;
-(double)headerHeight;
-(double)footerHeight;
-(void)setSection:(TPSection *)arg1 ;
-(id)childEnumerator;
-(id)initWithSection:(id)arg1 ;
-(id)documentRoot;
@end
