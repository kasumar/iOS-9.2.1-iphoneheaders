/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UITextView *)textView;
-(id)valueView;
-(void)setLabelTextAttributes:(id)arg1 ;
-(double)bottomBaselineConstant;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(void)performDefaultAction;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
-(UILabel *)labelLabel;
@end

