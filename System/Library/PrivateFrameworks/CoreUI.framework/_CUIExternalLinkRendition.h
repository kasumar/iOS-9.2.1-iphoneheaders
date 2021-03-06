/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString, NSMutableSet;

@interface _CUIExternalLinkRendition : CUIThemeRendition {

	NSString* _assetPackIdentifier;
	NSMutableSet* _externalTags;

}
-(id)externalTags;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)assetPackIdentifier;
-(void)dealloc;
@end

