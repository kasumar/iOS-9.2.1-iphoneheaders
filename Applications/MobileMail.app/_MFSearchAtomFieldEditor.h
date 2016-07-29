/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/_MFAtomFieldEditor.h>

@class _MFSearchAtomTextView, MFAtomSearchBar;

@interface _MFSearchAtomFieldEditor : _MFAtomFieldEditor {

	struct {
		unsigned animatePlaceholderOnResignFirstResponder : 1;
		unsigned deferringFirstResponder : 1;
		unsigned preventSelectionViewActivation : 1;
	}  _flags;

}

@property (getter=_hostView,nonatomic,retain,readonly) _MFSearchAtomTextView * hostView; 
@property (getter=_searchBar,nonatomic,retain,readonly) MFAtomSearchBar * searchBar; 
@property (nonatomic,readonly) BOOL deferringFirstResponder; 
@property (assign,nonatomic) BOOL preventSelectionViewActivation; 
-(id)_searchBar;
-(void)setPreventSelectionViewActivation:(BOOL)arg1 ;
-(BOOL)deferringFirstResponder;
-(id)_hostView;
-(BOOL)preventSelectionViewActivation;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)_becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
@end
