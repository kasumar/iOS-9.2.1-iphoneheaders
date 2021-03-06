/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	double _hOffset;
	int _vOffsetType;
	double _vOffset;

}

@property (nonatomic,retain,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                                  //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) double hOffset;                                   //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                                  //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) double vOffset;                                   //@synthesize vOffset=_vOffset - In the implementation block
@property (nonatomic,readonly) double descent; 
+(void)setPositionerClass:(Class)arg1 ;
-(id)textStorages;
-(id)textRepresentationForCopy;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(BOOL)isHTMLWrap;
-(void)setParentStorage:(id)arg1 ;
-(BOOL)isPartitioned;
-(void)clearParentStorageForDealloc;
-(double)hOffset;
-(void)setHOffset:(double)arg1 ;
-(double)vOffset;
-(void)setVOffset:(double)arg1 ;
-(int)hOffsetType;
-(int)vOffsetType;
-(id)objectsForStyleMigrating;
-(void)infoChanged;
-(Class)positionerClass;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)supportsUUID;
-(void)loadMessage:(const DrawableAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveMessage:(DrawableAttachmentArchive*)arg1 toArchiver:(id)arg2 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidate;
-(BOOL)isAnchored;
-(double)descent;
-(int)elementKind;
-(BOOL)isDrawable;
-(BOOL)isSearchable;
-(TSDDrawableInfo *)drawable;
@end

