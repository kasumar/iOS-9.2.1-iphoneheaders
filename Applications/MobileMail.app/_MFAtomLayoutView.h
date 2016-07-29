/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MFAtomTextViewAtomLayout;
@class UIView;

@interface _MFAtomLayoutView : UIView {

	UIView*<MFAtomTextViewAtomLayout> _delegateView;

}

@property (nonatomic,readonly) UIEdgeInsets atomInsets; 
@property (nonatomic,retain) UIView*<MFAtomTextViewAtomLayout> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
+(id)layoutViewWithDelegateView:(id)arg1 ;
-(void)setMaskBounds:(CGRect)arg1 ;
-(CGRect)selectionBounds;
-(id)initWithDelegateView:(id)arg1 ;
-(UIEdgeInsets)atomInsets;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setDelegateView:(UIView*<MFAtomTextViewAtomLayout>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)viewForLastBaselineLayout;
-(UIView*<MFAtomTextViewAtomLayout>)delegateView;
@end
