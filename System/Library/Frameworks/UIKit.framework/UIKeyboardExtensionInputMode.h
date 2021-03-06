/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
-(void)dealloc;
-(id)hardwareLayout;
-(BOOL)isExtensionInputMode;
-(id)identifierWithLayouts;
-(BOOL)isDefaultRightToLeft;
-(BOOL)isAllowedForTraits:(id)arg1 ;
-(BOOL)defaultLayoutIsASCIICapable;
-(void)setPrimaryLanguage:(id)arg1 ;
-(BOOL)isDesiredForTraits:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)containingBundle;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)displayName;
-(id)containingBundleDisplayName;
-(id)normalizedIdentifierLevels;
-(id)extendedDisplayName;
@end

