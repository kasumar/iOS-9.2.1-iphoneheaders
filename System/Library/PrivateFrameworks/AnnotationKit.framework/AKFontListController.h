/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, UIFont;

@interface AKFontListController : NSObject {

	NSArray* _fonts;
	UIFont* _defaultFont;

}

@property (retain) NSArray * fonts;                   //@synthesize fonts=_fonts - In the implementation block
@property (retain) UIFont * defaultFont;              //@synthesize defaultFont=_defaultFont - In the implementation block
+(id)attributedStringForFont:(id)arg1 ;
-(UIFont *)defaultFont;
-(void)setFonts:(NSArray *)arg1 ;
-(id)_createFontsList;
-(void)setDefaultFont:(UIFont *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(NSArray *)fonts;
@end

