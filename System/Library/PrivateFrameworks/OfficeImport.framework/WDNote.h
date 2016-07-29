/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mAutomaticNumbering;

}
-(void)dealloc;
-(id)description;
-(id)text;
-(int)runType;
-(id)reference;
-(void)setAutomaticNumbering:(BOOL)arg1 ;
-(BOOL)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2 ;
@end
